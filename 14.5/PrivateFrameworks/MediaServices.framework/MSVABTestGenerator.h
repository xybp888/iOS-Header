//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSVABTestGenerator : NSObject
{
    float _probabilityForOutcomeA;
    long long _totalExperiments;
    long long _totalForOutcomeA;
    long long _totalForOutcomeB;
}

@property(readonly, nonatomic) long long totalForOutcomeB; // @synthesize totalForOutcomeB=_totalForOutcomeB;
@property(readonly, nonatomic) long long totalForOutcomeA; // @synthesize totalForOutcomeA=_totalForOutcomeA;
@property(readonly, nonatomic) long long totalExperiments; // @synthesize totalExperiments=_totalExperiments;
@property(readonly, nonatomic) float probabilityForOutcomeA; // @synthesize probabilityForOutcomeA=_probabilityForOutcomeA;
- (id)description;
- (long long)nextOutcome;
- (void)updateProbabilityForOutcomeA:(float)arg1;
- (id)initWithProbabilityForOutcomeA:(float)arg1;

@end

