//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXFillView.h>

@class SXClippingView, SXGradientView, SXLinearGradientFill;

@interface SXGradientFillView : SXFillView
{
    SXLinearGradientFill *_gradientFill;
    SXClippingView *_clippingView;
    SXGradientView *_gradientView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SXGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(readonly, nonatomic) SXClippingView *clippingView; // @synthesize clippingView=_clippingView;
@property(readonly, nonatomic) SXLinearGradientFill *gradientFill; // @synthesize gradientFill=_gradientFill;
- (void)setContentFrame:(struct CGRect)arg1;
- (struct CGRect)contentFrame;
- (struct CGRect)fillFrameWithBoundingSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithGradientFill:(id)arg1 gradientFactory:(id)arg2;

@end

