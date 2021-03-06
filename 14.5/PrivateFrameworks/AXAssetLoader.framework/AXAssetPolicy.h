//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface AXAssetPolicy : NSObject
{
    NSNumber *_minSupportedFormatVersion;
    NSNumber *_maxSupportedFormatVersion;
    double _downloadResourceTimeout;
    double _updateCatalogTimeout;
    double _refreshRetryInterval;
    double _downloadRetryInterval;
    NSString *_launchActivityIdentifier;
    double _updateInterval;
}

+ (id)policy;
- (void).cxx_destruct;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
@property(readonly, nonatomic) NSString *launchActivityIdentifier; // @synthesize launchActivityIdentifier=_launchActivityIdentifier;
@property(nonatomic) double downloadRetryInterval; // @synthesize downloadRetryInterval=_downloadRetryInterval;
@property(nonatomic) double refreshRetryInterval; // @synthesize refreshRetryInterval=_refreshRetryInterval;
@property(nonatomic) double updateCatalogTimeout; // @synthesize updateCatalogTimeout=_updateCatalogTimeout;
@property(nonatomic) double downloadResourceTimeout; // @synthesize downloadResourceTimeout=_downloadResourceTimeout;
@property(retain, nonatomic) NSNumber *maxSupportedFormatVersion; // @synthesize maxSupportedFormatVersion=_maxSupportedFormatVersion;
@property(retain, nonatomic) NSNumber *minSupportedFormatVersion; // @synthesize minSupportedFormatVersion=_minSupportedFormatVersion;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)assetsToPurgeFromInstalledAssets:(id)arg1;
- (id)assetsToDownloadFromRefreshedAssets:(id)arg1;
- (_Bool)isAssetSupportedBasedOnMinMaxFormatVersion:(id)arg1;
- (_Bool)isAssetContentVersion:(id)arg1 greatherThanInstalledAssets:(id)arg2;
- (_Bool)shouldDownloadAsset:(id)arg1 withInstalledAssets:(id)arg2;
@property(readonly, nonatomic) _Bool shouldCopyLocally;
@property(readonly, nonatomic) NSString *assetType;
- (id)description;
- (id)init;
- (id)downloadOptionsForOperation:(unsigned long long)arg1 userInitiated:(_Bool)arg2;
- (id)newAssetQuery;

@end

