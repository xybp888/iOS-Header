//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKHeartRateSummaryStatistics.h>

@class NSDictionary;

@interface HKHeartRateSummaryWorkoutRecoveryStatistics : HKHeartRateSummaryStatistics
{
    unsigned long long _workoutActivityType;
    NSDictionary *_perMinuteReadings;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setPerMinuteReadings:) NSDictionary *perMinuteReadings; // @synthesize perMinuteReadings=_perMinuteReadings;
@property(readonly, nonatomic) unsigned long long workoutActivityType; // @synthesize workoutActivityType=_workoutActivityType;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 numberOfBuckets:(long long)arg2 workoutUUID:(id)arg3 workoutActivityType:(unsigned long long)arg4;

@end

