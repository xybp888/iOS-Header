//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKLinkedAppIconView, PKPass, PKPaymentPass, UIButton;
@protocol PKPassFooterContentViewDelegate;

@interface PKPassFooterContentView : UIView
{
    _Bool _physicalButtonRequired;
    _Bool _invalidated;
    _Bool _requestPileSuppression;
    long long _style;
    id <PKPassFooterContentViewDelegate> _delegate;
    PKPass *_pass;
    PKLinkedAppIconView *_appIconView;
    UIButton *_infoButton;
    UIView *_bottomRule;
    long long _coachingState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool requestPileSuppression; // @synthesize requestPileSuppression=_requestPileSuppression;
@property(readonly, nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) long long coachingState; // @synthesize coachingState=_coachingState;
@property(readonly, nonatomic, getter=isPhysicalButtonRequired) _Bool physicalButtonRequired; // @synthesize physicalButtonRequired=_physicalButtonRequired;
@property(readonly, nonatomic) UIView *bottomRule; // @synthesize bottomRule=_bottomRule;
@property(readonly, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(readonly, nonatomic) PKLinkedAppIconView *appIconView; // @synthesize appIconView=_appIconView;
@property(readonly, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property(nonatomic) __weak id <PKPassFooterContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (id)_buttonWithTitle:(id)arg1;
- (void)_infoButtonPressed:(id)arg1;
- (void)_setRequestPileSuppression:(_Bool)arg1;
- (void)_setCoachingState:(long long)arg1;
- (void)_setPhysicalButtonRequired:(_Bool)arg1;
@property(readonly, nonatomic, getter=isPassAuthorized) _Bool passAuthorized;
- (void)invalidate;
- (void)showFullScreenBarcode;
- (void)coachingStateDidChange;
- (void)didBecomeHiddenAnimated:(_Bool)arg1;
- (void)willBecomeHiddenAnimated:(_Bool)arg1;
- (void)didBecomeVisibleAnimated:(_Bool)arg1;
- (void)willBecomeVisibleAnimated:(_Bool)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) PKPaymentPass *paymentPass;
- (void)dealloc;
- (id)initWithPass:(id)arg1;
- (id)init;

@end

