//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProviderManager.h>

#import <RelevanceEngine/REActivityRelevanceProviderManagerProperties-Protocol.h>
#import <RelevanceEngine/REPredictorObserver-Protocol.h>

@class NSString;

@interface REActivityRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REActivityRelevanceProviderManagerProperties>
{
    float _activeEnergy;
    float _exerciseTime;
    float _standHour;
}

+ (_Bool)_wantsSeperateRelevanceQueue;
+ (Class)_relevanceProviderClass;
+ (id)_features;
@property(readonly, nonatomic) float standHour;
@property(readonly, nonatomic) float exerciseTime;
@property(readonly, nonatomic) float activeEnergy;
- (void)predictorDidUpdate:(id)arg1;
- (void)_prepareForUpdate;
- (void)pause;
- (void)resume;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

