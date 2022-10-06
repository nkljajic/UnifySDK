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

// Prevent multiple inclusion
#pragma once

#include <app/util/privilege-storage.h>

// Prevent changing generated format
// clang-format off

////////////////////////////////////////////////////////////////////////////////

// Parallel array data (*cluster*, attribute, privilege) for read attribute
#define GENERATED_ACCESS_READ_ATTRIBUTE__CLUSTER { \
    /* Cluster: Basic, Attribute: NodeLabel, Privilege: view */ \
    /* Cluster: Basic, Attribute: Location, Privilege: view */ \
    /* Cluster: Basic, Attribute: LocalConfigDisabled, Privilege: view */ \
    /* Cluster: Color Control, Attribute: start up color temperature mireds, Privilege: view */ \
    /* Cluster: General Commissioning, Attribute: Breadcrumb, Privilege: view */ \
    49, /* Cluster: Network Commissioning, Attribute: MaxNetworks, Privilege: administer */ \
    49, /* Cluster: Network Commissioning, Attribute: Networks, Privilege: administer */ \
    /* Cluster: Network Commissioning, Attribute: InterfaceEnabled, Privilege: view */ \
    49, /* Cluster: Network Commissioning, Attribute: LastNetworkingStatus, Privilege: administer */ \
    49, /* Cluster: Network Commissioning, Attribute: LastNetworkID, Privilege: administer */ \
    49, /* Cluster: Network Commissioning, Attribute: LastConnectErrorValue, Privilege: administer */ \
    /* Cluster: On/Off, Attribute: StartUpOnOff, Privilege: view */ \
    /* Cluster: Pump Configuration and Control, Attribute: LifetimeRunningHours, Privilege: view */ \
    /* Cluster: Pump Configuration and Control, Attribute: LifetimeEnergyConsumed, Privilege: view */ \
    /* Cluster: Pump Configuration and Control, Attribute: OperationMode, Privilege: view */ \
    /* Cluster: Pump Configuration and Control, Attribute: ControlMode, Privilege: view */ \
    /* Cluster: Thermostat, Attribute: min heat setpoint limit, Privilege: view */ \
    /* Cluster: Thermostat, Attribute: max heat setpoint limit, Privilege: view */ \
    /* Cluster: Thermostat, Attribute: min cool setpoint limit, Privilege: view */ \
    /* Cluster: Thermostat, Attribute: max cool setpoint limit, Privilege: view */ \
    /* Cluster: Thermostat, Attribute: min setpoint dead band, Privilege: view */ \
    /* Cluster: Thermostat, Attribute: control sequence of operation, Privilege: view */ \
    /* Cluster: Thermostat, Attribute: system mode, Privilege: view */ \
    /* Cluster: Thermostat User Interface Configuration, Attribute: keypad lockout, Privilege: view */ \
    /* Cluster: Thermostat User Interface Configuration, Attribute: schedule programming visibility, Privilege: view */ \
    /* Cluster: Window Covering, Attribute: Mode, Privilege: view */ \
}

