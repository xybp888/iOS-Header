//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SFTokenBucket;

@interface SFTokenBucketWithDups : NSObject
{
    SFTokenBucket *_bucket;
    unsigned long long _maxDups;
    struct __CFArray *_dups;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (_Bool)acquireTokenForIdentifier:(unsigned long long)arg1;
- (id)initWithBucket:(id)arg1 dupHistoryLength:(unsigned long long)arg2;

@end

