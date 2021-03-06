//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CKDCachePurger : NSObject
{
    _Bool _purged;
    NSArray *_oldCacheDirs;
}

+ (id)enumerateOldCachesForApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 containerPath:(id)arg3 cachesPath:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool purged; // @synthesize purged=_purged;
@property(readonly, nonatomic) NSArray *oldCacheDirs; // @synthesize oldCacheDirs=_oldCacheDirs;
- (void)purgeOldCacheDirectories;
- (id)initWithApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 containerPath:(id)arg3 cachePath:(id)arg4;

@end

