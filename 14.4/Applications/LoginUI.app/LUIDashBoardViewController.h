//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "LUIMajorViewController.h"

#import "LUICallToActionResponder-Protocol.h"
#import "LUINavigationViewControllerProtocol-Protocol.h"
#import "LUISwipeUpAnimationControllerDelegate-Protocol.h"

@class LKUser, LUIDashBoardView, LUISwipeUpAnimationController, NSString;

@interface LUIDashBoardViewController : LUIMajorViewController <LUISwipeUpAnimationControllerDelegate, LUINavigationViewControllerProtocol, LUICallToActionResponder>
{
    LKUser *_userInfo;
    LUIDashBoardView *_dashBoardView;
    LUISwipeUpAnimationController *_swipeUpAnimationController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LUISwipeUpAnimationController *swipeUpAnimationController; // @synthesize swipeUpAnimationController=_swipeUpAnimationController;
@property(retain, nonatomic) LUIDashBoardView *dashBoardView; // @synthesize dashBoardView=_dashBoardView;
@property(retain, nonatomic) LKUser *userInfo; // @synthesize userInfo=_userInfo;
- (void)swipeUpAnimationControllerSwipeGestureDidEnd:(id)arg1;
- (void)swipeUpAnimationControllerSwipeGestureDidBegin:(id)arg1;
- (void)swipeUpAnimationControllerSwipeGestureDidPassThreshold:(id)arg1;
- (void)homeButtonSingleTapped;
- (id)userForStatusBarDisplay;
- (id)titleForBottomLeftVibrantButton;
- (long long)imageTypeForBottomLeftVibrantButton;
- (_Bool)shouldShowBottomLeftVibrantButton;
- (void)bottomLeftVibrantButtonTapped:(id)arg1;
- (id)callToActionLabelText;
- (void)userActionTriggered;
- (void)_setupGesture;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

