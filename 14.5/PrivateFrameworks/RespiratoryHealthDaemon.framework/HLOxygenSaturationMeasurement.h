//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HLHeartRateData, NSDateInterval, NSNumber;

__attribute__((visibility("hidden")))
@interface HLOxygenSaturationMeasurement : NSObject
{
    NSDateInterval *_dateInterval;
    NSNumber *_oxygenSaturationPercentage;
    HLHeartRateData *_averageHeartRateData;
    NSNumber *_pressureInKilopascals;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *pressureInKilopascals; // @synthesize pressureInKilopascals=_pressureInKilopascals;
@property(retain, nonatomic) HLHeartRateData *averageHeartRateData; // @synthesize averageHeartRateData=_averageHeartRateData;
@property(retain, nonatomic) NSNumber *oxygenSaturationPercentage; // @synthesize oxygenSaturationPercentage=_oxygenSaturationPercentage;
@property(retain, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;

@end