// Parallel array data (cluster, *attribute*, privilege) for read attribute
#define GENERATED_ACCESS_READ_ATTRIBUTE__ATTRIBUTE { \
    /* Cluster: Basic, Attribute: NodeLabel, Privilege: view */ \
    /* Cluster: Basic, Attribute: Location, Privilege: view */ \
    /* Cluster: Basic, Attribute: LocalConfigDisabled, Privilege: view */ \
    /* Cluster: Color Control, Attribute: start up color temperature mireds, Privilege: view */ \
    /* Cluster: General Commissioning, Attribute: Breadcrumb, Privilege: view */ \
    0, /* Cluster: Network Commissioning, Attribute: MaxNetworks, Privilege: administer */ \
    1, /* Cluster: Network Commissioning, Attribute: Networks, Privilege: administer */ \
    /* Cluster: Network Commissioning, Attribute: InterfaceEnabled, Privilege: view */ \
    5, /* Cluster: Network Commissioning, Attribute: LastNetworkingStatus, Privilege: administer */ \
    6, /* Cluster: Network Commissioning, Attribute: LastNetworkID, Privilege: administer */ \
    7, /* Cluster: Network Commissioning, Attribute: LastConnectErrorValue, Privilege: administer */ \
    /* Cluster: On/Off, Attribute: StartUpOnOff, Privilege: view */ \
    /* Cluster: Pump Configuration and Control, Attribute: LifetimeRunningHours, Privilege: view */ \
    /* Cluster: Pump Configuration and Control, Attribute: LifetimeEnergyConsumed, Privilege: view */ \
    /* Cluster: Pump Configuration and Control, Attribute: OperationMode, Privilege: view */ \
    /* Cluster: Pump Configuration and Control, Attribute: ControlMode, Privilege: view */ \
    /* Cluster: Thermostat, Attribute: min heat setpoint limit, Privilege: view */ \
    /* Cluster: Thermostat, Attribute: max heat setpoint limit, Privilege: view */ \
    /* Cluster: Thermostat, Attribute: min cool setpoint limit, Privilege: view */ \
    /* Cluster: Thermostat, Attribute: max cool setpoint limit, Privilege: view */ \
    /* Cluster: Thermostat, Attribute: min setpoint dead band, Privilege: view */ \
    /* Cluster: Thermostat, Attribute: control sequence of operation, Privilege: view */ \
    /* Cluster: Thermostat, Attribute: system mode, Privilege: view */ \
    /* Cluster: Thermostat User Interface Configuration, Attribute: keypad lockout, Privilege: view */ \
    /* Cluster: Thermostat User Interface Configuration, Attribute: schedule programming visibility, Privilege: view */ \
    /* Cluster: Window Covering, Attribute: Mode, Privilege: view */ \
}

// Parallel array data (cluster, attribute, *privilege*) for read attribute
#define GENERATED_ACCESS_READ_ATTRIBUTE__PRIVILEGE { \
    /* Cluster: Basic, Attribute: NodeLabel, Privilege: view */ \
    /* Cluster: Basic, Attribute: Location, Privilege: view */ \
    /* Cluster: Basic, Attribute: LocalConfigDisabled, Privilege: view */ \
    /* Cluster: Color Control, Attribute: start up color temperature mireds, Privilege: view */ \
    /* Cluster: General Commissioning, Attribute: Breadcrumb, Privilege: view */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Network Commissioning, Attribute: MaxNetworks, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Network Commissioning, Attribute: Networks, Privilege: administer */ \
    /* Cluster: Network Commissioning, Attribute: InterfaceEnabled, Privilege: view */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Network Commissioning, Attribute: LastNetworkingStatus, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Network Commissioning, Attribute: LastNetworkID, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Network Commissioning, Attribute: LastConnectErrorValue, Privilege: administer */ \
    /* Cluster: On/Off, Attribute: StartUpOnOff, Privilege: view */ \
    /* Cluster: Pump Configuration and Control, Attribute: LifetimeRunningHours, Privilege: view */ \
    /* Cluster: Pump Configuration and Control, Attribute: LifetimeEnergyConsumed, Privilege: view */ \
    /* Cluster: Pump Configuration and Control, Attribute: OperationMode, Privilege: view */ \
    /* Cluster: Pump Configuration and Control, Attribute: ControlMode, Privilege: view */ \
    /* Cluster: Thermostat, Attribute: min heat setpoint limit, Privilege: view */ \
    /* Cluster: Thermostat, Attribute: max heat setpoint limit, Privilege: view */ \
    /* Cluster: Thermostat, Attribute: min cool setpoint limit, Privilege: view */ \
    /* Cluster: Thermostat, Attribute: max cool setpoint limit, Privilege: view */ \
    /* Cluster: Thermostat, Attribute: min setpoint dead band, Privilege: view */ \
    /* Cluster: Thermostat, Attribute: control sequence of operation, Privilege: view */ \
    /* Cluster: Thermostat, Attribute: system mode, Privilege: view */ \
    /* Cluster: Thermostat User Interface Configuration, Attribute: keypad lockout, Privilege: view */ \
    /* Cluster: Thermostat User Interface Configuration, Attribute: schedule programming visibility, Privilege: view */ \
    /* Cluster: Window Covering, Attribute: Mode, Privilege: view */ \
}

