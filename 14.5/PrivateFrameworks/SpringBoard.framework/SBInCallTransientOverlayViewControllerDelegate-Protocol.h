//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class BSAnimationSettings, SBInCallTransientOverlayViewController;

@protocol SBInCallTransientOverlayViewControllerDelegate <NSObject>
- (void)inCallTransientOverlayViewController:(SBInCallTransientOverlayViewController *)arg1 viewWillTransitionSizeWithAnimationSettings:(BSAnimationSettings *)arg2;
- (void)inCallTransientOverlayViewControllerRequestsDismissal:(SBInCallTransientOverlayViewController *)arg1;
- (void)inCallTransientOverlayViewController:(SBInCallTransientOverlayViewController *)arg1 didDisappearAnimated:(_Bool)arg2;
- (void)inCallTransientOverlayViewController:(SBInCallTransientOverlayViewController *)arg1 willDisappearAnimated:(_Bool)arg2;
- (void)inCallTransientOverlayViewController:(SBInCallTransientOverlayViewController *)arg1 didAppearAnimated:(_Bool)arg2;
- (void)inCallTransientOverlayViewController:(SBInCallTransientOverlayViewController *)arg1 willAppearAnimated:(_Bool)arg2;
@end

