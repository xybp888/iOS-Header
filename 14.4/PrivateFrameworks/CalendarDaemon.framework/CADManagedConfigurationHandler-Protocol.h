//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSString;

@protocol CADManagedConfigurationHandler
- (NSArray *)filteredOpenInOriginatingAccounts:(NSArray *)arg1 targetAppBundleID:(NSString *)arg2 targetAccountManagement:(int)arg3;
- (NSArray *)filteredOpenInAccounts:(NSArray *)arg1 originatingAppBundleID:(NSString *)arg2 sourceAccountManagement:(int)arg3;
- (_Bool)mayShowLocalAccountsForTargetBundleID:(NSString *)arg1 targetAccountManagement:(int)arg2;
- (_Bool)mayShowLocalAccountsForBundleID:(NSString *)arg1 sourceAccountManagement:(int)arg2;
- (_Bool)isOpenInRestrictionInEffect;
@end

