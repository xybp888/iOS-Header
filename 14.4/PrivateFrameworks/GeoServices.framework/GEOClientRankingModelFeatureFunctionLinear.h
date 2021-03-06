//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOClientRankingModelFeatureFunction.h>

@interface GEOClientRankingModelFeatureFunctionLinear : GEOClientRankingModelFeatureFunction
{
    float _weight;
    float _maxRelativeValue;
    float _meanValue;
}

@property(readonly, nonatomic) float meanValue; // @synthesize meanValue=_meanValue;
@property(readonly, nonatomic) float maxRelativeValue; // @synthesize maxRelativeValue=_maxRelativeValue;
@property(readonly, nonatomic) float weight; // @synthesize weight=_weight;
- (long long)functionType;
- (id)initWithWeight:(float)arg1 maxRelativeValue:(float)arg2 meanValue:(float)arg3;
- (id)init;

@end

