//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFWeakObjectCache;
@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface _MFWeakObjectCacheRef : NSObject
{
    id <NSCopying> _key;
    MFWeakObjectCache *_cache;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MFWeakObjectCache *cache; // @synthesize cache=_cache;
@property(copy, nonatomic) id <NSCopying> key; // @synthesize key=_key;
- (void)dealloc;

@end

