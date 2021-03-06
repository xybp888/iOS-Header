//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <SafariServices/UIPointerInteractionDelegate-Protocol.h>

@class NSString, SFToggleBackgroundView, UIColor, UIImage, UIImageSymbolConfiguration, UIImageView, UIPointerInteraction, UIView;

__attribute__((visibility("hidden")))
@interface SFNavigationBarToggleButton : UIButton <UIPointerInteractionDelegate>
{
    _Bool _liftedForCursor;
    UIPointerInteraction *_pointerInteraction;
    UIImageView *_defaultStateImageView;
    UIImageView *_selectedStateImageView;
    SFToggleBackgroundView *_selectedStateMaskView;
    UIView *_selectedStateFillView;
    unsigned long long _inputMode;
    _Bool _drawsLightGlyph;
    _Bool _usesInsetFromBackground;
    _Bool _highlightsBackground;
    UIImage *_image;
    double _resizableBackgroundCornerRadius;
    UIColor *_glyphTintColor;
    UIImageSymbolConfiguration *_preferredSymbolConfiguration;
}

- (void).cxx_destruct;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

