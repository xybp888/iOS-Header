//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQuery.h>

#import <HealthKit/HKCorrelationQueryClientInterface-Protocol.h>

@class HKCorrelationType, NSDictionary, NSMutableArray, NSString;

@interface HKCorrelationQuery : HKQuery <HKCorrelationQueryClientInterface>
{
    NSDictionary *_samplePredicates;
    NSMutableArray *_correlationsPendingDelivery;
    CDUnknownBlockType _completionHandler;
    NSDictionary *_filterDictionary;
}

+ (void)configureClientInterface:(id)arg1;
+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (_Bool)shouldApplyAdditionalPredicateForObjectType:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *filterDictionary; // @synthesize filterDictionary=_filterDictionary;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, copy) NSDictionary *samplePredicates; // @synthesize samplePredicates=_samplePredicates;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_deliverError:(id)arg1;
- (void)queue_validate;
- (void)queue_populateConfiguration:(id)arg1;
- (void)client_deliverCorrelations:(id)arg1 clearPendingSamples:(_Bool)arg2 isFinalBatch:(_Bool)arg3 queryUUID:(id)arg4;
@property(readonly, copy) HKCorrelationType *correlationType;
- (id)initWithType:(id)arg1 predicate:(id)arg2 samplePredicates:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

