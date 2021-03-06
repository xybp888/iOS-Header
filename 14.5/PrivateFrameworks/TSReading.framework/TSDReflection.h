//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>
#import <TSReading/NSMutableCopying-Protocol.h>
#import <TSReading/TSDMixing-Protocol.h>

@interface TSDReflection : NSObject <TSDMixing, NSCopying, NSMutableCopying>
{
    double mOpacity;
    double mFadeAcceleration;
}

+ (_Bool)canMixWithNilObjects;
+ (id)reflection;
@property(readonly, nonatomic) double fadeAcceleration; // @synthesize fadeAcceleration=mFadeAcceleration;
@property(readonly, nonatomic) double opacity; // @synthesize opacity=mOpacity;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithOpacity:(double)arg1;
- (id)initWithOpacity:(double)arg1 fadeAcceleration:(double)arg2;
- (id)init;

@end

