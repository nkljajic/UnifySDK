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

#include <app/util/basic-types.h>

// Definitions for cluster: Identify
static constexpr chip::ClusterId ZCL_IDENTIFY_CLUSTER_ID = 0x0003;

// Definitions for cluster: Groups
static constexpr chip::ClusterId ZCL_GROUPS_CLUSTER_ID = 0x0004;

// Definitions for cluster: Scenes
static constexpr chip::ClusterId ZCL_SCENES_CLUSTER_ID = 0x0005;

// Definitions for cluster: On/Off
static constexpr chip::ClusterId ZCL_ON_OFF_CLUSTER_ID = 0x0006;

// Definitions for cluster: On/off Switch Configuration
static constexpr chip::ClusterId ZCL_ON_OFF_SWITCH_CONFIG_CLUSTER_ID = 0x0007;

// Definitions for cluster: Level Control
static constexpr chip::ClusterId ZCL_LEVEL_CONTROL_CLUSTER_ID = 0x0008;

// Definitions for cluster: Binary Input (Basic)
static constexpr chip::ClusterId ZCL_BINARY_INPUT_BASIC_CLUSTER_ID = 0x000F;

// Definitions for cluster: Pulse Width Modulation
static constexpr chip::ClusterId ZCL_PWM_CLUSTER_ID = 0x001C;

// Definitions for cluster: Descriptor
static constexpr chip::ClusterId ZCL_DESCRIPTOR_CLUSTER_ID = 0x001D;

// Definitions for cluster: Binding
static constexpr chip::ClusterId ZCL_BINDING_CLUSTER_ID = 0x001E;

// Definitions for cluster: Access Control
static constexpr chip::ClusterId ZCL_ACCESS_CONTROL_CLUSTER_ID = 0x001F;

// Definitions for cluster: Bridged Actions
static constexpr chip::ClusterId ZCL_BRIDGED_ACTIONS_CLUSTER_ID = 0x0025;

// Definitions for cluster: Basic
static constexpr chip::ClusterId ZCL_BASIC_CLUSTER_ID = 0x0028;

// Definitions for cluster: OTA Software Update Provider
static constexpr chip::ClusterId ZCL_OTA_PROVIDER_CLUSTER_ID = 0x0029;

// Definitions for cluster: OTA Software Update Requestor
static constexpr chip::ClusterId ZCL_OTA_REQUESTOR_CLUSTER_ID = 0x002A;

// Definitions for cluster: Localization Configuration
static constexpr chip::ClusterId ZCL_LOCALIZATION_CONFIGURATION_CLUSTER_ID = 0x002B;

// Definitions for cluster: Time Format Localization
static constexpr chip::ClusterId ZCL_TIME_FORMAT_LOCALIZATION_CLUSTER_ID = 0x002C;

// Definitions for cluster: Unit Localization
static constexpr chip::ClusterId ZCL_UNIT_LOCALIZATION_CLUSTER_ID = 0x002D;

// Definitions for cluster: Power Source Configuration
static constexpr chip::ClusterId ZCL_POWER_SOURCE_CONFIGURATION_CLUSTER_ID = 0x002E;

// Definitions for cluster: Power Source
static constexpr chip::ClusterId ZCL_POWER_SOURCE_CLUSTER_ID = 0x002F;

// Definitions for cluster: General Commissioning
static constexpr chip::ClusterId ZCL_GENERAL_COMMISSIONING_CLUSTER_ID = 0x0030;

// Definitions for cluster: Network Commissioning
static constexpr chip::ClusterId ZCL_NETWORK_COMMISSIONING_CLUSTER_ID = 0x0031;

// Definitions for cluster: Diagnostic Logs
static constexpr chip::ClusterId ZCL_DIAGNOSTIC_LOGS_CLUSTER_ID = 0x0032;

// Definitions for cluster: General Diagnostics
static constexpr chip::ClusterId ZCL_GENERAL_DIAGNOSTICS_CLUSTER_ID = 0x0033;

