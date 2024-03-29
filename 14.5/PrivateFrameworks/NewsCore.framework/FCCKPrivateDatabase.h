//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecord, FCCKPrivateDatabaseSchema, FCNetworkBehaviorMonitor, NFLazy, NSArray, NSData, NSDate, NSOperationQueue;
@protocol FCCKDatabaseEncryptionDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface FCCKPrivateDatabase : NSObject
{
    _Bool _encryptionEnabled;
    _Bool _secureSubscriptionsEnabled;
    _Bool _encryptionRequired;
    _Bool _beganInitialStartUp;
    _Bool _finishedInitialStartUp;
    _Bool _activelyStartingUp;
    id <FCCKDatabaseEncryptionDelegate> _encryptionDelegate;
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
    NSData *_encryptionKey;
    NSData *_secureEncryptionKey;
    CKRecord *_sentinelRecord;
    NFLazy *_ckProperties;
    FCCKPrivateDatabaseSchema *_schema;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_serialOperationQueue;
    NSOperationQueue *_highPriorityOperationQueue;
    NSOperationQueue *_noPreflightOperationQueue;
    NSArray *_middleware;
    NSArray *_remainingStartUpMiddleware;
    NSArray *_operationMiddleware;
    NSArray *_recordMiddleware;
    NSObject<OS_dispatch_group> *_initialStartUpGroup;
    long long _startUpResult;
    unsigned long long _countOfFailedStartUpAttempts;
    NSDate *_dateOfLastFailedStartUpAttempt;
    NSArray *_zoneRestorationSources;
    NSArray *_zonePruningAssistants;
}

+ (id)testingDatabase;
- (void).cxx_destruct;
- (void)fetchChangesForRecordZoneID:(id)arg1 changeToken:(id)arg2 desiredKeys:(id)arg3 fetchAllChanges:(_Bool)arg4 qualityOfService:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)fetchAllDatabaseChangesWithServerChangeToken:(id)arg1 qualityOfService:(long long)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

