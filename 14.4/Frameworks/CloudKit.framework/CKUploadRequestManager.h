//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, CKSyncEngine, CKUploadRequestManagerInternals, CKUploadRequestPersistentStore, NSString;

@interface CKUploadRequestManager : NSObject
{
    CKUploadRequestManagerInternals *_internals;
}

+ (id)activityIdentifierForSchedulingRepairsInContainer:(id)arg1;
+ (double)retryableErrorMaxRetryCount;
+ (double)cancelledErrorRetryTime;
+ (double)retryableErrorRetryTime;
+ (double)tryAgainLaterRetryTime;
+ (double)recurringFetchPeriod;
- (void).cxx_destruct;
@property(readonly, nonatomic) CKUploadRequestManagerInternals *internals; // @synthesize internals=_internals;
- (void)setCallback:(CDUnknownBlockType)arg1 forOverridePoint:(long long)arg2;
- (void)cancelAllOperations;
- (void)scheduleOrInvokeRepairsNow;
- (void)fetchServerChanges:(CDUnknownBlockType)arg1;
- (void)manuallyTriggerUploadRequests;
- (void)unregister;
- (void)registerForItemRequests;
@property(readonly, nonatomic) CKUploadRequestPersistentStore *database;
@property(readonly, nonatomic) CKContainer *repairContainer;
@property(readonly, nonatomic) CKSyncEngine *repairZoneSyncEngine;
@property(readonly, nonatomic) NSString *activityIdentifierForSchedulingRepairs;
@property(copy) NSString *machServiceName;
@property(copy) CDUnknownBlockType packageRequestCallback;
@property(copy) CDUnknownBlockType assetRequestCallback;
- (id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2 ignoringSystemConditions:(_Bool)arg3;
- (id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2;
- (void)dealloc;

@end

