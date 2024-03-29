//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <DocumentCamera/ICDocCamImageQuadEditPanGestureRecognizerDelegate-Protocol.h>

@class CALayer, CAShapeLayer, ICDocCamImageQuad, ICDocCamImageQuadEditPanGestureRecognizer, NSArray, NSMutableArray, NSString, UIBezierPath, UIColor, UIImage;
@protocol ICDocCamImageQuadEditOverlayDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamImageQuadEditOverlay : UIView <ICDocCamImageQuadEditPanGestureRecognizerDelegate>
{
    _Bool _isTempOverlay;
    _Bool _tempOverlayQuadIsValid;
    _Bool _isDisplayingValidQuad;
    id <ICDocCamImageQuadEditOverlayDelegate> _delegate;
    ICDocCamImageQuad *_quad;
    UIImage *_image;
    long long _orientation;
    double _knobHeight;
    UIColor *_knobColor;
    NSArray *_knobs;
    NSArray *_knobAccessibilityElements;
    UIColor *_validRectColor;
    UIColor *_invalidRectColor;
    CALayer *_selectedKnob;
    ICDocCamImageQuadEditPanGestureRecognizer *_panGR;
    CALayer *_knobLayer;
    CAShapeLayer *_outlineLayer;
    CALayer *_loupeLayer;
    CALayer *_loupeContentsLayer;
    double _tempOverlayMagnification;
    NSMutableArray *_panHistory;
    unsigned long long _panHistoryIdx;
    struct CGPoint _lastGestureTranslation;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long panHistoryIdx; // @synthesize panHistoryIdx=_panHistoryIdx;
@property(retain, nonatomic) NSMutableArray *panHistory; // @synthesize panHistory=_panHistory;
@property(nonatomic) struct CGPoint lastGestureTranslation; // @synthesize lastGestureTranslation=_lastGestureTranslation;
@property(nonatomic) double tempOverlayMagnification; // @synthesize tempOverlayMagnification=_tempOverlayMagnification;
@property(retain, nonatomic) CALayer *loupeContentsLayer; // @synthesize loupeContentsLayer=_loupeContentsLayer;
@property(retain, nonatomic) CALayer *loupeLayer; // @synthesize loupeLayer=_loupeLayer;
@property(retain, nonatomic) CAShapeLayer *outlineLayer; // @synthesize outlineLayer=_outlineLayer;
@property(retain, nonatomic) CALayer *knobLayer; // @synthesize knobLayer=_knobLayer;
@property(retain, nonatomic) ICDocCamImageQuadEditPanGestureRecognizer *panGR; // @synthesize panGR=_panGR;
@property(retain, nonatomic) CALayer *selectedKnob; // @synthesize selectedKnob=_selectedKnob;
@property(nonatomic) _Bool isDisplayingValidQuad; // @synthesize isDisplayingValidQuad=_isDisplayingValidQuad;
@property(readonly, nonatomic) UIColor *invalidRectColor; // @synthesize invalidRectColor=_invalidRectColor;
@property(readonly, nonatomic) UIColor *validRectColor; // @synthesize validRectColor=_validRectColor;
@property(copy, nonatomic) NSArray *knobAccessibilityElements; // @synthesize knobAccessibilityElements=_knobAccessibilityElements;
@property(retain, nonatomic) NSArray *knobs; // @synthesize knobs=_knobs;
@property(retain, nonatomic) UIColor *knobColor; // @synthesize knobColor=_knobColor;
@property(nonatomic) double knobHeight; // @synthesize knobHeight=_knobHeight;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) ICDocCamImageQuad *quad; // @synthesize quad=_quad;
@property(nonatomic) __weak id <ICDocCamImageQuadEditOverlayDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool tempOverlayQuadIsValid; // @synthesize tempOverlayQuadIsValid=_tempOverlayQuadIsValid;
@property(nonatomic) _Bool isTempOverlay; // @synthesize isTempOverlay=_isTempOverlay;
- (_Bool)accessibilityIgnoresInvertColors;
- (id)accessibilityElements;
- (struct CGRect)rectFromApplyingOrientation:(long long)arg1 toContentsRect:(struct CGRect)arg2;
@property(readonly, nonatomic) UIBezierPath *outlinePath;
- (void)updateOutlineLayer;
- (void)updateSelectedKnobContents;
- (void)unselectAllKnobs;
- (id)closestKnobToPoint:(struct CGPoint)arg1;
- (void)didPan:(id)arg1;
- (void)touchesBeganOnQuadEditPanGestureRecognizerDelegate:(id)arg1;
- (void)updateKnobLocationsToRect:(id)arg1;
@property(readonly, nonatomic) ICDocCamImageQuad *adjustedQuad;
@property(readonly, nonatomic) _Bool isDraggingKnob;
@property(readonly, nonatomic) _Bool isQuadValid;
@property(readonly, nonatomic) _Bool containsPointOutsideOfOverlayBounds;
- (void)setupLoupeLayerIfNeeded;
- (void)setImage:(id)arg1 orientation:(long long)arg2;
- (void)setTempOverlayMagnification:(double)arg1 animationDuration:(double)arg2;
- (void)updateOutlineAndKnobColorForIsValid:(_Bool)arg1;
- (void)updateOutlineAndKnobColorForCurrentValidityIfNecessary;
- (void)setUpKnobs;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

