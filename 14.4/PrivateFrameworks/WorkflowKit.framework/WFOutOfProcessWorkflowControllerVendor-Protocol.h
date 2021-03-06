//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class NSArray, NSData, NSString, NSURL, VCSleepWorkflow, WFWorkflowRunRequest, WFWorkflowRunningContext;

@protocol WFOutOfProcessWorkflowControllerVendor <NSObject>
- (void)stop;
- (void)populateSleepWorkflowsFromWorkflowReferences:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)createSleepWorkflow:(VCSleepWorkflow *)arg1 completion:(void (^)(VCConfiguredSleepWorkflow *, NSError *))arg2;
- (void)handleIncomingFileForRemoteExecutionWithURL:(NSURL *)arg1 withIdentifier:(NSString *)arg2;
- (void)pauseWorkflowAndWriteStateToDisk;
- (void)resumeRunningFromContext:(WFWorkflowRunningContext *)arg1;
- (void)runActionFromRunRequestData:(NSData *)arg1 runningContext:(WFWorkflowRunningContext *)arg2;
- (void)runWorkflowWithRequest:(WFWorkflowRunRequest *)arg1 inEnvironment:(long long)arg2 runningContext:(WFWorkflowRunningContext *)arg3;
@end

