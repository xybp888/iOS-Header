//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/FBSWorkspaceDelegate-Protocol.h>

@class FBSSceneTransitionContext, FBSUIApplicationWorkspace;

@protocol FBSUIApplicationWorkspaceDelegate <FBSWorkspaceDelegate>
- (void)workspaceShouldExit:(FBSUIApplicationWorkspace *)arg1;
- (void)workspace:(FBSUIApplicationWorkspace *)arg1 didLaunchWithCompletion:(void (^)(FBSUIApplicationLaunchResponse *))arg2;

@optional
- (void)workspaceShouldExit:(FBSUIApplicationWorkspace *)arg1 withTransitionContext:(FBSSceneTransitionContext *)arg2;
- (void)workspaceNoteAssertionExpirationImminent:(FBSUIApplicationWorkspace *)arg1;
@end

