/**
 *
 *    Copyright (c) 2020 Project CHIP Authors
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

#ifndef CHIP_DEVICE_INTERNAL_H
#define CHIP_DEVICE_INTERNAL_H

#import "CHIPDevice.h"
#import <Foundation/Foundation.h>

#include <app/ConcreteAttributePath.h>
#include <app/ConcreteCommandPath.h>
#include <app/DeviceProxy.h>

NS_ASSUME_NONNULL_BEGIN

@interface CHIPDevice ()

- (instancetype)initWithDevice:(chip::DeviceProxy *)device;
- (chip::DeviceProxy *)internalDevice;

@end

@interface CHIPAttributePath ()
- (instancetype)initWithPath:(const chip::app::ConcreteDataAttributePath &)path;
@end

@interface CHIPCommandPath ()
- (instancetype)initWithPath:(const chip::app::ConcreteCommandPath &)path;
@end

// Exported utility function
id _Nullable NSObjectFromCHIPTLV(chip::TLV::TLVReader * data);

NS_ASSUME_NONNULL_END

#endif /* CHIP_DEVICE_INTERNAL_H */
