//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PKAddToWatchOfferView, PKPaymentPass, UIView;
@protocol PKAddToWatchOfferViewControllerDelegate;

@interface PKAddToWatchOfferViewController : UIViewController
{
    UIView *_interactionDisabledView;
    id <PKAddToWatchOfferViewControllerDelegate> _delegate;
    PKPaymentPass *_pass;
    long long _context;
    PKAddToWatchOfferView *_offerView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PKAddToWatchOfferView *offerView; // @synthesize offerView=_offerView;
@property(nonatomic) long long context; // @synthesize context=_context;
@property(readonly, retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property(nonatomic) __weak id <PKAddToWatchOfferViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setIdleTimerDisabled:(_Bool)arg1;
- (void)_clearInteractionDisabledView;
- (void)showSpinner:(_Bool)arg1;
- (void)_addToWatch;
- (void)_addLater;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (unsigned long long)edgesForExtendedLayout;
- (void)_configureNavigationItem;
- (void)dealloc;
- (id)initWithPass:(id)arg1 context:(long long)arg2 delegate:(id)arg3;

@end

