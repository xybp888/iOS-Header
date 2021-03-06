//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBPIPContainerViewController;

@protocol SBPIPContainerViewControllerObserver <NSObject>

@optional
- (void)containerViewController:(SBPIPContainerViewController *)arg1 didFinishStartAnimationWithInitialInterfaceOrientation:(long long)arg2;
- (void)containerViewControllerStopReducingResourcesUsage:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerStartReducingResourcesUsage:(SBPIPContainerViewController *)arg1;
- (void)containerViewController:(SBPIPContainerViewController *)arg1 userDidUpdateStashState:(_Bool)arg2;
- (void)containerViewControllerUserMayUpdateStashState:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerRequiredInterfaceOrientationDidChange:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerRequiredInterfaceOrientationWillChange:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerRelinquishInterfaceOrientationLock:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerAcquireInterfaceOrientationLock:(SBPIPContainerViewController *)arg1;
@end

