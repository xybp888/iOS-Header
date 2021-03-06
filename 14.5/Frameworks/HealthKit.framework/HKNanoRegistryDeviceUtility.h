//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HKNanoRegistryDeviceUtility : NSObject
{
}

+ (id)activePairedDevice;
+ (_Bool)isDeviceSeries4:(id)arg1;
+ (_Bool)isDeviceSeries3OrOlder:(id)arg1;
+ (_Bool)isDeviceRunningSeed:(id)arg1;
+ (id)electrocardiogramV2AvailableRegionsForDevice:(id)arg1;
+ (id)activePairedDeviceProductType;
+ (id)activePairedDeviceSystemBuildVersion;
+ (id)systemBuildVersionForDevice:(id)arg1;
+ (id)productTypeForDevice:(id)arg1;
+ (unsigned int)systemVersionForDevice:(id)arg1;

@end

