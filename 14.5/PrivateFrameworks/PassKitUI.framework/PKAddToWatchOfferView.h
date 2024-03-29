//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKContinuousButton, PKPaymentPass, PKWatchHeroImageView, UIImageView, UILabel;

@interface PKAddToWatchOfferView : UIView
{
    PKWatchHeroImageView *_heroImageView;
    UIView *_backgroundView;
    struct CGSize _aspectSize;
    _Bool _isCompactWatch;
    PKPaymentPass *_pass;
    long long _context;
    UIImageView *_passImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    PKContinuousButton *_openAppButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PKContinuousButton *openAppButton; // @synthesize openAppButton=_openAppButton;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *passImageView; // @synthesize passImageView=_passImageView;
@property(readonly, nonatomic) long long context; // @synthesize context=_context;
@property(readonly, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (_Bool)_isSmallPhone;
- (double)_sideMargin;
- (void)showSpinner:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithPaymentPass:(id)arg1 context:(long long)arg2;

@end

