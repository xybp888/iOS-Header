//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBUIWorkspaceAnimationController.h>

@class SBSceneLayoutViewController, SBUIBlockAnimationController;

@interface SBSceneLayoutTransitionAnimationController : SBUIWorkspaceAnimationController
{
    SBSceneLayoutViewController *_layoutController;
    SBUIBlockAnimationController *_blockAnimation;
}

- (void).cxx_destruct;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (_Bool)_canBeInterrupted;
- (id)containerView;
- (id)_getTransitionWindow;
- (id)animationSettings;
- (id)initWithWorkspaceTransitionRequest:(id)arg1;
- (id)initWithTransitionContextProvider:(id)arg1 layoutController:(id)arg2 animationSettings:(id)arg3 animationBlock:(CDUnknownBlockType)arg4;
- (id)initWithTransitionContextProvider:(id)arg1 layoutController:(id)arg2 animationSettings:(id)arg3 stepped:(_Bool)arg4 animationBlock:(CDUnknownBlockType)arg5;

@end

