//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class NSDate, NSDictionary, NSString;
@protocol FCPersonalizationAggregate;

@protocol FCPersonalizationAggregate <NSObject>
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) double confidence;
@property(readonly, nonatomic) NSDate *lastModified;
@property(readonly, nonatomic) unsigned long long eventCount;
@property(readonly, nonatomic) double impressions;
@property(readonly, nonatomic) double clicks;
@property(readonly, nonatomic) NSString *featureKey;
- (double)relativePersonalizationValueWithCorrelatedAggregate:(id <FCPersonalizationAggregate>)arg1 baseline:(id <FCPersonalizationAggregate>)arg2 decayFactor:(double)arg3 baselineClicksMultiplier:(double)arg4;
- (double)powerWithDecayFactor:(double)arg1;
- (double)personalizationValueWithCorrelatedAggregate:(id <FCPersonalizationAggregate>)arg1 baseline:(id <FCPersonalizationAggregate>)arg2 decayRate:(double)arg3 baselineClicksMultiplier:(double)arg4;
- (double)personalizationValueWithBaseline:(id <FCPersonalizationAggregate>)arg1 decayRate:(double)arg2 baselineClicksMultiplier:(double)arg3;
- (double)personalizationValueWithBaseline:(id <FCPersonalizationAggregate>)arg1 decayRate:(double)arg2;
@end

