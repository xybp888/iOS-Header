//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class HMDDevice, NSNumber, NSString;

@interface HMDResidentDeviceModel : HMDBackingStoreModelObject
{
}

+ (id)properties;

// Remaining properties
@property(retain, nonatomic) NSString *changeToken; // @dynamic changeToken;
@property(retain, nonatomic) NSNumber *confirmed; // @dynamic confirmed;
@property(retain, nonatomic) HMDDevice *device; // @dynamic device;
@property(retain, nonatomic) NSString *deviceUUID; // @dynamic deviceUUID;
@property(retain, nonatomic) NSNumber *enabled; // @dynamic enabled;

@end

