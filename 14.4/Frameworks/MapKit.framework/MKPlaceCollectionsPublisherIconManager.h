//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKPublisherIconProvider-Protocol.h>
#import <MapKit/NSCacheDelegate-Protocol.h>

@class NSCache, NSString;
@protocol OS_dispatch_queue;

@interface MKPlaceCollectionsPublisherIconManager : NSObject <NSCacheDelegate, MKPublisherIconProvider>
{
    NSObject<OS_dispatch_queue> *_publisherLogoImageQueue;
    NSCache *_publisherIconCache;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSCache *publisherIconCache; // @synthesize publisherIconCache=_publisherIconCache;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)iconForPublisherNamed:(id)arg1 usingId:(unsigned int)arg2 contentScale:(double)arg3 onCompletion:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

