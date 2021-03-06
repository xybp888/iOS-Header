//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol CNManagedProfileConnection <NSObject>
- (NSArray *)filteredOpenInOriginatingAccounts:(NSArray *)arg1 targetAppBundleID:(NSString *)arg2 targetAccountManagement:(long long)arg3;
- (NSArray *)filteredOpenInAccounts:(NSArray *)arg1 originatingAppBundleID:(NSString *)arg2 sourceAccountManagement:(long long)arg3;
- (_Bool)mayShowLocalContactsAccountsForTargetBundleID:(NSString *)arg1 targetAccountManagement:(long long)arg2;
- (_Bool)mayShowLocalContactsAccountsForBundleID:(NSString *)arg1 sourceAccountManagement:(long long)arg2;
- (_Bool)isOpenInRestrictionInEffect;
@end

