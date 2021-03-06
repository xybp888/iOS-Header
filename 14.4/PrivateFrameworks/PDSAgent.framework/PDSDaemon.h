//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDSAgent/PDSDaemonListenerVendor-Protocol.h>

@class NSString, PDSBag, PDSCDCacheContainer, PDSConfiguration, PDSCoordinator, PDSEntryStore, PDSRequestQueue, PDSUserTracker, PDSXPCServer;
@protocol PDSCDCache><PDSKVStore;

@interface PDSDaemon : NSObject <PDSDaemonListenerVendor>
{
    PDSConfiguration *_configuration;
    PDSXPCServer *_XPCServer;
    PDSCDCacheContainer *_cacheContainer;
    PDSBag *_bag;
    PDSEntryStore *_entryStore;
    id <PDSCDCache><PDSKVStore> _underlyingStorage;
    PDSUserTracker *_userTracker;
    PDSCoordinator *_coordinator;
    PDSRequestQueue *_requestQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PDSRequestQueue *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(retain, nonatomic) PDSCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain, nonatomic) PDSUserTracker *userTracker; // @synthesize userTracker=_userTracker;
@property(nonatomic) __weak id <PDSCDCache><PDSKVStore> underlyingStorage; // @synthesize underlyingStorage=_underlyingStorage;
@property(nonatomic) __weak PDSEntryStore *entryStore; // @synthesize entryStore=_entryStore;
@property(retain, nonatomic) PDSBag *bag; // @synthesize bag=_bag;
@property(retain, nonatomic) PDSCDCacheContainer *cacheContainer; // @synthesize cacheContainer=_cacheContainer;
@property(retain, nonatomic) PDSXPCServer *XPCServer; // @synthesize XPCServer=_XPCServer;
@property(retain, nonatomic) PDSConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)_entryStore;
- (id)_underlyingStorage;
- (id)remoteInternalListener;
- (id)remoteListenerForAllClientIDs;
- (id)remoteListenerForClientIDs:(id)arg1;
- (void)start;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

