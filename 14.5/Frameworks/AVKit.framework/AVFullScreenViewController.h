//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIView;
@protocol AVFullScreenViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AVFullScreenViewController : UIViewController
{
    UIViewController<AVFullScreenViewControllerDelegate> *_delegate;
    AVFullScreenViewController *_associatedFullScreenViewController;
    AVFullScreenViewController *_sourceFullScreenViewController;
    UIView *_contentView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak AVFullScreenViewController *sourceFullScreenViewController; // @synthesize sourceFullScreenViewController=_sourceFullScreenViewController;
@property(nonatomic) __weak AVFullScreenViewController *associatedFullScreenViewController; // @synthesize associatedFullScreenViewController=_associatedFullScreenViewController;
@property(nonatomic) __weak UIViewController<AVFullScreenViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (_Bool)avkit_isEffectivelyFullScreen;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (_Bool)_requiresCustomPresentationController;
- (long long)preferredWhitePointAdaptivityStyle;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)modalPresentationCapturesStatusBarAppearance;
- (void)viewDidAppear:(_Bool)arg1;
- (void)attachContentView;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)loadView;
- (_Bool)canBecomeFirstResponder;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (id)keyCommands;
- (_Bool)_canShowWhileLocked;

@end

