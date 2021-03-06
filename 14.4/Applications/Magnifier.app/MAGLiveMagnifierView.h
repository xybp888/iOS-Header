//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVCaptureVideoPreviewLayer, AXDispatchTimer, CABackdropLayer, MAGCurrentFilterSetChangeSubscription, MAGFilterSetChangeSubscription, MAGManualFocusIndicatorView, UIImageView;
@protocol MAGLiveMagnifierViewDelegate;

__attribute__((visibility("hidden")))
@interface MAGLiveMagnifierView : UIView
{
    _Bool _sizeTransitionInProgress;
    AVCaptureVideoPreviewLayer *_previewLayer;
    id <MAGLiveMagnifierViewDelegate> _delegate;
    double _lastMagnificationFactor;
    UIView *_previewContainer;
    MAGManualFocusIndicatorView *_manualFocusIndicator;
    AXDispatchTimer *_focusIndicatorFadeTimer;
    UIView *_blackoutView;
    UIImageView *_frozenView;
    CABackdropLayer *_filterLayer;
    MAGCurrentFilterSetChangeSubscription *_filterChangeSubscription;
    MAGFilterSetChangeSubscription *_filterSetChangeSubscription;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool sizeTransitionInProgress; // @synthesize sizeTransitionInProgress=_sizeTransitionInProgress;
@property(retain, nonatomic) MAGFilterSetChangeSubscription *filterSetChangeSubscription; // @synthesize filterSetChangeSubscription=_filterSetChangeSubscription;
@property(retain, nonatomic) MAGCurrentFilterSetChangeSubscription *filterChangeSubscription; // @synthesize filterChangeSubscription=_filterChangeSubscription;
@property(retain, nonatomic) CABackdropLayer *filterLayer; // @synthesize filterLayer=_filterLayer;
@property(retain, nonatomic) UIImageView *frozenView; // @synthesize frozenView=_frozenView;
@property(retain, nonatomic) UIView *blackoutView; // @synthesize blackoutView=_blackoutView;
@property(retain, nonatomic) AXDispatchTimer *focusIndicatorFadeTimer; // @synthesize focusIndicatorFadeTimer=_focusIndicatorFadeTimer;
@property(retain, nonatomic) MAGManualFocusIndicatorView *manualFocusIndicator; // @synthesize manualFocusIndicator=_manualFocusIndicator;
@property(retain, nonatomic) UIView *previewContainer; // @synthesize previewContainer=_previewContainer;
@property(nonatomic) double lastMagnificationFactor; // @synthesize lastMagnificationFactor=_lastMagnificationFactor;
@property(nonatomic) __weak id <MAGLiveMagnifierViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (struct CGPoint)accessibilityActivationPoint;
- (void)setFrozenImage:(id)arg1;
@property(nonatomic) _Bool blackedOut;
- (void)sizeTransitionDidEnd;
- (void)sizeTransitionWillBeginToSize:(struct CGSize)arg1;
- (void)compensateForInterfaceOrientationInLiveMagnifier:(long long)arg1 referenceSize:(struct CGSize)arg2;
- (void)showFocusIndicatorOfType:(unsigned long long)arg1 atPoint:(struct CGPoint)arg2;
- (struct CGPoint)convertPointToCaptureDeviceLocation:(struct CGPoint)arg1;
- (void)magnificationFactorChangedTo:(double)arg1;
- (void)layoutSubviews;
- (id)initWithPreviewLayer:(id)arg1;

@end

