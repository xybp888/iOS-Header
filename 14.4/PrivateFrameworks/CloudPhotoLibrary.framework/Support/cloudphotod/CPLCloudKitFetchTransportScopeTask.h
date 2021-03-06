//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLCloudKitTransportTask.h"

#import "CPLEngineTransportFetchTransportScopeTask-Protocol.h"

@class CPLCloudKitScope, CPLEngineScope, CPLEngineScopeFlagsUpdate, NSString;
@protocol CPLEngineTransportGroup;

@interface CPLCloudKitFetchTransportScopeTask : CPLCloudKitTransportTask <CPLEngineTransportFetchTransportScopeTask>
{
    CDUnknownBlockType _completionHandler;
    CPLEngineScopeFlagsUpdate *_fetchedFlags;
    long long _options;
    CPLCloudKitScope *_cloudKitScope;
    CPLEngineScope *_scope;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CPLEngineScope *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) CPLCloudKitScope *cloudKitScope; // @synthesize cloudKitScope=_cloudKitScope;
- (void)runOperations;
- (void)createRecordZoneWithID:(id)arg1;
- (void)_callCompletionWithZone:(id)arg1;
- (void)_updateCloudKitScopeWithZone:(id)arg1;
- (id)initWithController:(id)arg1 scope:(id)arg2 cloudKitScope:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

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

