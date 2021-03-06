//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NSCopying-Protocol.h>

@class NSDictionary;

@interface NTCatchUpOperationForYouFetchInfo : NSObject <NSCopying>
{
    _Bool _attemptedCachedOnly;
    NSDictionary *_feedContextByFeedID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *feedContextByFeedID; // @synthesize feedContextByFeedID=_feedContextByFeedID;
@property(readonly, nonatomic) _Bool attemptedCachedOnly; // @synthesize attemptedCachedOnly=_attemptedCachedOnly;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAttemptedCachedOnly:(_Bool)arg1 feedContextByFeedID:(id)arg2;
- (id)init;

@end