////////////////////////////////////////////////////////////////////////////////

// Parallel array data (*cluster*, attribute, privilege) for write attribute
#define GENERATED_ACCESS_WRITE_ATTRIBUTE__CLUSTER { \
    40, /* Cluster: Basic, Attribute: NodeLabel, Privilege: manage */ \
    40, /* Cluster: Basic, Attribute: Location, Privilege: administer */ \
    40, /* Cluster: Basic, Attribute: LocalConfigDisabled, Privilege: manage */ \
    768, /* Cluster: Color Control, Attribute: start up color temperature mireds, Privilege: manage */ \
    48, /* Cluster: General Commissioning, Attribute: Breadcrumb, Privilege: administer */ \
    49, /* Cluster: Network Commissioning, Attribute: InterfaceEnabled, Privilege: administer */ \
    6, /* Cluster: On/Off, Attribute: StartUpOnOff, Privilege: manage */ \
    512, /* Cluster: Pump Configuration and Control, Attribute: LifetimeRunningHours, Privilege: manage */ \
    512, /* Cluster: Pump Configuration and Control, Attribute: LifetimeEnergyConsumed, Privilege: manage */ \
    512, /* Cluster: Pump Configuration and Control, Attribute: OperationMode, Privilege: manage */ \
    512, /* Cluster: Pump Configuration and Control, Attribute: ControlMode, Privilege: manage */ \
    513, /* Cluster: Thermostat, Attribute: min heat setpoint limit, Privilege: manage */ \
    513, /* Cluster: Thermostat, Attribute: max heat setpoint limit, Privilege: manage */ \
    513, /* Cluster: Thermostat, Attribute: min cool setpoint limit, Privilege: manage */ \
    513, /* Cluster: Thermostat, Attribute: max cool setpoint limit, Privilege: manage */ \
    513, /* Cluster: Thermostat, Attribute: min setpoint dead band, Privilege: manage */ \
    513, /* Cluster: Thermostat, Attribute: control sequence of operation, Privilege: manage */ \
    513, /* Cluster: Thermostat, Attribute: system mode, Privilege: manage */ \
    516, /* Cluster: Thermostat User Interface Configuration, Attribute: keypad lockout, Privilege: manage */ \
    516, /* Cluster: Thermostat User Interface Configuration, Attribute: schedule programming visibility, Privilege: manage */ \
    258, /* Cluster: Window Covering, Attribute: Mode, Privilege: manage */ \
}

// Parallel array data (cluster, *attribute*, privilege) for write attribute
#define GENERATED_ACCESS_WRITE_ATTRIBUTE__ATTRIBUTE { \
    5, /* Cluster: Basic, Attribute: NodeLabel, Privilege: manage */ \
    6, /* Cluster: Basic, Attribute: Location, Privilege: administer */ \
    16, /* Cluster: Basic, Attribute: LocalConfigDisabled, Privilege: manage */ \
    16400, /* Cluster: Color Control, Attribute: start up color temperature mireds, Privilege: manage */ \
    0, /* Cluster: General Commissioning, Attribute: Breadcrumb, Privilege: administer */ \
    4, /* Cluster: Network Commissioning, Attribute: InterfaceEnabled, Privilege: administer */ \
    16387, /* Cluster: On/Off, Attribute: StartUpOnOff, Privilege: manage */ \
    21, /* Cluster: Pump Configuration and Control, Attribute: LifetimeRunningHours, Privilege: manage */ \
    23, /* Cluster: Pump Configuration and Control, Attribute: LifetimeEnergyConsumed, Privilege: manage */ \
    32, /* Cluster: Pump Configuration and Control, Attribute: OperationMode, Privilege: manage */ \
    33, /* Cluster: Pump Configuration and Control, Attribute: ControlMode, Privilege: manage */ \
    21, /* Cluster: Thermostat, Attribute: min heat setpoint limit, Privilege: manage */ \
    22, /* Cluster: Thermostat, Attribute: max heat setpoint limit, Privilege: manage */ \
    23, /* Cluster: Thermostat, Attribute: min cool setpoint limit, Privilege: manage */ \
    24, /* Cluster: Thermostat, Attribute: max cool setpoint limit, Privilege: manage */ \
    25, /* Cluster: Thermostat, Attribute: min setpoint dead band, Privilege: manage */ \
    27, /* Cluster: Thermostat, Attribute: control sequence of operation, Privilege: manage */ \
    28, /* Cluster: Thermostat, Attribute: system mode, Privilege: manage */ \
    1, /* Cluster: Thermostat User Interface Configuration, Attribute: keypad lockout, Privilege: manage */ \
    2, /* Cluster: Thermostat User Interface Configuration, Attribute: schedule programming visibility, Privilege: manage */ \
    23, /* Cluster: Window Covering, Attribute: Mode, Privilege: manage */ \
}

