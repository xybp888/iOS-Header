//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLAnimatedValue.h>

@class MISSING_TYPE;

@interface MDLAnimatedVector4 : MDLAnimatedValue
{
}

- (unsigned long long)getDouble4Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getFloat4Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;
- (void)resetWithDouble4Array:(const MISSING_TYPE **)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;
- (void)resetWithFloat4Array:(const MISSING_TYPE **)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;
- (MISSING_TYPE *)double4AtTime:(double)arg1;
- (MISSING_TYPE *)float4AtTime:(double)arg1;
- (void)setDouble4:(double)arg1 atTime: /* Error: Ran out of types for this method. */;
- (void)setFloat4:(double)arg1 atTime: /* Error: Ran out of types for this method. */;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2 time:(double)arg3;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2;
- (struct VtValue)defaultVtValue;
- (unsigned long long)precision;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

