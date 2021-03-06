//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCNetworkBehaviorMonitor, NSString;

@interface FCCKContentDatabase : NSObject
{
    _Bool _isProductionEnvironment;
    _Bool _shouldUseCloudd;
    _Bool _shouldUseSecureConnectionForCKAssetURLs;
    _Bool _shouldBypassCDNForCKAssetURLs;
    NSString *_containerIdentifier;
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
    double _maximumRetryAfterForCK;
}

- (void).cxx_destruct;
@property(nonatomic) double maximumRetryAfterForCK; // @synthesize maximumRetryAfterForCK=_maximumRetryAfterForCK;
@property(nonatomic) _Bool shouldBypassCDNForCKAssetURLs; // @synthesize shouldBypassCDNForCKAssetURLs=_shouldBypassCDNForCKAssetURLs;
@property(nonatomic) _Bool shouldUseSecureConnectionForCKAssetURLs; // @synthesize shouldUseSecureConnectionForCKAssetURLs=_shouldUseSecureConnectionForCKAssetURLs;
@property(readonly, nonatomic) _Bool shouldUseCloudd; // @synthesize shouldUseCloudd=_shouldUseCloudd;
@property(readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor; // @synthesize networkBehaviorMonitor=_networkBehaviorMonitor;
@property(readonly, nonatomic) _Bool isProductionEnvironment; // @synthesize isProductionEnvironment=_isProductionEnvironment;
@property(readonly, copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
- (id)permanentURLForRecordID:(id)arg1 field:(long long)arg2 useSecureConnection:(_Bool)arg3;
- (id)permanentURLForRecordID:(id)arg1 field:(long long)arg2;
- (void)addOperation:(id)arg1;
- (void)updateAssetURLHostIfNeededWithComponents:(id)arg1;
- (id)initWithContainerIdentifier:(id)arg1 productionEnvironment:(_Bool)arg2 networkBehaviorMonitor:(id)arg3;
- (id)initWithContextConfiguration:(id)arg1 networkBehaviorMonitor:(id)arg2;
- (id)init;

@end