// Definitions for cluster: Software Diagnostics
static constexpr chip::ClusterId ZCL_SOFTWARE_DIAGNOSTICS_CLUSTER_ID = 0x0034;

// Definitions for cluster: Thread Network Diagnostics
static constexpr chip::ClusterId ZCL_THREAD_NETWORK_DIAGNOSTICS_CLUSTER_ID = 0x0035;

// Definitions for cluster: WiFi Network Diagnostics
static constexpr chip::ClusterId ZCL_WIFI_NETWORK_DIAGNOSTICS_CLUSTER_ID = 0x0036;

// Definitions for cluster: Ethernet Network Diagnostics
static constexpr chip::ClusterId ZCL_ETHERNET_NETWORK_DIAGNOSTICS_CLUSTER_ID = 0x0037;

// Definitions for cluster: Time Synchronization
static constexpr chip::ClusterId ZCL_TIME_SYNCHRONIZATION_CLUSTER_ID = 0x0038;

// Definitions for cluster: Bridged Device Basic
static constexpr chip::ClusterId ZCL_BRIDGED_DEVICE_BASIC_CLUSTER_ID = 0x0039;

// Definitions for cluster: Switch
static constexpr chip::ClusterId ZCL_SWITCH_CLUSTER_ID = 0x003B;

// Definitions for cluster: AdministratorCommissioning
static constexpr chip::ClusterId ZCL_ADMINISTRATOR_COMMISSIONING_CLUSTER_ID = 0x003C;

// Definitions for cluster: Operational Credentials
static constexpr chip::ClusterId ZCL_OPERATIONAL_CREDENTIALS_CLUSTER_ID = 0x003E;

// Definitions for cluster: Group Key Management
static constexpr chip::ClusterId ZCL_GROUP_KEY_MANAGEMENT_CLUSTER_ID = 0x003F;

// Definitions for cluster: Fixed Label
static constexpr chip::ClusterId ZCL_FIXED_LABEL_CLUSTER_ID = 0x0040;

// Definitions for cluster: User Label
static constexpr chip::ClusterId ZCL_USER_LABEL_CLUSTER_ID = 0x0041;

// Definitions for cluster: Proxy Configuration
static constexpr chip::ClusterId ZCL_PROXY_CONFIGURATION_CLUSTER_ID = 0x0042;

// Definitions for cluster: Proxy Discovery
static constexpr chip::ClusterId ZCL_PROXY_DISCOVERY_CLUSTER_ID = 0x0043;

// Definitions for cluster: Proxy Valid
static constexpr chip::ClusterId ZCL_PROXY_VALID_CLUSTER_ID = 0x0044;

// Definitions for cluster: Boolean State
static constexpr chip::ClusterId ZCL_BOOLEAN_STATE_CLUSTER_ID = 0x0045;

// Definitions for cluster: Mode Select
static constexpr chip::ClusterId ZCL_MODE_SELECT_CLUSTER_ID = 0x0050;

// Definitions for cluster: Door Lock
static constexpr chip::ClusterId ZCL_DOOR_LOCK_CLUSTER_ID = 0x0101;

// Definitions for cluster: Window Covering
static constexpr chip::ClusterId ZCL_WINDOW_COVERING_CLUSTER_ID = 0x0102;

// Definitions for cluster: Barrier Control
static constexpr chip::ClusterId ZCL_BARRIER_CONTROL_CLUSTER_ID = 0x0103;

// Definitions for cluster: Pump Configuration and Control
static constexpr chip::ClusterId ZCL_PUMP_CONFIG_CONTROL_CLUSTER_ID = 0x0200;

// Definitions for cluster: Thermostat
static constexpr chip::ClusterId ZCL_THERMOSTAT_CLUSTER_ID = 0x0201;

// Definitions for cluster: Fan Control
static constexpr chip::ClusterId ZCL_FAN_CONTROL_CLUSTER_ID = 0x0202;

