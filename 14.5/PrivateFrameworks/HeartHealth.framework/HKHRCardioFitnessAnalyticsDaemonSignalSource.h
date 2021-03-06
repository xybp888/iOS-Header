//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HeartHealth/HKHRCardioFitnessAnalyticsSignalSource.h>

@class HDProfile;

@interface HKHRCardioFitnessAnalyticsDaemonSignalSource : HKHRCardioFitnessAnalyticsSignalSource
{
    HDProfile *_profile;
}

- (void).cxx_destruct;
- (long long)_biologicalSexWithError:(id *)arg1;
- (id)_birthDateComponentsWithError:(id *)arg1;
- (id)_classificationStringForCardioFitnessValue:(double)arg1 age:(long long)arg2 biologicalSex:(long long)arg3;
- (id)_latestCardioFitnessValueWithError:(id *)arg1;
- (id)latestClassificationWithIsOnboarded:(_Bool)arg1 error:(id *)arg2;
- (id)biologicalSexStringWithError:(id *)arg1;
- (long long)bucketedAgeWithError:(id *)arg1;
- (id)initWithProfile:(id)arg1;

@end

