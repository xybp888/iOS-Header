//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICMusicSubscriptionStatusCacheKey, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ICMusicSubscriptionStatusCache : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_persistenceQueue;
    ICMusicSubscriptionStatusCacheKey *_baseCacheKey;
    NSMutableDictionary *_cachedSubscriptionStatusResponses;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (id)_statusChangeUserInfoForUserIdentity:(id)arg1 oldStatus:(id)arg2 newStatus:(id)arg3;
- (void)_postLocalChangeNotificationWithUserInfo:(id)arg1;
- (void)_persistCachePostingGlobalNotification:(_Bool)arg1;
- (void)_loadPersistedCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)_getCacheKeyForRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleSubscriptionStatusChangedDistributedNotification:(id)arg1;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;
- (void)_handlePhoneNumberDidChangeNotification:(id)arg1;
- (void)updateBaseCacheKey;
- (void)setCachedSubscriptionStatusResponseNeedsReloadForRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setCachedSubscriptionStatusResponseNeedsReloadForAllRequestContextsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setCachedSubscriptionStatusResponse:(id)arg1 forRequestContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getCachedSubscriptionStatusResponseForRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)_init;

@end

