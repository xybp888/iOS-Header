//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/CCUIModularControlCenterViewControllerDelegate-Protocol.h>

@class CCUIModularControlCenterOverlayViewController;
@protocol UIViewSpringAnimationBehaviorDescribing;

@protocol CCUIModularControlCenterOverlayViewControllerDelegate <CCUIModularControlCenterViewControllerDelegate>
- (id <UIViewSpringAnimationBehaviorDescribing>)reachabilitySpringAnimationBehaviorForControlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1;
- (double)reachabilityOffsetForControlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1;
- (void)controlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1 wantsHostStatusBarHidden:(_Bool)arg2;

@optional
- (void)controlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1 significantPresentationProgressChange:(double)arg2;
- (void)controlCenterViewController:(CCUIModularControlCenterOverlayViewController *)arg1 didChangePresentationState:(unsigned long long)arg2;
@end

