//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/CALayerDelegate-Protocol.h>
#import <NewsFeedLayout/NFLPipelayerDelegate-Protocol.h>
#import <NewsFeedLayout/NFLRankedLayoutSourceDelegate-Protocol.h>

@class NFLFeedSettings, NFLRankedLayoutSource, NSOperationQueue, NSString;
@protocol NFLFeedLayoutSearchConfiguration;

@interface NFLHeadlineCardDealer : NSObject <NFLPipelayerDelegate, NFLRankedLayoutSourceDelegate, CALayerDelegate>
{
    id <NFLFeedLayoutSearchConfiguration> _feedLayoutSearchConfiguration;
    NFLFeedSettings *_feedSettings;
    NFLRankedLayoutSource *_rankedLayoutSource;
    NSOperationQueue *_tilingOperationQueue;
    long long _qualityOfService;
    double _tileProminenceScoreBalanceValue;
}

- (void).cxx_destruct;
@property(nonatomic) double tileProminenceScoreBalanceValue; // @synthesize tileProminenceScoreBalanceValue=_tileProminenceScoreBalanceValue;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(retain, nonatomic) NSOperationQueue *tilingOperationQueue; // @synthesize tilingOperationQueue=_tilingOperationQueue;
@property(retain, nonatomic) NFLRankedLayoutSource *rankedLayoutSource; // @synthesize rankedLayoutSource=_rankedLayoutSource;
@property(copy, nonatomic) NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(copy, nonatomic) id <NFLFeedLayoutSearchConfiguration> feedLayoutSearchConfiguration; // @synthesize feedLayoutSearchConfiguration=_feedLayoutSearchConfiguration;
- (void)_validateFeedLayout;
- (CDUnknownBlockType)_segmentTypeDescriptionProvider;
- (Class)rankedLayoutSource:(id)arg1 rankedLayoutGenerationOperationClassForRequest:(id)arg2;
- (id)pipelayer:(id)arg1 descriptionForSegmentType:(unsigned long long)arg2;
- (void)pipelayer:(id)arg1 segmentForUnits:(id)arg2 segmentType:(unsigned long long)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)pipelayer:(id)arg1 maySegmentType:(unsigned long long)arg2 usePipeUnits:(id)arg3;
- (unsigned long long)pipelayer:(id)arg1 numberOfUnitsUsedBySegmentType:(unsigned long long)arg2;
- (id)pipelayer:(id)arg1 nextSegmentTypeCandidatesForSegmentType:(unsigned long long)arg2;
- (double)pipelayer:(id)arg1 secondaryScoreOfPath:(id)arg2 units:(id)arg3;
- (double)pipelayer:(id)arg1 transitionRankFromSegmentType:(unsigned long long)arg2 toSegmentType:(unsigned long long)arg3;
- (id)batchesFromPipeSegments:(id)arg1 tileInfos:(id)arg2;
- (id)batchesForTileInfos:(id)arg1 previousBatchContext:(id)arg2 nextBatchContext:(id)arg3;
- (id)initWithFeedSettings:(id)arg1 feedLayoutSearchConfiguration:(id)arg2 tileProminenceScoreBalanceValue:(double)arg3 qualityOfService:(long long)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