// Parallel array data (cluster, attribute, *privilege*) for write attribute
#define GENERATED_ACCESS_WRITE_ATTRIBUTE__PRIVILEGE { \
    kMatterAccessPrivilegeManage, /* Cluster: Basic, Attribute: NodeLabel, Privilege: manage */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Basic, Attribute: Location, Privilege: administer */ \
    kMatterAccessPrivilegeManage, /* Cluster: Basic, Attribute: LocalConfigDisabled, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Color Control, Attribute: start up color temperature mireds, Privilege: manage */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: General Commissioning, Attribute: Breadcrumb, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Network Commissioning, Attribute: InterfaceEnabled, Privilege: administer */ \
    kMatterAccessPrivilegeManage, /* Cluster: On/Off, Attribute: StartUpOnOff, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Pump Configuration and Control, Attribute: LifetimeRunningHours, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Pump Configuration and Control, Attribute: LifetimeEnergyConsumed, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Pump Configuration and Control, Attribute: OperationMode, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Pump Configuration and Control, Attribute: ControlMode, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Thermostat, Attribute: min heat setpoint limit, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Thermostat, Attribute: max heat setpoint limit, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Thermostat, Attribute: min cool setpoint limit, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Thermostat, Attribute: max cool setpoint limit, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Thermostat, Attribute: min setpoint dead band, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Thermostat, Attribute: control sequence of operation, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Thermostat, Attribute: system mode, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Thermostat User Interface Configuration, Attribute: keypad lockout, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Thermostat User Interface Configuration, Attribute: schedule programming visibility, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Window Covering, Attribute: Mode, Privilege: manage */ \
}

////////////////////////////////////////////////////////////////////////////////

