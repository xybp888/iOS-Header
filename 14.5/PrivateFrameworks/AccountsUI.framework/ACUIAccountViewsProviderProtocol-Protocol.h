//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccountsUI/NSObject-Protocol.h>

@class ACAccount, NSArray, NSDictionary, NSString;

@protocol ACUIAccountViewsProviderProtocol <NSObject>
- (NSDictionary *)configurationInfoForCreatingAccountWithType:(NSString *)arg1;
- (NSDictionary *)configurationInfoForViewingAccount:(ACAccount *)arg1;
- (Class)viewControllerClassForCreatingAccountWithType:(NSString *)arg1;
- (Class)viewControllerClassForViewingAccount:(ACAccount *)arg1;
- (NSArray *)supportedAccountTypeIdentifiers;

@optional
- (_Bool)setDelegate:(id)arg1 forSignInController:(id)arg2;
- (Class)controllerClassForCreatingAccountWithType:(NSString *)arg1;
@end

