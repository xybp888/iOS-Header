//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TSCH3DChartType, TSCHChartAxis, TSCHChartInfo, TSCHChartModel, TSCHChartSeries, TSCHChartSeriesType;

@interface TSCH3DChartModelEnumerator : NSObject
{
    struct vector<double, std::__1::allocator<double>> _seriesValues;
    struct vector<double, std::__1::allocator<double>> _coordinateValues;
    TSCHChartModel *_model;
    NSArray *_seriesList;
    unsigned long long _numberOfValues;
    TSCH3DChartType *_chartType;
    TSCHChartSeriesType *_seriesType;
    TSCHChartAxis *_coordinateAxis;
    TSCHChartAxis *_valueAxis;
    double _intercept;
    double _unitSpaceIntercept;
    struct ValueEnumerator _seriesEnumerator;
    struct ValueEnumerator _coordinateEnumerator;
}

+ (id)enumeratorWithModel:(id)arg1 chartType:(id)arg2 seriesType:(id)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) TSCHChartSeriesType *seriesType; // @synthesize seriesType=_seriesType;
@property(readonly, nonatomic) TSCH3DChartType *chartType; // @synthesize chartType=_chartType;
@property(readonly, nonatomic) TSCHChartModel *model; // @synthesize model=_model;
- (unsigned int)valueLabelPositionForAxisValue:(double)arg1;
- (_Bool)skipZeroValues;
- (id)seriesFillOrStrokeColor;
- (id)seriesFill;
- (id)seriesName;
- (_Bool)showSeriesName;
- (_Bool)showValueLabels;
- (id)valueStringForLabelResources:(id)arg1;
- (id)valueString;
- (_Bool)isValid;
- (_Bool)isValidNonZero;
- (unsigned long long)elementIndex;
- (double)unitSpaceValueForAxisValue:(double)arg1;
- (_Bool)isStackedPercentageThatRoundsDownToZero;
- (double)axisSpaceValue;
- (double)unitSpaceValue;
- (double)groupValue;
- (id)nextElement:(unsigned long long)arg1;
- (id)nextElement;
- (void)updateValue;
- (double)unitSpaceIntercept;
- (double)intercept;
- (unsigned long long)index;
- (id)elementEnumerator;
- (tvec2_3b141483)position;
- (id)nextSeries:(unsigned long long)arg1;
- (id)nextSeries;
@property(readonly, nonatomic) TSCHChartSeries *series;
@property(readonly, nonatomic) TSCHChartInfo *info;
- (id)reverseSeriesEnumerator;
- (id)seriesEnumerator;
@property(readonly, nonatomic) tvec2_3b141483 size;
- (unsigned long long)numberOfSeries;
- (unsigned long long)countSeries;
- (void)resetForReverseSeriesEnumeration:(_Bool)arg1;
- (id)p_resetCoordinateEnumeration;
- (void)updateAxes;
- (id)initWithModel:(id)arg1 chartType:(id)arg2 seriesType:(id)arg3;

@end