// Parallel array data (*cluster*, command, privilege) for invoke command
#define GENERATED_ACCESS_INVOKE_COMMAND__CLUSTER { \
    60, /* Cluster: AdministratorCommissioning, Command: OpenCommissioningWindow, Privilege: administer */ \
    60, /* Cluster: AdministratorCommissioning, Command: OpenBasicCommissioningWindow, Privilege: administer */ \
    60, /* Cluster: AdministratorCommissioning, Command: RevokeCommissioning, Privilege: administer */ \
    48, /* Cluster: General Commissioning, Command: ArmFailSafe, Privilege: administer */ \
    48, /* Cluster: General Commissioning, Command: SetRegulatoryConfig, Privilege: administer */ \
    48, /* Cluster: General Commissioning, Command: CommissioningComplete, Privilege: administer */ \
    4, /* Cluster: Groups, Command: AddGroup, Privilege: manage */ \
    4, /* Cluster: Groups, Command: RemoveGroup, Privilege: manage */ \
    4, /* Cluster: Groups, Command: RemoveAllGroups, Privilege: manage */ \
    4, /* Cluster: Groups, Command: AddGroupIfIdentifying, Privilege: manage */ \
    3, /* Cluster: Identify, Command: Identify, Privilege: manage */ \
    3, /* Cluster: Identify, Command: IdentifyQuery, Privilege: manage */ \
    49, /* Cluster: Network Commissioning, Command: ScanNetworks, Privilege: administer */ \
    49, /* Cluster: Network Commissioning, Command: AddOrUpdateWiFiNetwork, Privilege: administer */ \
    49, /* Cluster: Network Commissioning, Command: AddOrUpdateThreadNetwork, Privilege: administer */ \
    49, /* Cluster: Network Commissioning, Command: RemoveNetwork, Privilege: administer */ \
    49, /* Cluster: Network Commissioning, Command: ConnectNetwork, Privilege: administer */ \
    49, /* Cluster: Network Commissioning, Command: ReorderNetwork, Privilege: administer */ \
    62, /* Cluster: Operational Credentials, Command: AttestationRequest, Privilege: administer */ \
    62, /* Cluster: Operational Credentials, Command: CertificateChainRequest, Privilege: administer */ \
    62, /* Cluster: Operational Credentials, Command: CSRRequest, Privilege: administer */ \
    62, /* Cluster: Operational Credentials, Command: AddNOC, Privilege: administer */ \
    62, /* Cluster: Operational Credentials, Command: UpdateNOC, Privilege: administer */ \
    62, /* Cluster: Operational Credentials, Command: UpdateFabricLabel, Privilege: administer */ \
    62, /* Cluster: Operational Credentials, Command: RemoveFabric, Privilege: administer */ \
    62, /* Cluster: Operational Credentials, Command: AddTrustedRootCertificate, Privilege: administer */ \
    62, /* Cluster: Operational Credentials, Command: RemoveTrustedRootCertificate, Privilege: administer */ \
    5, /* Cluster: Scenes, Command: AddScene, Privilege: manage */ \
    5, /* Cluster: Scenes, Command: RemoveScene, Privilege: manage */ \
    5, /* Cluster: Scenes, Command: RemoveAllScenes, Privilege: manage */ \
    5, /* Cluster: Scenes, Command: StoreScene, Privilege: manage */ \
}

// Parallel array data (cluster, *command*, privilege) for invoke command
#define GENERATED_ACCESS_INVOKE_COMMAND__COMMAND { \
    0, /* Cluster: AdministratorCommissioning, Command: OpenCommissioningWindow, Privilege: administer */ \
    1, /* Cluster: AdministratorCommissioning, Command: OpenBasicCommissioningWindow, Privilege: administer */ \
    2, /* Cluster: AdministratorCommissioning, Command: RevokeCommissioning, Privilege: administer */ \
    0, /* Cluster: General Commissioning, Command: ArmFailSafe, Privilege: administer */ \
    2, /* Cluster: General Commissioning, Command: SetRegulatoryConfig, Privilege: administer */ \
    4, /* Cluster: General Commissioning, Command: CommissioningComplete, Privilege: administer */ \
    0, /* Cluster: Groups, Command: AddGroup, Privilege: manage */ \
    3, /* Cluster: Groups, Command: RemoveGroup, Privilege: manage */ \
    4, /* Cluster: Groups, Command: RemoveAllGroups, Privilege: manage */ \
    5, /* Cluster: Groups, Command: AddGroupIfIdentifying, Privilege: manage */ \
    0, /* Cluster: Identify, Command: Identify, Privilege: manage */ \
    1, /* Cluster: Identify, Command: IdentifyQuery, Privilege: manage */ \
    0, /* Cluster: Network Commissioning, Command: ScanNetworks, Privilege: administer */ \
    2, /* Cluster: Network Commissioning, Command: AddOrUpdateWiFiNetwork, Privilege: administer */ \
    3, /* Cluster: Network Commissioning, Command: AddOrUpdateThreadNetwork, Privilege: administer */ \
    4, /* Cluster: Network Commissioning, Command: RemoveNetwork, Privilege: administer */ \
    6, /* Cluster: Network Commissioning, Command: ConnectNetwork, Privilege: administer */ \
    8, /* Cluster: Network Commissioning, Command: ReorderNetwork, Privilege: administer */ \
    0, /* Cluster: Operational Credentials, Command: AttestationRequest, Privilege: administer */ \
    2, /* Cluster: Operational Credentials, Command: CertificateChainRequest, Privilege: administer */ \
    4, /* Cluster: Operational Credentials, Command: CSRRequest, Privilege: administer */ \
    6, /* Cluster: Operational Credentials, Command: AddNOC, Privilege: administer */ \
    7, /* Cluster: Operational Credentials, Command: UpdateNOC, Privilege: administer */ \
    9, /* Cluster: Operational Credentials, Command: UpdateFabricLabel, Privilege: administer */ \
    10, /* Cluster: Operational Credentials, Command: RemoveFabric, Privilege: administer */ \
    11, /* Cluster: Operational Credentials, Command: AddTrustedRootCertificate, Privilege: administer */ \
    12, /* Cluster: Operational Credentials, Command: RemoveTrustedRootCertificate, Privilege: administer */ \
    0, /* Cluster: Scenes, Command: AddScene, Privilege: manage */ \
    2, /* Cluster: Scenes, Command: RemoveScene, Privilege: manage */ \
    3, /* Cluster: Scenes, Command: RemoveAllScenes, Privilege: manage */ \
    4, /* Cluster: Scenes, Command: StoreScene, Privilege: manage */ \
}

