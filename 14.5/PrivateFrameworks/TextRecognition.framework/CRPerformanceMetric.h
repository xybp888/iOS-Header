//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextRecognition/NSCopying-Protocol.h>

@class NSString;

@interface CRPerformanceMetric : NSObject <NSCopying>
{
    NSString *_displayName;
    NSString *_unit;
    NSString *_serializationKey;
    double _denominator;
    double _sumX;
    unsigned long long _pcMetricID;
    long long _numSamples;
    double _M2;
    double _welfordMean;
}

+ (id)pcMetricWithDisplayName:(id)arg1 pcMetricID:(unsigned long long)arg2 unit:(id)arg3 denominator:(double)arg4 serializationKey:(id)arg5;
+ (id)metricWithDisplayName:(id)arg1 unit:(id)arg2 denominator:(double)arg3 serializationKey:(id)arg4;
- (void).cxx_destruct;
@property double welfordMean; // @synthesize welfordMean=_welfordMean;
@property double M2; // @synthesize M2=_M2;
@property long long numSamples; // @synthesize numSamples=_numSamples;
@property unsigned long long pcMetricID; // @synthesize pcMetricID=_pcMetricID;
@property double sumX; // @synthesize sumX=_sumX;
@property double denominator; // @synthesize denominator=_denominator;
@property(copy) NSString *serializationKey; // @synthesize serializationKey=_serializationKey;
@property(copy) NSString *unit; // @synthesize unit=_unit;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
- (double)stdDev;
@property(readonly) double variance;
- (double)mean;
- (void)mergeMetric:(id)arg1;
- (void)addSample:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1 key:(id)arg2;
- (id)initWithDisplayName:(id)arg1 unit:(id)arg2 denominator:(double)arg3 serializationKey:(id)arg4;

@end

