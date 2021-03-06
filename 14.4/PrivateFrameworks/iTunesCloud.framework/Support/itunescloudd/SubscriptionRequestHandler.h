//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BaseRequestHandler.h"

#import "ICEnvironmentMonitorObserver-Protocol.h"

@class CloudArtworkImporter, NSString;

@interface SubscriptionRequestHandler : BaseRequestHandler <ICEnvironmentMonitorObserver>
{
    CloudArtworkImporter *_artworkImporter;
}

+ (id)handler;
+ (id)handlers;
- (void).cxx_destruct;
@property(readonly, nonatomic) CloudArtworkImporter *artworkImporter; // @synthesize artworkImporter=_artworkImporter;
- (void)_importAllItemArtwork;
- (void)_loadArtworkInfoForSubscriptionPersistentIDs:(id)arg1 artworkType:(long long)arg2 entityType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)environmentMonitorDidChangePower:(id)arg1;
- (void)loadMissingArtwork;
- (void)loadScreenshotInfoForSubscriptionPersistentIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadArtworkInfoForSubscriptionContainerPersistentIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadArtworkInfoForSubscriptionItemPersistentIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deprioritizeSubscriptionContainerArtworkForPersistentID:(long long)arg1;
- (void)deprioritizeSubscriptionScreenshotForPersistentID:(long long)arg1;
- (void)deprioritizeSubscriptionItemArtworkForPersistentID:(long long)arg1;
- (void)importContainerArtworkForPersistentID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importScreenshotForPersistentID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importItemArtworkForPersistentID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)becomeInactiveWithDeauthentication:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)becomeActive;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

