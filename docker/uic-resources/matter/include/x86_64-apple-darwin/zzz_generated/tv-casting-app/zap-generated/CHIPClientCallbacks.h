/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP

#pragma once

#include <app-common/zap-generated/af-structs.h>
#include <app-common/zap-generated/cluster-objects.h>
#include <app/InteractionModelEngine.h>
#include <app/data-model/DecodableList.h>
#include <app/util/af-enums.h>
#include <app/util/attribute-filter.h>
#include <app/util/im-client-callbacks.h>
#include <inttypes.h>
#include <lib/support/FunctionTraits.h>
#include <lib/support/Span.h>

// List specific responses
void ApplicationLauncherClusterCatalogListListAttributeFilter(chip::TLV::TLVReader * data,
                                                              chip::Callback::Cancelable * onSuccessCallback,
                                                              chip::Callback::Cancelable * onFailureCallback);
typedef void (*ApplicationLauncherCatalogListListAttributeCallback)(void * context,
                                                                    const chip::app::DataModel::DecodableList<uint16_t> & data);
void AudioOutputClusterOutputListListAttributeFilter(chip::TLV::TLVReader * data, chip::Callback::Cancelable * onSuccessCallback,
                                                     chip::Callback::Cancelable * onFailureCallback);
typedef void (*AudioOutputOutputListListAttributeCallback)(
    void * context,
    const chip::app::DataModel::DecodableList<chip::app::Clusters::AudioOutput::Structs::OutputInfo::DecodableType> & data);
void ChannelClusterChannelListListAttributeFilter(chip::TLV::TLVReader * data, chip::Callback::Cancelable * onSuccessCallback,
                                                  chip::Callback::Cancelable * onFailureCallback);
typedef void (*ChannelChannelListListAttributeCallback)(
    void * context,
    const chip::app::DataModel::DecodableList<chip::app::Clusters::Channel::Structs::ChannelInfo::DecodableType> & data);
void ContentLauncherClusterAcceptHeaderListAttributeFilter(chip::TLV::TLVReader * data,
                                                           chip::Callback::Cancelable * onSuccessCallback,
                                                           chip::Callback::Cancelable * onFailureCallback);
typedef void (*ContentLauncherAcceptHeaderListAttributeCallback)(void * context,
                                                                 const chip::app::DataModel::DecodableList<chip::CharSpan> & data);
void DescriptorClusterDeviceListListAttributeFilter(chip::TLV::TLVReader * data, chip::Callback::Cancelable * onSuccessCallback,
                                                    chip::Callback::Cancelable * onFailureCallback);
typedef void (*DescriptorDeviceListListAttributeCallback)(
    void * context,
    const chip::app::DataModel::DecodableList<chip::app::Clusters::Descriptor::Structs::DeviceType::DecodableType> & data);
void DescriptorClusterServerListListAttributeFilter(chip::TLV::TLVReader * data, chip::Callback::Cancelable * onSuccessCallback,
                                                    chip::Callback::Cancelable * onFailureCallback);
typedef void (*DescriptorServerListListAttributeCallback)(void * context,
                                                          const chip::app::DataModel::DecodableList<chip::ClusterId> & data);
void DescriptorClusterClientListListAttributeFilter(chip::TLV::TLVReader * data, chip::Callback::Cancelable * onSuccessCallback,
                                                    chip::Callback::Cancelable * onFailureCallback);
typedef void (*DescriptorClientListListAttributeCallback)(void * context,
                                                          const chip::app::DataModel::DecodableList<chip::ClusterId> & data);
void DescriptorClusterPartsListListAttributeFilter(chip::TLV::TLVReader * data, chip::Callback::Cancelable * onSuccessCallback,
                                                   chip::Callback::Cancelable * onFailureCallback);
typedef void (*DescriptorPartsListListAttributeCallback)(void * context,
                                                         const chip::app::DataModel::DecodableList<chip::EndpointId> & data);
void MediaInputClusterInputListListAttributeFilter(chip::TLV::TLVReader * data, chip::Callback::Cancelable * onSuccessCallback,
                                                   chip::Callback::Cancelable * onFailureCallback);
typedef void (*MediaInputInputListListAttributeCallback)(
    void * context,
    const chip::app::DataModel::DecodableList<chip::app::Clusters::MediaInput::Structs::InputInfo::DecodableType> & data);
void TargetNavigatorClusterTargetListListAttributeFilter(chip::TLV::TLVReader * data,
                                                         chip::Callback::Cancelable * onSuccessCallback,
                                                         chip::Callback::Cancelable * onFailureCallback);
typedef void (*TargetNavigatorTargetListListAttributeCallback)(
    void * context,
    const chip::app::DataModel::DecodableList<chip::app::Clusters::TargetNavigator::Structs::TargetInfo::DecodableType> & data);