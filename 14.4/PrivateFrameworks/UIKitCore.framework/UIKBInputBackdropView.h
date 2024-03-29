//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIKBBackdropView, _UIVisualEffectBackdropView;

__attribute__((visibility("hidden")))
@interface UIKBInputBackdropView : UIView
{
    UIKBBackdropView *_inputBackdropFullView;
    UIKBBackdropView *_inputBackdropLeftView;
    UIKBBackdropView *_inputBackdropRightView;
    unsigned long long _innerCorners;
    _Bool _isTransitioning;
    double _transitionGap;
    double _transitionLeftOffset;
    long long _style;
    _Bool _hasStartRect;
    _Bool _hasEndRect;
    struct CGRect _savedStartRect;
    struct CGRect _savedEndRect;
    _UIVisualEffectBackdropView *_captureView;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) _UIVisualEffectBackdropView *captureView; // @synthesize captureView=_captureView;
@property(retain, nonatomic) UIKBBackdropView *inputBackdropRightView; // @synthesize inputBackdropRightView=_inputBackdropRightView;
@property(retain, nonatomic) UIKBBackdropView *inputBackdropLeftView; // @synthesize inputBackdropLeftView=_inputBackdropLeftView;
@property(retain, nonatomic) UIKBBackdropView *inputBackdropFullView; // @synthesize inputBackdropFullView=_inputBackdropFullView;
@property(readonly) long long style; // @synthesize style=_style;
- (_Bool)_isTransitioning;
- (void)_endSplitTransitionIfNeeded:(_Bool)arg1;
- (void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2;
- (void)_setInitialProgressWithFrame:(struct CGRect)arg1;
- (void)_setProgress:(double)arg1 withFrame:(struct CGRect)arg2;
- (void)_setFrame:(struct CGRect)arg1 leftOffset:(double)arg2 gapWidth:(double)arg3 progress:(double)arg4 innerCorners:(unsigned long long)arg5;
- (void)_setFrame:(struct CGRect)arg1 leftOffset:(double)arg2 gapWidth:(double)arg3 progress:(double)arg4;
- (void)layoutInputBackdropToFullWithRect:(struct CGRect)arg1;
- (void)layoutInputBackdropToSplitWithLeftViewRect:(struct CGRect)arg1 andRightViewRect:(struct CGRect)arg2 innerCorners:(unsigned long long)arg3;
- (void)restoreFromSnapshotting;
- (void)prepareForSnapshotting;
- (void)transitionToStyle:(long long)arg1 isSplit:(_Bool)arg2;
- (void)_setRenderConfig:(id)arg1;
- (int)textEffectsVisibilityLevel;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

