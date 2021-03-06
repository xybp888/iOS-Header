//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDateInterval, NSMutableDictionary;

@interface _HKSleepQueryResultBuilder : NSObject
{
    NSDateInterval *_resultInterval;
    NSArray *_sourceOrder;
    NSMutableDictionary *_samplesByCategoryValue;
    NSMutableDictionary *_samplesBySource;
}

- (void).cxx_destruct;
- (id)calculateResult;
- (id)_createDateIntervalsFromSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)_organizeSamplesBySource:(id)arg1;
- (void)addSleepSamples:(id)arg1;
- (id)_categorySampleBufferForSource:(id)arg1;
- (id)_categorySampleBufferForCategoryValue:(long long)arg1;
- (id)initWithResultInterval:(id)arg1 sourceOrder:(id)arg2;

@end

