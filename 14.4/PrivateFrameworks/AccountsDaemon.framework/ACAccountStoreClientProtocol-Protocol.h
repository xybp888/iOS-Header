//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccountsDaemon/NSObject-Protocol.h>

@class ACAccount, NSString;

@protocol ACAccountStoreClientProtocol <NSObject>
- (void)accountDidChange:(ACAccount *)arg1 withChangeType:(int)arg2;
- (void)accountCredentialsDidChangeForAccountWithIdentifier:(NSString *)arg1;
@end

