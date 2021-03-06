//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedScalar : MDLAnimatedValue
{
}

- (unsigned long long)getDoubleArray:(double *)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getFloatArray:(float *)arg1 maxCount:(unsigned long long)arg2;
- (void)resetWithDoubleArray:(const double *)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;
- (void)resetWithFloatArray:(const float *)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;
- (double)doubleAtTime:(double)arg1;
- (float)floatAtTime:(double)arg1;
- (void)setDouble:(double)arg1 atTime:(double)arg2;
- (void)setFloat:(float)arg1 atTime:(double)arg2;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2 time:(double)arg3;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2;
- (struct VtValue)defaultVtValue;
- (unsigned long long)precision;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

