//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface DeviceStateMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    int _deviceLockToken;
    _Bool _dataMigrationComplete;
    _Bool _deviceLocked;
    _Bool _setupComplete;
    _Bool _screenLocked;
}

+ (id)defaultMonitor;
- (void).cxx_destruct;
@property(readonly, getter=isScreenLocked) _Bool screenLocked; // @synthesize screenLocked=_screenLocked;
- (_Bool)_hasItemComplete:(id)arg1;
- (void)_addItemComplete:(id)arg1;
- (void)_markHasBooted;
- (_Bool)_checkIfFirstBoot;
- (void)_postStateDidChangeNotification;
- (void)markFsEntitlementsCompleteForBoot;
@property(readonly, getter=isSetupComplete) _Bool setupComplete; // @synthesize setupComplete=_setupComplete;
@property(readonly, getter=isFsEntitlementsCompleteForBoot) _Bool fsEntitlementsCompleteForBoot;
@property(readonly, getter=isDeviceLocked) _Bool deviceLocked; // @synthesize deviceLocked=_deviceLocked;
@property(readonly, getter=isDataMigrationComplete) _Bool dataMigrationComplete; // @synthesize dataMigrationComplete=_dataMigrationComplete;
- (id)init;

@end

