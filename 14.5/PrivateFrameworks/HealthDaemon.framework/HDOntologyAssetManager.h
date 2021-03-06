//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDPeriodicActivityDelegate-Protocol.h>

@class HDDaemon, HDPeriodicActivity, MAAsset, NSMutableDictionary, NSString, NSURL, _HKMobileAssetDownloadManager;
@protocol OS_dispatch_queue;

@interface HDOntologyAssetManager : NSObject <HDPeriodicActivityDelegate>
{
    _HKMobileAssetDownloadManager *_assetDownloadManager;
    NSObject<OS_dispatch_queue> *_downloadManagerCallbackQueue;
    NSObject<OS_dispatch_queue> *_handlerInvocationQueue;
    struct os_unfair_lock_s _ivarLock;
    int _notificationRegistrationToken;
    NSMutableDictionary *_registeredHandlers;
    _Bool _assetDownloadEnabled;
    CDUnknownBlockType _AWDMetricPosterBlock;
    MAAsset *_latestOntologyAsset;
    NSMutableDictionary *_completionsByActivityName;
    HDDaemon *_daemon;
    MAAsset *_currentOntologyAsset;
    long long _simulatedCompatibilityVersion;
    HDPeriodicActivity *_catalogUpdatePeriodicActivity;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HDPeriodicActivity *catalogUpdatePeriodicActivity; // @synthesize catalogUpdatePeriodicActivity=_catalogUpdatePeriodicActivity;
@property(nonatomic) _Bool assetDownloadEnabled; // @synthesize assetDownloadEnabled=_assetDownloadEnabled;
@property(nonatomic) long long simulatedCompatibilityVersion; // @synthesize simulatedCompatibilityVersion=_simulatedCompatibilityVersion;
@property(retain, nonatomic) MAAsset *currentOntologyAsset; // @synthesize currentOntologyAsset=_currentOntologyAsset;
@property(readonly, nonatomic) __weak HDDaemon *daemon; // @synthesize daemon=_daemon;
@property(readonly, copy, nonatomic) NSMutableDictionary *completionsByActivityName; // @synthesize completionsByActivityName=_completionsByActivityName;
@property(readonly, nonatomic) MAAsset *latestOntologyAsset; // @synthesize latestOntologyAsset=_latestOntologyAsset;
- (_Bool)clearUserDefaultOverrideAssetFileURLWithError:(id *)arg1;
- (id)setUserDefaultOverrideAssetFileURL:(id)arg1 error:(id *)arg2;
- (void)performPeriodicActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType AWDMetricPosterBlock; // @synthesize AWDMetricPosterBlock=_AWDMetricPosterBlock;
- (void)_postAWDMetricEventWithAssetDownloadPhase:(int)arg1;
- (id)_lastModifiedDateForFileAtURL:(id)arg1;
- (long long)_hoursSinceLastModifiedForFileAtURL:(id)arg1;
- (_Bool)_lock_saveContentInfoForAsset:(id)arg1;
- (void)_downloadManagerCallbackQueue_assetDownloadDidFail:(id)arg1;
- (void)_downloadManagerCallbackQueue_assetDownloadDidComplete:(id)arg1;
- (void)_downloadManagerCallbackQueue_catalogUpdateDidFail:(id)arg1;
- (void)_downloadManagerCallbackQueue_catalogUpdateDidComplete:(id)arg1;
- (void)_registerNotifyDispatchHandler;
- (void)_updateAssetCatalogForReason:(unsigned long long)arg1;
- (void)_startAssetDownload;
- (id)_lock_currentOntologyAssetFileURL;
- (void)_lock_invokeCompletionForPeriodicActivityName:(id)arg1 withResult:(long long)arg2 error:(id)arg3;
- (id)_bestAssetInArray:(id)arg1;
- (void)_lock_invokeAvailabilityHandlers;
- (id)_newPeriodicActivityWithName:(id)arg1;
- (id)_newAssetDownloadManager;
- (void)_lock_unschedulePeriodicActivity;
- (void)_lock_schedulePeriodicActivity;
- (double)_catalogUpdateIntervalOverride;
- (double)_retryIntervalForActivityNamed:(id)arg1;
- (double)_normalIntervalForActivityNamed:(id)arg1;
- (void)invalidateAndWait;
- (void)unregisterHandlerForToken:(id)arg1;
- (id)registerAssetAvailabilityHandler:(CDUnknownBlockType)arg1;
- (long long)_lock_assetAvailability;
- (long long)_effectiveSystemCompatibilityVersion;
@property(readonly, nonatomic) long long assetFileVersion;
- (id)_userDefaultOverrideAssetFileURL;
- (_Bool)_ignoreAssetEqualityComparison;
- (id)_localFileURLForAsset:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *assetFileURL;
@property(readonly, nonatomic) _HKMobileAssetDownloadManager *assetDownloadManager;
- (void)dealloc;
- (id)initWithDaemon:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

