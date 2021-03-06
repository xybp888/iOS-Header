//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/HKCloudSyncObserverClientInterface-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKCloudSyncObserverStatus, HKTaskServerProxyProvider, NSProgress, NSString, NSUUID;
@protocol HKCloudSyncObserverDelegate;

@interface HKCloudSyncObserver : NSObject <_HKXPCExportable, HKCloudSyncObserverClientInterface>
{
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
    NSProgress *_progress;
    HKCloudSyncObserverStatus *_status;
    id <HKCloudSyncObserverDelegate> _delegate;
    struct os_unfair_lock_s _lock;
}

+ (id)clientInterface;
+ (id)serverInterface;
- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)_clientQueue_didCompleteSyncWithStatus:(long long)arg1 error:(id)arg2;
- (void)clientRemote_didUpdateObserverWithSyncStatus:(id)arg1;
- (void)clientRemote_syncDidStart;
- (void)startSyncIfRestoreNotCompleted;
- (void)startObservingSyncStatus;
- (id)progress;
@property(nonatomic) __weak id <HKCloudSyncObserverDelegate> delegate;
@property(readonly, copy, nonatomic) HKCloudSyncObserverStatus *status;
- (void)setProgress:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)initWithHealthStore:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

