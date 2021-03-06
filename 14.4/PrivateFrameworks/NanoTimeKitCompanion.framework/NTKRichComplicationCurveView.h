//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationShapeView.h>

@interface NTKRichComplicationCurveView : NTKRichComplicationShapeView
{
    double _curveWidth;
    double _padding;
    double _drawingBeginAngle;
    double _drawingEndAngle;
    _Bool _clockwise;
    double _beginAngle;
    double _endAngle;
}

@property(nonatomic) _Bool clockwise; // @synthesize clockwise=_clockwise;
@property(nonatomic) double endAngle; // @synthesize endAngle=_endAngle;
@property(nonatomic) double beginAngle; // @synthesize beginAngle=_beginAngle;
- (_Bool)_shouldReverseGradient;
- (void)_updatePath;
- (const struct CGPath *)_generatePath;
- (id)_normalizeGradientLocations:(id)arg1;
- (struct CGPoint)_pointAtProgress:(float)arg1;
- (struct CGPoint)_centerPoint;
- (double)_outerRadius;
- (double)_totalDrawableAngle;
- (double)_angleAtProgress:(float)arg1;
- (double)_shapeLineWidth;
- (void)_setupGradientLayer:(id)arg1;
- (void)layoutSubviews;
- (id)initWithCurveWidth:(double)arg1 padding:(double)arg2 beginAngle:(double)arg3 endAngle:(double)arg4 forDevice:(id)arg5 withFilterStyle:(long long)arg6;

@end

