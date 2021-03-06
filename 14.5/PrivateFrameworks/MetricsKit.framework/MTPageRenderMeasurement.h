//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTPerfBaseMeasurement.h>

#import <MetricsKit/MTPageRenderMeasurementData-Protocol.h>

@class NSArray, NSString;

@interface MTPageRenderMeasurement : MTPerfBaseMeasurement <MTPageRenderMeasurementData>
{
    NSString *_pageId;
    NSString *_pageType;
    NSString *_pageContext;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *pageContext; // @synthesize pageContext=_pageContext;
@property(copy, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(copy, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
- (void)setXpSamplingPercentageUsers:(double)arg1;
- (void)setXpSamplingForced:(_Bool)arg1;
- (void)setXpSessionDuration:(unsigned long long)arg1;
- (void)setPreloadStatus:(id)arg1;
- (void)setAppLaunch:(_Bool)arg1;
- (void)setPrimaryDataResponseCached:(_Bool)arg1;
- (void)setLaunchCorrelationKey:(id)arg1;
- (void)mark:(id)arg1 time:(long long)arg2;
- (id)initWithMeasurementTransformer:(id)arg1 pageId:(id)arg2 pageType:(id)arg3 pageContext:(id)arg4 eventData:(id)arg5;
- (void)mark:(id)arg1 date:(id)arg2;
- (void)mark:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *additionalFields;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSArray *eventData;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

