//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDPassiveDataAggregator.h>

@class HKQuantityType;

@interface HDPassiveQuantityDataAggregator : HDPassiveDataAggregator
{
    HKQuantityType *_quantityType;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) HKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
- (id)dataObjectsFromSensorDatum:(id)arg1 error:(id *)arg2;
- (Class)sensorDatumClass;
- (id)objectType;
- (id)initForQuantityType:(id)arg1 dataCollectionManager:(id)arg2;

@end

