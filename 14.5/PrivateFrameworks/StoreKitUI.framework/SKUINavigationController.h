//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUNavigationController.h>

@interface SKUINavigationController : SUNavigationController
{
}

- (id)_accessibilityButtonBackgroundDefaultTintColor;
- (void)_viewControllerNeedsNavigationBarAppearanceUpdate:(id)arg1;
- (_Bool)_topViewControllerPrefersNavigationBarBackgroundViewHidden;
- (void)_setNavigationPalette:(id)arg1 hidesPaletteShadow:(_Bool)arg2;
- (void)_scheduleConfigurationOfNavigationBar;
- (void)_configureNavigationBarForViewController:(id)arg1 shouldIgnoreTransitionCoordinator:(_Bool)arg2;
- (void)_configureNavigationBar:(id)arg1 withTintColor:(id)arg2 tintAdjustmentMode:(long long)arg3 titleTextTintColor:(id)arg4 shouldTintTitleText:(_Bool)arg5 accessibilityButtonBackgroundTintColor:(id)arg6;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (void)attachPalette:(id)arg1 isPinned:(_Bool)arg2;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (id)description;

@end

