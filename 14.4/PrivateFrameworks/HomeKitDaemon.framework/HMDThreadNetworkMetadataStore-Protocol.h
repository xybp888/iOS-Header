//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSString;

@protocol HMDThreadNetworkMetadataStore <NSObject>
- (void)retrieveMetadataForNetworkID:(NSString *)arg1 completion:(void (^)(HMThreadNetworkMetadata *, NSError *))arg2;
@end

