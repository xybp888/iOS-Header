//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FRPersistedBatchMetadata-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NFLBatchContext, NSArray, NSDictionary, NSString;

@protocol FRPersistedFeedLayoutRegion <FRPersistedBatchMetadata, NSObject, NSCopying>
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) NFLBatchContext *batchContext;
@property(readonly, nonatomic) NSDictionary *layoutAttributesByTileInfoID;
@property(readonly, nonatomic) NSArray *tileInfoIDs;
@property(readonly, copy, nonatomic) NSString *regionID;
@end

