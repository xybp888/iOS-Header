//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcuts/NSObject-Protocol.h>

@class NSError, WFConfiguredTrigger, WFWorkflowRunEvent;

@protocol VCTriggerEventRunnerDelegate <NSObject>
- (void)didFinishRunningWithError:(NSError *)arg1 cancelled:(_Bool)arg2 trigger:(WFConfiguredTrigger *)arg3 runEvent:(WFWorkflowRunEvent *)arg4;
@end