// Definitions for cluster: Thermostat User Interface Configuration
static constexpr chip::ClusterId ZCL_THERMOSTAT_UI_CONFIG_CLUSTER_ID = 0x0204;

// Definitions for cluster: Color Control
static constexpr chip::ClusterId ZCL_COLOR_CONTROL_CLUSTER_ID = 0x0300;

// Definitions for cluster: Ballast Configuration
static constexpr chip::ClusterId ZCL_BALLAST_CONFIGURATION_CLUSTER_ID = 0x0301;

// Definitions for cluster: Illuminance Measurement
static constexpr chip::ClusterId ZCL_ILLUMINANCE_MEASUREMENT_CLUSTER_ID = 0x0400;

// Definitions for cluster: Temperature Measurement
static constexpr chip::ClusterId ZCL_TEMP_MEASUREMENT_CLUSTER_ID = 0x0402;

// Definitions for cluster: Pressure Measurement
static constexpr chip::ClusterId ZCL_PRESSURE_MEASUREMENT_CLUSTER_ID = 0x0403;

// Definitions for cluster: Flow Measurement
static constexpr chip::ClusterId ZCL_FLOW_MEASUREMENT_CLUSTER_ID = 0x0404;

// Definitions for cluster: Relative Humidity Measurement
static constexpr chip::ClusterId ZCL_RELATIVE_HUMIDITY_MEASUREMENT_CLUSTER_ID = 0x0405;

// Definitions for cluster: Occupancy Sensing
static constexpr chip::ClusterId ZCL_OCCUPANCY_SENSING_CLUSTER_ID = 0x0406;

// Definitions for cluster: Wake on LAN
static constexpr chip::ClusterId ZCL_WAKE_ON_LAN_CLUSTER_ID = 0x0503;

// Definitions for cluster: Channel
static constexpr chip::ClusterId ZCL_CHANNEL_CLUSTER_ID = 0x0504;

// Definitions for cluster: Target Navigator
static constexpr chip::ClusterId ZCL_TARGET_NAVIGATOR_CLUSTER_ID = 0x0505;

// Definitions for cluster: Media Playback
static constexpr chip::ClusterId ZCL_MEDIA_PLAYBACK_CLUSTER_ID = 0x0506;

// Definitions for cluster: Media Input
static constexpr chip::ClusterId ZCL_MEDIA_INPUT_CLUSTER_ID = 0x0507;

// Definitions for cluster: Low Power
static constexpr chip::ClusterId ZCL_LOW_POWER_CLUSTER_ID = 0x0508;

// Definitions for cluster: Keypad Input
static constexpr chip::ClusterId ZCL_KEYPAD_INPUT_CLUSTER_ID = 0x0509;

// Definitions for cluster: Content Launcher
static constexpr chip::ClusterId ZCL_CONTENT_LAUNCH_CLUSTER_ID = 0x050A;

// Definitions for cluster: Audio Output
static constexpr chip::ClusterId ZCL_AUDIO_OUTPUT_CLUSTER_ID = 0x050B;

// Definitions for cluster: Application Launcher
static constexpr chip::ClusterId ZCL_APPLICATION_LAUNCHER_CLUSTER_ID = 0x050C;

// Definitions for cluster: Application Basic
static constexpr chip::ClusterId ZCL_APPLICATION_BASIC_CLUSTER_ID = 0x050D;

// Definitions for cluster: Account Login
static constexpr chip::ClusterId ZCL_ACCOUNT_LOGIN_CLUSTER_ID = 0x050E;

// Definitions for cluster: Electrical Measurement
static constexpr chip::ClusterId ZCL_ELECTRICAL_MEASUREMENT_CLUSTER_ID = 0x0B04;

// Definitions for cluster: Test Cluster
static constexpr chip::ClusterId ZCL_TEST_CLUSTER_ID = 0xFFF1FC05;
