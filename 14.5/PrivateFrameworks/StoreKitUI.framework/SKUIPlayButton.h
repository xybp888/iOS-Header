//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIPlayButtonControl.h>

@class NSString, SKUIPlayButtonImageCache;

@interface SKUIPlayButton : SKUIPlayButtonControl
{
    _Bool _showStop;
    SKUIPlayButtonImageCache *_imageCache;
    _Bool _showOnDemand;
    long long _itemIdentifier;
    NSString *_playItemIdentifier;
    long long _style;
    NSString *_mediaURLString;
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) SKUIPlayButtonImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(copy, nonatomic) NSString *mediaURLString; // @synthesize mediaURLString=_mediaURLString;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) _Bool showOnDemand; // @synthesize showOnDemand=_showOnDemand;
@property(copy, nonatomic) NSString *playItemIdentifier; // @synthesize playItemIdentifier=_playItemIdentifier;
@property(nonatomic) long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (void)_updateEnabledState;
@property(nonatomic) _Bool useLargeButton;
@property(nonatomic, getter=isRadio) _Bool radio;
- (_Bool)showOuterBorder;
- (id)images;
- (void)setBackgroundType:(long long)arg1;
- (void)reloadWithItemStatus:(id)arg1 animated:(_Bool)arg2;
- (void)refresh;
- (void)playIndicatorDidChange:(_Bool)arg1;
- (id)playImage;
- (id)outerBorderColor;
- (id)defaultBackgroundColor;
- (id)cancelImage;
- (float)buttonCornerRadius;
- (struct CGSize)buttonSize;
- (void)tintColorDidChange;
- (void)setEnabled:(_Bool)arg1;
- (void)layoutSubviews;

@end

