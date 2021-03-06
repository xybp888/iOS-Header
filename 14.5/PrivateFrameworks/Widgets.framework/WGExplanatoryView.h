//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTVisualStylingProvider, UIImageView, UILabel, UITapGestureRecognizer;

@interface WGExplanatoryView : UIView
{
    UIImageView *_glyphView;
    UILabel *_label;
    MTVisualStylingProvider *_visualStylingProvider;
    UITapGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
- (void)_invalidateVisualStyling;
- (void)_updateVisualStylingIfNecessary;
- (void)_configureExplanationLabelWithExplanation:(id)arg1;
- (void)_configureGlyphViewWithGlyph:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (id)initWithGlyph:(id)arg1 andExplanation:(id)arg2;

@end

