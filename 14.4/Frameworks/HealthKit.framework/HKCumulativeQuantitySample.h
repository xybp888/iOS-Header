//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQuantitySample.h>

@class HKQuantity;

@interface HKCumulativeQuantitySample : HKQuantitySample
{
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)_isConcreteObjectClass;
- (id)sum;
@property(copy, nonatomic, setter=_setSumQuantity:) HKQuantity *sumQuantity;

@end

