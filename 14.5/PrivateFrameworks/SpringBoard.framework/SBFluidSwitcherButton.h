//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <SpringBoard/UIPointerInteractionDelegate-Protocol.h>

@class NSString, UIImage, UIImageView, UIView;

@interface SBFluidSwitcherButton : UIControl <UIPointerInteractionDelegate>
{
    UIView *_backgroundView;
    UIImageView *_glyphImageView;
    UIImageView *_xPlusDView;
    UIView *_highlightView;
    UIImage *_image;
    NSString *_backdropGroupName;
    long long _buttonStyle;
    struct UIEdgeInsets _extendedEdgeInsets;
}

- (void).cxx_destruct;
@property(nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(retain, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
@property(nonatomic) struct UIEdgeInsets extendedEdgeInsets; // @synthesize extendedEdgeInsets=_extendedEdgeInsets;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)_configureGlyphImageViewIfNecessaryForStyle:(long long)arg1;
- (void)_configureXPlusDViewIfNecessaryForStyle:(long long)arg1;
- (void)_invalidateXPlusDView;
- (void)_configureBackgroundViewIfNecessaryForStyle:(long long)arg1;
- (void)_invalidateBackgroundView;
- (id)_backgroundMaterialView;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_addHighlightViewIfNecessary;
- (void)setHighlighted:(_Bool)arg1;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

