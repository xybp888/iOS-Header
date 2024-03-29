//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQuery.h>

#import <HealthKit/HKStatisticsCollectionQueryClientInterface-Protocol.h>

@class HKStatisticsCollection, NSDate, NSDateComponents, NSMutableArray, NSNumber, NSString;

@interface HKStatisticsCollectionQuery : HKQuery <HKStatisticsCollectionQueryClientInterface>
{
    NSDate *_anchorDate;
    unsigned long long _options;
    NSDateComponents *_intervalComponents;
    NSMutableArray *_results;
    _Bool _hasReceivedInitialResults;
    _Bool _requireQuantityType;
    CDUnknownBlockType _initialResultsHandler;
    CDUnknownBlockType _statisticsUpdateHandler;
    NSNumber *_lastAnchor;
    HKStatisticsCollection *_statisticsCollection;
    unsigned long long _mergeStrategy;
}

+ (void)configureClientInterface:(id)arg1;
+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long mergeStrategy; // @synthesize mergeStrategy=_mergeStrategy;
@property(retain) HKStatisticsCollection *statisticsCollection; // @synthesize statisticsCollection=_statisticsCollection;
@property(retain) NSNumber *lastAnchor; // @synthesize lastAnchor=_lastAnchor;
@property(copy, nonatomic) CDUnknownBlockType statisticsUpdateHandler; // @synthesize statisticsUpdateHandler=_statisticsUpdateHandler;
@property(copy, nonatomic) CDUnknownBlockType initialResultsHandler; // @synthesize initialResultsHandler=_initialResultsHandler;
@property(readonly, copy) NSDateComponents *intervalComponents; // @synthesize intervalComponents=_intervalComponents;
@property(readonly) unsigned long long options; // @synthesize options=_options;
@property(readonly) NSDate *anchorDate; // @synthesize anchorDate=_anchorDate;
- (void)_queue_deliverStatisticsObjects:(id)arg1 forQuery:(id)arg2;
- (void)_queue_deliverResetStatisticsObjects:(id)arg1 forQuery:(id)arg2;
- (void)_queue_deliverInitialStatisticsObjects:(id)arg1 anchor:(id)arg2 queryUUID:(id)arg3;
- (void)client_deliverUpdatedStatistics:(id)arg1 anchor:(id)arg2 query:(id)arg3;
- (void)client_deliverStatisticsBatch:(id)arg1 resetStatistics:(_Bool)arg2 isFinal:(_Bool)arg3 anchor:(id)arg4 query:(id)arg5;
- (void)queue_deliverError:(id)arg1;
- (void)queue_validate;
- (_Bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (id)initWithSampleType:(id)arg1 samplePredicate:(id)arg2 options:(unsigned long long)arg3 anchorDate:(id)arg4 intervalComponents:(id)arg5;
- (id)initWithQuantityType:(id)arg1 quantitySamplePredicate:(id)arg2 options:(unsigned long long)arg3 anchorDate:(id)arg4 intervalComponents:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

