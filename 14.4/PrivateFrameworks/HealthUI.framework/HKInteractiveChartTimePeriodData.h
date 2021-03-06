//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesChartData-Protocol.h>

@class NSDateComponents, NSString;

@interface HKInteractiveChartTimePeriodData : NSObject <HKGraphSeriesChartData>
{
    double _timePeriod;
    NSString *_timePeriodPrefix;
    NSDateComponents *_statisticsInterval;
    long long _recordCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long recordCount; // @synthesize recordCount=_recordCount;
@property(retain, nonatomic) NSDateComponents *statisticsInterval; // @synthesize statisticsInterval=_statisticsInterval;
@property(retain, nonatomic) NSString *timePeriodPrefix; // @synthesize timePeriodPrefix=_timePeriodPrefix;
@property(nonatomic) double timePeriod; // @synthesize timePeriod=_timePeriod;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

