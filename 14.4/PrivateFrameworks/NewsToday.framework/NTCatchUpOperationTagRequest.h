//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NSCopying-Protocol.h>

@class NSString;

@interface NTCatchUpOperationTagRequest : NSObject <NSCopying>
{
    NSString *_tagID;
    long long _cutoffTime;
    unsigned long long _headlinesPerFeedFetchCount;
    long long _fetchingBin;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long fetchingBin; // @synthesize fetchingBin=_fetchingBin;
@property(readonly, nonatomic) unsigned long long headlinesPerFeedFetchCount; // @synthesize headlinesPerFeedFetchCount=_headlinesPerFeedFetchCount;
@property(readonly, nonatomic) long long cutoffTime; // @synthesize cutoffTime=_cutoffTime;
@property(readonly, copy, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;
- (id)initWithTagTodaySectionSpecificConfig:(id)arg1 tagID:(id)arg2;
- (id)init;

@end

