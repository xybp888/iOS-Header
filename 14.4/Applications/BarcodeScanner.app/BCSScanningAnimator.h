//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BCSCircularEffectView, BCSDissolveEffectView, BCSImageQuad, CALayer, UIImageView, UIView, UIVisualEffectView;

@interface BCSScanningAnimator : NSObject
{
    UIVisualEffectView *_blurView;
    BCSDissolveEffectView *_platterView;
    UIVisualEffectView *_coverView;
    UIView *_circularContainerView;
    CALayer *_ringLayer;
    UIView *_backgroundView;
    BCSCircularEffectView *_circularEffectView;
    _Bool _suppressCoverView;
    UIView *_focusIndicator;
    BCSImageQuad *_imageQuad;
    UIImageView *_targetQRImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *targetQRImage; // @synthesize targetQRImage=_targetQRImage;
@property(retain, nonatomic) BCSImageQuad *imageQuad; // @synthesize imageQuad=_imageQuad;
@property(retain, nonatomic) UIView *focusIndicator; // @synthesize focusIndicator=_focusIndicator;
- (void)reset;
- (void)showCoverView;
- (void)animateAppClipCodeBounceWithCompletion:(CDUnknownBlockType)arg1;
- (void)animatePopWithAppImageBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animatePushWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setUpBlurViewIfNeeded;
- (void)_animateCircularReveal;
- (void)_performCircularMeshTransform:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performSquareMeshTransform:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_animateFocusIndicator:(_Bool)arg1 duration:(double)arg2 position:(struct CGPoint)arg3;
- (struct CGPoint)_appclipCodeScaleFactor;
- (struct CGPoint)_qrImagePopScaleFactor;
- (struct CGRect)_platterInitialFrameWithDefaultSize:(double)arg1;
- (struct CGRect)_restRect;
- (struct CGPoint)_restPosition;
- (id)_meshTransform:(_Bool)arg1;
- (id)_perspectiveCorrectedImage;

@end

