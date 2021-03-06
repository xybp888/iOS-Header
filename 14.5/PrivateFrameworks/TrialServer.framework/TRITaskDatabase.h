//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrialServer/TRITaskPersisting-Protocol.h>

@class TRIDatabase;
@protocol TRITaskSetProviding;

@interface TRITaskDatabase : NSObject <TRITaskPersisting>
{
    TRIDatabase *_db;
    id <TRITaskSetProviding> _taskSetProvider;
}

- (void).cxx_destruct;
- (id)idForTask:(id)arg1;
- (id)tasksDependentOnTask:(id)arg1;
- (id)directDependenciesOfTaskWithId:(id)arg1;
- (_Bool)_checkTaskId:(id)arg1 IsPresent:(_Bool *)arg2 transaction:(id)arg3;
- (id)taskIdsWithTag:(id)arg1;
- (_Bool)enumerateTasksWithTagsIntersectingTagSet:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)updateTaskWithTaskId:(id)arg1 startDate:(id)arg2 task:(id)arg3;
- (id)tasks;
- (_Bool)removeTaskWithId:(id)arg1 cleanupBlock:(CDUnknownBlockType)arg2;
- (id)addTask:(id)arg1 startTime:(id)arg2 tags:(id)arg3 dependencies:(id)arg4 error:(id *)arg5;
- (struct _PASDBTransactionCompletion_)writeTransactionWithFailableBlock:(CDUnknownBlockType)arg1;
- (struct _PASDBTransactionCompletion_)readTransactionWithFailableBlock:(CDUnknownBlockType)arg1;
- (id)initWithDatabase:(id)arg1 taskSetProvider:(id)arg2;
- (id)init;

@end

