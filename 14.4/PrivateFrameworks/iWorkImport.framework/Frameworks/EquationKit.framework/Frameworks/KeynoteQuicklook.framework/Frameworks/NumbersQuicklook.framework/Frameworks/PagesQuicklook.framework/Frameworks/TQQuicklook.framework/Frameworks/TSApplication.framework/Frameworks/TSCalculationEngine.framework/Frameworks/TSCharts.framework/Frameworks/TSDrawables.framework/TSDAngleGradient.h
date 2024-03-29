//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDGradient.h>

#import <TSDrawables/TSDMixing-Protocol.h>

@interface TSDAngleGradient : TSDGradient <TSDMixing>
{
    double mAngle;
}

@property(nonatomic) double gradientAngle; // @synthesize gradientAngle=mAngle;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (void)p_paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2 naturalBounds:(struct CGRect)arg3;
- (struct CGAffineTransform)p_shadingTransformForBounds:(struct CGRect)arg1;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintPath:(struct CGPath *)arg1 naturalBounds:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 isPDF:(_Bool)arg4;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 atAngle:(double)arg3;
- (struct CGPoint)endPointForPath:(id)arg1 andBounds:(struct CGRect)arg2;
- (struct CGPoint)startPointForPath:(id)arg1 andBounds:(struct CGRect)arg2;
- (double)p_bestGradientLengthForRect:(struct CGRect)arg1 atAngle:(double)arg2;
@property(readonly, nonatomic) double gradientAngleInDegrees;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2 type:(unsigned long long)arg3 angle:(double)arg4;
- (id)initWithGradientStops:(id)arg1 type:(unsigned long long)arg2 opacity:(double)arg3 angle:(double)arg4;
- (void)saveToArchive:(struct FillArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;

@end

