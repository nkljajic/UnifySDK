if(NOT PACKAGE_HELPER_INCLUDED)
  set(PACKAGE_HELPER_INCLUDED True)
else()
  return()
endif()

set(CPACK_COMPONENTS_GROUPING "IGNORE")
set(CPACK_DEB_COMPONENT_INSTALL ON)
set(CPACK_DEBIAN_ENABLE_COMPONENT_DEPENDS ON)
set(CPACK_DEB_PACKAGE_COMPONENT ON)

set(CPACK_PACKAGE_FILE_NAME
    "${CMAKE_PROJECT_NAME}_${FILE_NAME_VERSIONING_ARCH}")

# Common CPACK configuration
set(CPACK_PACKAGING_INSTALL_PREFIX "")

# Generate source tarball
set(CPACK_SOURCE_GENERATOR "TGZ")
set(CPACK_SOURCE_IGNORE_FILES
    "${PROJECT_SOURCE_DIR}/build.*/"
    "${PROJECT_SOURCE_DIR}/GeckoSDK.*/"
    "Jenkinsfile"
    "Earthfile"
    "\\\\.git*"
    "\\\\.pre-commit-config.yaml"
    "${PROJECT_SOURCE_DIR}/externals"
    "sonar-project\\\\.properties"
    "${PROJECT_SOURCE_DIR}/scripts/ci"
    "${PROJECT_SOURCE_DIR}/scripts/internal"
    ".*\\\\.internal\\\\.md")

# Generate Debian package
set(CPACK_GENERATOR "DEB")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Silicon Labs")

# Install headers of the specified target into the specified package. only .h
# files that reside inside the project root will be added, other items will be
# omitted.
function(install_headers TARGET DESTINATION PACKAGE)
  get_target_property(includes1 ${TARGET} INCLUDE_DIRECTORIES)
  get_target_property(includes2 ${TARGET} INTERFACE_INCLUDE_DIRECTORIES)

  foreach(include ${includes1} ${includes2})
    # omit include directories which are not part of this project. There are
    # cases where system directories are included. we obviously dont want to
    # export these headers.
    if((include MATCHES "${PROJECT_SOURCE_DIR}") OR (include MATCHES
                                                     "${PROJECT_BINARY_DIR}"))
      file(GLOB new_headers "${include}/*.h")
      file(GLOB new_hppheaders "${include}/*.hpp")
      list(APPEND headers ${new_headers} ${new_hppheaders})
    endif()
  endforeach()

  install(
    FILES ${headers}
    DESTINATION "include/${DESTINATION}"
    COMPONENT ${PACKAGE})
endfunction()

# Function arguments 1. PKG_NAME      component package Name 2. PKG_FILE_NAME
# Debian package filename for the component 3. PKG_DEPNDS    Component debian
# package depenedencies. 4. PKG_EXTRA     Component debian package Control extra
# info See https://cmake.org/cmake/help/v3.6/module/CPackDeb.html for more info
macro(add_component_to_uic PKG_NAME PKG_DESCRIPTION PKG_FILE_NAME PKG_DEPNDS
      PKG_EXTRA)
  if(NOT APPLE)
    string(TOUPPER ${PKG_NAME} PKG_NAME_UPPER)

    # Removing spaces generated by identation below
    string(REGEX REPLACE " " "" PKG_DEPNDS "${PKG_DEPNDS}")
    string(CONCAT CPACK_DEBIAN_${PKG_NAME_UPPER}_FILE_NAME "${PKG_FILE_NAME}_"
                  "${FILE_NAME_VERSIONING_ARCH}" ".deb")

    set(CPACK_DEBIAN_${PKG_NAME_UPPER}_PACKAGE_DEPENDS
        ${PKG_DEPNDS}
        CACHE STRING "Package dependencies for ${PKG_NAME}: ${PKG_DEPNDS}"
              FORCE)
    set(CPACK_DEBIAN_${PKG_NAME_UPPER}_FILE_NAME
        ${CPACK_DEBIAN_${PKG_NAME_UPPER}_FILE_NAME}
        CACHE
          STRING
          "Filename for ${PKG_NAME}: ${CPACK_DEBIAN_${PKG_NAME_UPPER}_FILE_NAME}"
          FORCE)
    set(CPACK_DEBIAN_${PKG_NAME_UPPER}_PACKAGE_NAME
        ${PKG_NAME}
        CACHE STRING "Package name for ${PKG_NAME}" FORCE)
    set(CPACK_DEBIAN_${PKG_NAME_UPPER}_DESCRIPTION_SUMMARY
        "Unify component ${PKG_NAME}"
        CACHE STRING "Summary for ${PKG_NAME}: Unify component ${PKG_NAME}"
              FORCE)
    set(CPACK_DEBIAN_${PKG_NAME_UPPER}_DESCRIPTION
        "${PKG_DESCRIPTION}"
        CACHE STRING "Description for ${PKG_NAME}: ${PKG_DESCRIPTION}" FORCE)

    # Removing spaces generated by identation below Saving the string back into
    # itself does not work for some reason, hence TMP_EXTRA.
    string(REPLACE " " "" TMP_EXTRA "${PKG_EXTRA}")
    set(CPACK_DEBIAN_${PKG_NAME_UPPER}_PACKAGE_CONTROL_EXTRA
        ${TMP_EXTRA}
        CACHE STRING "Extras for ${PKG_NAME}: ${TMP_EXTRA}" FORCE)

    # Remove the item incase it was already in list incase there was "ninja
    # package" done before
    list(REMOVE_ITEM CPACK_COMPONENTS_ALL "${PKG_NAME}")
    list(APPEND CPACK_COMPONENTS_ALL "${PKG_NAME}")
    set(CPACK_COMPONENTS_ALL
        ${CPACK_COMPONENTS_ALL}
        CACHE
          STRING
          "Packages that will have Debian packages built: ${CPACK_COMPONENTS_ALL}"
          FORCE)

    install(
      FILES "${CMAKE_SOURCE_DIR}/copyright"
      DESTINATION share/doc/${PKG_NAME}
      COMPONENT ${PKG_NAME})
  endif()
endmacro()

set(DEB_PACKAGE_FOLDER "unify_${FILE_NAME_VERSIONING_ARCH}")
set(DEB_PACKAGE_ZIP "${DEB_PACKAGE_FOLDER}.zip")
add_custom_target(
  deb
  DEPENDS package
  COMMAND mkdir -p "${DEB_PACKAGE_FOLDER}"
  COMMAND mv "\*_${FILE_NAME_VERSIONING_ARCH}.deb" "${DEB_PACKAGE_FOLDER}/"
  COMMAND cd "${DEB_PACKAGE_FOLDER}" && dpkg-scanpackages . /dev/null | gzip -9c
          > Packages.gz && cd ..
  COMMAND zip -rm "${DEB_PACKAGE_ZIP}" "${DEB_PACKAGE_FOLDER}"
  COMMAND mkdir -p deb-packages && mv "${DEB_PACKAGE_ZIP}" deb-packages
  COMMAND ${CMAKE_COMMAND} -E cmake_echo_color --cyan
          "Debian packages archived in deb-packages/${DEB_PACKAGE_FOLDER}.zip")
