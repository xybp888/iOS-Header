//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FCSolHeuristic : NSObject
{
    _Bool _alternate;
    _Bool _enforcePublisherCap;
    NSArray *_groupSizes;
    long long _iterations;
    long long _maxPublisherOccurrences;
    long long _maxUnpaidArticles;
    long long _maxEvergreenArticles;
    long long _heuristicSampleSize;
    CDUnknownBlockType _utilityBlock;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType utilityBlock; // @synthesize utilityBlock=_utilityBlock;
@property(readonly, nonatomic) long long heuristicSampleSize; // @synthesize heuristicSampleSize=_heuristicSampleSize;
@property(readonly, nonatomic) long long maxEvergreenArticles; // @synthesize maxEvergreenArticles=_maxEvergreenArticles;
@property(readonly, nonatomic) long long maxUnpaidArticles; // @synthesize maxUnpaidArticles=_maxUnpaidArticles;
@property(readonly, nonatomic) _Bool enforcePublisherCap; // @synthesize enforcePublisherCap=_enforcePublisherCap;
@property(readonly, nonatomic) long long maxPublisherOccurrences; // @synthesize maxPublisherOccurrences=_maxPublisherOccurrences;
@property(readonly, nonatomic) long long iterations; // @synthesize iterations=_iterations;
@property(readonly, nonatomic) _Bool alternate; // @synthesize alternate=_alternate;
@property(retain, nonatomic) NSArray *groupSizes; // @synthesize groupSizes=_groupSizes;
- (double)computeScoreWithSelectedGroup:(id)arg1 remainingArticles:(id)arg2 remainingTags:(id)arg3 articlesByTag:(id)arg4;
- (id)fillGroupsWithSelectedGroup:(id)arg1 remainingArticles:(id)arg2 remainingTags:(id)arg3 articlesByTag:(id)arg4;
- (id)initWithOption:(long long)arg1 minClusterSize:(long long)arg2 maxClusterSize:(long long)arg3 minIdealClusterSize:(long long)arg4 maxIdealClusterSize:(long long)arg5 maxPublisherOccurrences:(long long)arg6 enforcePublisherCap:(_Bool)arg7 maxUnpaidArticles:(long long)arg8 maxEvergreenArticles:(long long)arg9 heuristicSampleSize:(long long)arg10 utilityBlock:(CDUnknownBlockType)arg11;

@end

