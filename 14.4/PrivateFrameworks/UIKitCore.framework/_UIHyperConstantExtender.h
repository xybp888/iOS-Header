//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/_UIHyperExtender-Protocol.h>
#import <UIKitCore/_UIHyperExtender_Internal-Protocol.h>

@class NSString;

@interface _UIHyperConstantExtender : NSObject <_UIHyperExtender_Internal, _UIHyperExtender, NSSecureCoding, NSCopying>
{
    unsigned long long __dimensions;
    double __maximumDistance;
}

+ (id)keyPathsForValuesAffectingSelf;
+ (_Bool)supportsSecureCoding;
@property(nonatomic, setter=_setMaximumDistance:) double _maximumDistance; // @synthesize _maximumDistance=__maximumDistance;
@property(readonly, nonatomic) unsigned long long _dimensions; // @synthesize _dimensions=__dimensions;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_extentVector:(double *)arg1 forUnconstrainedPoint:(const double *)arg2 closestPoint:(const double *)arg3;
@property(readonly, copy) NSString *description;
- (id)initWithDimensions:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

