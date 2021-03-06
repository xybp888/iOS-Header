//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <PhotosUI/PXForcedDismissableViewController-Protocol.h>
#import <PhotosUI/UINavigationControllerDelegate-Protocol.h>

@class NSString, PUAbstractNavigationBanner, UIViewController, _UINavigationControllerPalette;

@interface PUNavigationController : UINavigationController <PXForcedDismissableViewController, UINavigationControllerDelegate>
{
    _Bool _pu_preventsAutorotation;
    _Bool _pu_alwaysForwardsPreferredStatusBarStyle;
    _Bool _pu_alwaysForwardsPrefersStatusBarHidden;
    CDUnknownBlockType _ppt_onDidShowViewControllerBlock;
    PUAbstractNavigationBanner *__banner;
    _UINavigationControllerPalette *__palette;
    unsigned long long _pu_supportedInterfaceOrientations;
    long long __barStyle;
    UIViewController *__currentToolbarViewController;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
- (void).cxx_destruct;
@property(nonatomic, setter=pu_setAlwaysForwardsPreferredStatusBarHidden:) _Bool pu_alwaysForwardsPrefersStatusBarHidden; // @synthesize pu_alwaysForwardsPrefersStatusBarHidden=_pu_alwaysForwardsPrefersStatusBarHidden;
@property(nonatomic, setter=pu_setAlwaysForwardsPreferredStatusBarStyle:) _Bool pu_alwaysForwardsPreferredStatusBarStyle; // @synthesize pu_alwaysForwardsPreferredStatusBarStyle=_pu_alwaysForwardsPreferredStatusBarStyle;
@property(nonatomic, setter=_setCurrentToolbarViewController:) __weak UIViewController *_currentToolbarViewController; // @synthesize _currentToolbarViewController=__currentToolbarViewController;
@property(nonatomic, setter=_setBarStyle:) long long _barStyle; // @synthesize _barStyle=__barStyle;
@property(readonly, nonatomic) _Bool pu_preventsAutorotation; // @synthesize pu_preventsAutorotation=_pu_preventsAutorotation;
@property(readonly, nonatomic) unsigned long long pu_supportedInterfaceOrientations; // @synthesize pu_supportedInterfaceOrientations=_pu_supportedInterfaceOrientations;
@property(retain, nonatomic, setter=_setPalette:) _UINavigationControllerPalette *_palette; // @synthesize _palette=__palette;
@property(retain, nonatomic, setter=_setBanner:) PUAbstractNavigationBanner *_banner; // @synthesize _banner=__banner;
@property(copy, nonatomic, setter=ppt_setOnDidShowViewControllerBlock:) CDUnknownBlockType ppt_onDidShowViewControllerBlock; // @synthesize ppt_onDidShowViewControllerBlock=_ppt_onDidShowViewControllerBlock;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (_Bool)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (_Bool)_canShowWhileLocked;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)_setCurrentToolbarViewController:(id)arg1 animated:(_Bool)arg2;
- (id)_extendedToolbar;
- (void)viewController:(id)arg1 willSetupInitialBarsVisibilityOnViewWillAppearAnimated:(_Bool)arg2;
- (void)_updateBarStyle;
- (void)_updateStatusBarOverrides;
- (void)pu_navigationTransitionDidEnd:(id)arg1;
- (void)pu_setPreventsAutorotation:(_Bool)arg1;
- (void)pu_setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_commonPUNavigationControllerInitialization;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

