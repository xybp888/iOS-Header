//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDatabase, NSError, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface HDExtendedDatabaseTransaction : NSObject
{
    _Bool _pendingWorkDidSucceed;
    NSUUID *_transactionIdentifier;
    HDDatabase *_database;
    NSObject<OS_dispatch_queue> *_transactionQueue;
    NSObject<OS_dispatch_queue> *_dataQueue;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    NSObject<OS_dispatch_semaphore> *_pendingWorkSemaphore;
    NSObject<OS_dispatch_source> *_automaticRollbackTimer;
    CDUnknownBlockType _pendingWork;
    unsigned long long _status;
    NSError *_lastError;
    double _transactionTimeout;
    double _continuationTimeout;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double continuationTimeout; // @synthesize continuationTimeout=_continuationTimeout;
@property(readonly, nonatomic) double transactionTimeout; // @synthesize transactionTimeout=_transactionTimeout;
@property(nonatomic) _Bool pendingWorkDidSucceed; // @synthesize pendingWorkDidSucceed=_pendingWorkDidSucceed;
@property(retain, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) CDUnknownBlockType pendingWork; // @synthesize pendingWork=_pendingWork;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *automaticRollbackTimer; // @synthesize automaticRollbackTimer=_automaticRollbackTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *pendingWorkSemaphore; // @synthesize pendingWorkSemaphore=_pendingWorkSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *completionSemaphore; // @synthesize completionSemaphore=_completionSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue; // @synthesize dataQueue=_dataQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue; // @synthesize transactionQueue=_transactionQueue;
@property(readonly, nonatomic) __weak HDDatabase *database; // @synthesize database=_database;
@property(readonly, copy, nonatomic) NSUUID *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
- (void)_transaction_runTransactionWithContext:(id)arg1;
- (void)_enableAutomaticRollbackTimer;
- (_Bool)rollbackDueToError:(id)arg1 errorOut:(id *)arg2;
- (_Bool)commitWithErrorOut:(id *)arg1;
- (_Bool)performInTransactionWithErrorOut:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1 context:(id)arg2 transactionTimeout:(double)arg3 continuationTimeout:(double)arg4 error:(id *)arg5;

@end

