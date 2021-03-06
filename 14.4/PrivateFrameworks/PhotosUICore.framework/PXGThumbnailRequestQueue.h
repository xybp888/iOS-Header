//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXGThumbnailRequestQueue : NSObject
{
    long long _capacity;
    long long _count;
    struct PXGThumbnailRequest *_requests;
}

@property(readonly, nonatomic) struct PXGThumbnailRequest *requests; // @synthesize requests=_requests;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void)removeAllRequests;
- (void)sortRequests;
- (void)enqueueRequestsWithItemRange:(struct _NSRange)arg1 textureRequestIDs:(struct _NSRange)arg2 displayAssetFetchResult:(id)arg3 targetSize:(struct CGSize)arg4;
- (id)description;
- (void)dealloc;
- (id)init;

@end

