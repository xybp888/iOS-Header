//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>

@class EDInMemoryThreadQueryHandler, EDThreadPersistence, EFLocked, EMThreadScope, NSString;
@protocol EDThreadMigratorDelegate, EFScheduler;

@interface EDThreadMigrator : NSObject <EFLoggable>
{
    EMThreadScope *_threadScope;
    EFLocked *_state;
    id <EFScheduler> _workScheduler;
    EDThreadPersistence *_threadPersistence;
    EDInMemoryThreadQueryHandler *_queryHandler;
    id <EDThreadMigratorDelegate> _delegate;
    double _threadFinalizationInterval;
}

+ (id)log;
- (void).cxx_destruct;
@property(nonatomic) double threadFinalizationInterval; // @synthesize threadFinalizationInterval=_threadFinalizationInterval;
@property(readonly, nonatomic) __weak id <EDThreadMigratorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) EDInMemoryThreadQueryHandler *queryHandler; // @synthesize queryHandler=_queryHandler;
@property(readonly, nonatomic) EDThreadPersistence *threadPersistence; // @synthesize threadPersistence=_threadPersistence;
@property(readonly, nonatomic) id <EFScheduler> workScheduler; // @synthesize workScheduler=_workScheduler;
@property(readonly, nonatomic) EFLocked *state; // @synthesize state=_state;
@property(readonly, nonatomic) EMThreadScope *threadScope; // @synthesize threadScope=_threadScope;
- (void)deleteObjectIDsToMigrate:(id)arg1;
- (void)changeObjectIDsToMigrate:(id)arg1;
- (void)addObjectIDsToMigrate:(id)arg1;
- (void)_finishMigrating;
- (void)_scheduleFinalizationForBatchedObjectIDs:(id)arg1 withGeneration:(unsigned long long)arg2 forDelete:(_Bool)arg3;
- (void)_migrateNextBatchWithGeneration:(unsigned long long)arg1;
- (void)_failMigration;
- (void)reset;
- (void)cancel;
- (void)start;
- (id)initWithThreadScope:(id)arg1 threadPersistence:(id)arg2 queryHandler:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

