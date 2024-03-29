//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLCloudKitTransportTask.h"

#import "CPLEngineTransportCheckRecordsExistenceTask-Protocol.h"

@class CPLCloudKitScope, CPLEngineScope, NSArray, NSSet, NSString;
@protocol CPLEngineTransportGroup;

@interface CPLCloudKitCheckRecordsExistenceTask : CPLCloudKitTransportTask <CPLEngineTransportCheckRecordsExistenceTask>
{
    CDUnknownBlockType _completionHandler;
    CPLCloudKitScope *_cloudKitScope;
    CPLEngineScope *_scope;
    NSArray *_recordsToCheck;
    NSSet *_fetchPropertiesRecords;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *fetchPropertiesRecords; // @synthesize fetchPropertiesRecords=_fetchPropertiesRecords;
@property(copy, nonatomic) NSArray *recordsToCheck; // @synthesize recordsToCheck=_recordsToCheck;
@property(readonly, nonatomic) CPLEngineScope *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) CPLCloudKitScope *cloudKitScope; // @synthesize cloudKitScope=_cloudKitScope;
- (void)runOperations;
- (void)_checkRecordsExistenceWithOperationType:(long long)arg1 recordIDsToCPLRecord:(id)arg2 recordsToCheckOnly:(id)arg3 recordsToFetch:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithController:(id)arg1 cloudKitScope:(id)arg2 scope:(id)arg3 additionalTransportScopes:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

// Remaining properties
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask;
@property(nonatomic) _Bool foreground;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;

@end