// Parallel array data (cluster, command, *privilege*) for invoke command
#define GENERATED_ACCESS_INVOKE_COMMAND__PRIVILEGE { \
    kMatterAccessPrivilegeAdminister, /* Cluster: AdministratorCommissioning, Command: OpenCommissioningWindow, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: AdministratorCommissioning, Command: OpenBasicCommissioningWindow, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: AdministratorCommissioning, Command: RevokeCommissioning, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: General Commissioning, Command: ArmFailSafe, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: General Commissioning, Command: SetRegulatoryConfig, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: General Commissioning, Command: CommissioningComplete, Privilege: administer */ \
    kMatterAccessPrivilegeManage, /* Cluster: Groups, Command: AddGroup, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Groups, Command: RemoveGroup, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Groups, Command: RemoveAllGroups, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Groups, Command: AddGroupIfIdentifying, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Identify, Command: Identify, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Identify, Command: IdentifyQuery, Privilege: manage */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Network Commissioning, Command: ScanNetworks, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Network Commissioning, Command: AddOrUpdateWiFiNetwork, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Network Commissioning, Command: AddOrUpdateThreadNetwork, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Network Commissioning, Command: RemoveNetwork, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Network Commissioning, Command: ConnectNetwork, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Network Commissioning, Command: ReorderNetwork, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Operational Credentials, Command: AttestationRequest, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Operational Credentials, Command: CertificateChainRequest, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Operational Credentials, Command: CSRRequest, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Operational Credentials, Command: AddNOC, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Operational Credentials, Command: UpdateNOC, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Operational Credentials, Command: UpdateFabricLabel, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Operational Credentials, Command: RemoveFabric, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Operational Credentials, Command: AddTrustedRootCertificate, Privilege: administer */ \
    kMatterAccessPrivilegeAdminister, /* Cluster: Operational Credentials, Command: RemoveTrustedRootCertificate, Privilege: administer */ \
    kMatterAccessPrivilegeManage, /* Cluster: Scenes, Command: AddScene, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Scenes, Command: RemoveScene, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Scenes, Command: RemoveAllScenes, Privilege: manage */ \
    kMatterAccessPrivilegeManage, /* Cluster: Scenes, Command: StoreScene, Privilege: manage */ \
}

////////////////////////////////////////////////////////////////////////////////

// Parallel array data (*cluster*, event, privilege) for read event
#define GENERATED_ACCESS_READ_EVENT__CLUSTER { \
}

// Parallel array data (cluster, *event*, privilege) for read event
#define GENERATED_ACCESS_READ_EVENT__EVENT { \
}

// Parallel array data (cluster, event, *privilege*) for read event
#define GENERATED_ACCESS_READ_EVENT__PRIVILEGE { \
}

////////////////////////////////////////////////////////////////////////////////

// clang-format on