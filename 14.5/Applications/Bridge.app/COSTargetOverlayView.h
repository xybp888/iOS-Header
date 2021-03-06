//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class COSTargetBackgroundView, COSTargetOutlineView, UIBezierPath;

@interface COSTargetOverlayView : UIView
{
    UIBezierPath *_cutoutPath;
    double _targetAspect;
    double _targetWidthRatio;
    double _targetYOffset;
    double _targetCornerRadius;
    double _gradientHeight;
    COSTargetOutlineView *_outlineView;
    COSTargetBackgroundView *_backgroundView;
    struct CGRect _targetRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) COSTargetBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) COSTargetOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property(nonatomic) double gradientHeight; // @synthesize gradientHeight=_gradientHeight;
@property(nonatomic) double targetCornerRadius; // @synthesize targetCornerRadius=_targetCornerRadius;
@property(nonatomic) struct CGRect targetRect; // @synthesize targetRect=_targetRect;
@property(nonatomic) double targetYOffset; // @synthesize targetYOffset=_targetYOffset;
@property(nonatomic) double targetWidthRatio; // @synthesize targetWidthRatio=_targetWidthRatio;
@property(nonatomic) double targetAspect; // @synthesize targetAspect=_targetAspect;
@property(retain, nonatomic) UIBezierPath *cutoutPath; // @synthesize cutoutPath=_cutoutPath;
- (void)_configureMetrics;
- (id)initWithFrame:(struct CGRect)arg1;

@end

