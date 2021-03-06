//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FitnessUI/FIUIChartDataSetDataSource-Protocol.h>

@class NSArray, NSString;
@protocol FIUIChartDataGroupDataSource;

@interface FIUIChartDataGroup : NSObject <FIUIChartDataSetDataSource>
{
    id <FIUIChartDataGroupDataSource> _dataSource;
    NSArray *_dataSets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *dataSets; // @synthesize dataSets=_dataSets;
@property(nonatomic) __weak id <FIUIChartDataGroupDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)_labelsForSetAtIndex:(unsigned long long)arg1;
- (id)_pointForSetAtIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2;
- (unsigned long long)_numberOfDataPointsInSetAtIndex:(unsigned long long)arg1;
- (unsigned long long)_numberOfDataSets;
- (id)labelsForSet:(id)arg1;
- (id)dataSet:(id)arg1 chartPointForIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfDataPointsForDataSet:(id)arg1;
- (id)_dataSetAtIndexCreateIfNecessary:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (void)reloadData;
- (id)dataSetAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfDataSets;
- (id)maxXValue;
- (id)minXValue;
- (id)maxYValue;
- (id)minYValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

