//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcutClient/WFWorkflowRunnerClient.h>

#import <VoiceShortcutClient/WFWorkflowRunnerClientDelegate-Protocol.h>

@class NSString, WFSpringBoardWebClipMetadata;

@interface WFSpringBoardWorkflowRunnerClient : WFWorkflowRunnerClient <WFWorkflowRunnerClientDelegate>
{
    WFSpringBoardWebClipMetadata *_metadata;
    WFSpringBoardWorkflowRunnerClient *_retainedSelf;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WFSpringBoardWorkflowRunnerClient *retainedSelf; // @synthesize retainedSelf=_retainedSelf;
@property(retain, nonatomic) WFSpringBoardWebClipMetadata *metadata; // @synthesize metadata=_metadata;
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithError:(id)arg2 cancelled:(_Bool)arg3;
- (void)start;
- (void)showSingleStepCompletionWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithWorkflowIdentifier:(id)arg1;
- (id)initWithWebClipMetadata:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

