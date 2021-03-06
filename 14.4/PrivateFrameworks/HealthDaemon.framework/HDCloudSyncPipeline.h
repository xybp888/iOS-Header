//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKOperationGroup, HDAssertion, HDCloudSyncCloudState, HDCloudSyncContext, HDCloudSyncOperationConfiguration, HDCloudSyncRepository, HDPowerAssertion, NSMutableArray, NSProgress, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HDCloudSyncPipeline : NSObject
{
    NSMutableArray *_stages;
    NSString *_shortPipelineIdentifier;
    HDCloudSyncCloudState *_cloudState;
    long long _pipelineResult;
    NSString *_analyticsCloudKitIdentifier;
    HDPowerAssertion *_powerAssertion;
    _Bool _continueWhenSyncDisabled;
    long long _status;
    HDCloudSyncContext *_context;
    HDCloudSyncRepository *_repository;
    NSUUID *_identifier;
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertion *_accessibilityAssertion;
    CKOperationGroup *_operationGroup;
    HDCloudSyncOperationConfiguration *_operationConfiguration;
    NSProgress *_progress;
    CDUnknownBlockType _pipelineCompletionHandler;
}

+ (id)operationGroupForContext:(id)arg1 syncCircleIdentifier:(id)arg2;
+ (long long)_qualityOfServiceForContext:(id)arg1;
+ (_Bool)_allowCellularForContext:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType pipelineCompletionHandler; // @synthesize pipelineCompletionHandler=_pipelineCompletionHandler;
@property(nonatomic) _Bool continueWhenSyncDisabled; // @synthesize continueWhenSyncDisabled=_continueWhenSyncDisabled;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) HDCloudSyncOperationConfiguration *operationConfiguration; // @synthesize operationConfiguration=_operationConfiguration;
@property(retain, nonatomic) CKOperationGroup *operationGroup; // @synthesize operationGroup=_operationGroup;
@property(readonly, nonatomic) HDAssertion *accessibilityAssertion; // @synthesize accessibilityAssertion=_accessibilityAssertion;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) HDCloudSyncRepository *repository; // @synthesize repository=_repository;
@property(readonly, copy, nonatomic) HDCloudSyncContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
- (void)_queue_runStagesWithTaskTree:(id)arg1;
- (void)_queue_runStage:(id)arg1 taskTree:(id)arg2;
- (void)_queue_reportFinalAnalyticsWithTaskTree:(id)arg1;
- (void)_queue_computeStageTransferSizes;
- (void)_queue_computeConfigurationWithTaskTree:(id)arg1;
- (void)_powerAssertionDidTimeout;
- (id)beginWithCompletion:(CDUnknownBlockType)arg1;
- (id)beginWithTaskTree:(id)arg1;
- (void)addStage:(id)arg1;
- (id)analyticsDictionary;
- (id)description;
- (void)dealloc;
- (id)initForContext:(id)arg1 repository:(id)arg2 accessibilityAssertion:(id)arg3 queue:(id)arg4;

@end

