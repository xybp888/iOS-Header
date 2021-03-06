//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDDevice, NSString, NSUUID;
@protocol HMDDeviceControllerDelegate, HMFLocking;

@interface HMDDeviceController : HMFObject <HMFLogging>
{
    id <HMFLocking> _lock;
    NSUUID *_identifier;
    HMDDevice *_device;
    id <HMDDeviceControllerDelegate> _delegate;
}

+ (id)logCategory;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
@property __weak id <HMDDeviceControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)logIdentifier;
@property(readonly) HMDDevice *device;
- (id)attributeDescriptions;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;
- (void)updateWithDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

