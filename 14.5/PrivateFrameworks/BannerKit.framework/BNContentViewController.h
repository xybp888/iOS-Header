//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <BannerKit/BNPanGestureProxyDelegate-Protocol.h>
#import <BannerKit/BNPresentedBannerAnimationCustomizing-Protocol.h>
#import <BannerKit/BNPresentingPrivate-Protocol.h>
#import <BannerKit/UIGestureRecognizerDelegate-Protocol.h>

@class BNTieredArray, NSArray, NSMutableSet, NSString, UIPanGestureRecognizer;
@protocol BNConsidering, BNLayoutManaging, BNPanGestureProxyPrivate, BNPosting, BNPresentable, BNPresentingDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitionCoordinator;

@interface BNContentViewController : UIViewController <UIGestureRecognizerDelegate, BNPanGestureProxyDelegate, BNPresentedBannerAnimationCustomizing, BNPresentingPrivate>
{
    BNTieredArray *_presentables;
    NSMutableSet *_presentingPresentables;
    NSMutableSet *_dismissingPresentables;
    NSMutableSet *_transitioningDelegates;
    UIPanGestureRecognizer *_panGesture;
    id <BNPresentable> _presentableForActiveGesture;
    struct CGRect _presentedFrameForPresentableForActiveGesture;
    id <BNPanGestureProxyPrivate> _panGestureProxyForActivePresentable;
    id <UIViewControllerAnimatedTransitioning> _activeBannerTransitionAnimator;
    id <UIViewControllerTransitionCoordinator> _activeTransitionCoordinator;
    id <BNLayoutManaging> _layoutManager;
    id <BNConsidering> _authority;
    id <BNPosting> _poster;
    id <BNPresentingDelegate> _delegate;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) __weak id <BNPresentingDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <BNPosting> poster; // @synthesize poster=_poster;
@property(readonly, nonatomic) id <BNConsidering> authority; // @synthesize authority=_authority;
- (void)_handlePan:(id)arg1;
- (struct CGPoint)_velocityInContainerViewForGesture:(id)arg1;
- (struct CGPoint)_translationInContainerViewForGesture:(id)arg1;
- (void)_resetPresentableForActiveGesture:(id)arg1;
- (id)_presentableForScrollEvent:(id)arg1;
- (id)_presentableForTouch:(id)arg1;
- (id)_presentableForGestureInView:(id)arg1;
- (id)_topPresentable;
- (struct CGPoint)_locationOfScrollEvent:(id)arg1 inContainerViewForGesture:(id)arg2;
- (struct CGPoint)_locationOfTouch:(id)arg1 inContainerViewForGesture:(id)arg2;
- (_Bool)_isTouchOutsideDismissalEnabledForPresentable:(id)arg1;
- (_Bool)_isLocalDraggingEnabledForPresentable:(id)arg1;
- (_Bool)_isDraggingEnabledForPresentable:(id)arg1;
- (_Bool)_isDraggingInteractionEnabledForPresentable:(id)arg1;
- (_Bool)_isDraggingDismissalEnabledForPresentable:(id)arg1;
- (id)_dismissPresentablesWithIdentification:(id)arg1 reason:(id)arg2 animated:(_Bool)arg3 userInfo:(id)arg4;
- (id)_presentablesWithIdentification:(id)arg1;
- (void)_dismissPresentable:(id)arg1 withReason:(id)arg2 animated:(_Bool)arg3 userInfo:(id)arg4;
- (void)_removePresentable:(id)arg1;
- (void)_insertPresentable:(id)arg1 beneathPresentable:(id)arg2 withTransitioningDelegate:(id)arg3;
- (void)_addPresentable:(id)arg1 withTransitioningDelegate:(id)arg2 incrementingTier:(_Bool)arg3;
- (void)_insertPresentable:(id)arg1 beneathPresentable:(id)arg2 withTransitioningDelegate:(id)arg3 incrementingTier:(_Bool)arg4;
- (_Bool)_resetActiveTransitionCoordinator:(id)arg1;
- (_Bool)_resetActiveBannerTransitionAnimator:(id)arg1;
- (id)_newBannerTransitionContextForPresenting:(_Bool)arg1 viewController:(id)arg2 animated:(_Bool)arg3;
- (struct CGRect)_presentedFrameForViewController:(id)arg1 withContentFrame:(struct CGRect)arg2 afterContentWithFrame:(struct CGRect)arg3;
- (struct CGRect)_presentedFrameForPresentable:(id)arg1 withContainerBounds:(struct CGRect)arg2;
- (long long)_effectTierForPresentable:(id)arg1;
- (struct CGRect)_presentedFrameForViewController:(id)arg1 withContainerBounds:(struct CGRect)arg2;
- (struct CGRect)_dismissedFrameWithPaddingForViewController:(id)arg1 withContainerBounds:(struct CGRect)arg2;
- (struct CGRect)_dismissedFrameForViewController:(id)arg1 withContainerBounds:(struct CGRect)arg2;
- (struct CGRect)_presentedFrame:(_Bool)arg1 forViewController:(id)arg2 withContainerBounds:(struct CGRect)arg3 overshoot:(_Bool)arg4;
- (struct CGRect)_outsetFrame:(struct CGRect)arg1 forViewController:(id)arg2;
- (struct CGRect)_insetFrame:(struct CGRect)arg1 forViewController:(id)arg2;
- (_Bool)_isPresentableHUD:(id)arg1;
- (_Bool)shouldOverlapPresentable:(id)arg1 withPresentable:(id)arg2;
- (id)_layoutManager;
- (struct CGPoint)gestureRecognizerProxy:(id)arg1 visualTranslationInCoordinateSpace:(id)arg2;
- (struct CGPoint)gestureRecognizerProxy:(id)arg1 translationInCoordinateSpace:(id)arg2;
- (struct CGPoint)gestureRecognizerProxy:(id)arg1 velocityInCoordinateSpace:(id)arg2;
- (struct CGPoint)gestureRecognizerProxy:(id)arg1 locationForTouch:(id)arg2 inCoordinateSpace:(id)arg3;
- (void)_gestureRecognizerFailed:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)shouldFenceAnimationsForPresentable:(id)arg1;
- (id)userInterfaceStyleTransitionAnimationSettingsForPresentable:(id)arg1 forTransitionToStyle:(long long)arg2;
- (id)sizeTransitionAnimationSettingsForPresentable:(id)arg1;
- (id)dismissPresentablesWithIdentification:(id)arg1 reason:(id)arg2 animated:(_Bool)arg3 userInfo:(id)arg4;
- (id)dismissPresentablesWithIdentification:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
- (void)presentPresentable:(id)arg1 withOptions:(unsigned long long)arg2 userInfo:(id)arg3;
- (id)initWithAuthority:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (_Bool)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
@property(readonly, copy, nonatomic) NSArray *presentedPresentables;
@property(readonly, copy, nonatomic) NSArray *topPresentables;
@property(readonly, nonatomic) id <BNLayoutManaging> layoutManager; // @synthesize layoutManager=_layoutManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

