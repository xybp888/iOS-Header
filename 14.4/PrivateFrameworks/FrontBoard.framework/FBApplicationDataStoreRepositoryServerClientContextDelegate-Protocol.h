//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBApplicationDataStoreRepositoryServerClientContext, NSString;

@protocol FBApplicationDataStoreRepositoryServerClientContextDelegate <NSObject>
- (void)applicationDataStoreRepositoryClientContext:(FBApplicationDataStoreRepositoryServerClientContext *)arg1 repositoryInvalidatedForBundleID:(NSString *)arg2;
- (void)applicationDataStoreRepositoryClientContext:(FBApplicationDataStoreRepositoryServerClientContext *)arg1 valueChangedForObject:(id)arg2 key:(NSString *)arg3 bundleID:(NSString *)arg4;
@end

