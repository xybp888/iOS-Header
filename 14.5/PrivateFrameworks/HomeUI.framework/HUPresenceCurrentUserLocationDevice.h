//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDevice;

@interface HUPresenceCurrentUserLocationDevice : NSObject
{
    unsigned long long _type;
    HMDevice *_customDevice;
}

+ (id)customDeviceWithHMDevice:(id)arg1;
+ (id)currentDevice;
+ (id)FMFDevice;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMDevice *customDevice; // @synthesize customDevice=_customDevice;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithType:(unsigned long long)arg1 customDevice:(id)arg2;

@end

