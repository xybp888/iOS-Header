//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CDPAuthenticationHelper : NSObject
{
}

+ (id)_contextForPrimaryAccount;
+ (id)_authContextForContext:(id)arg1;
+ (id)_contextForPrimaryAccountSilentAuth;
+ (void)_authWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)silentAuthenticationForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)silentAuthenticationForPrimaryAccountWithCompletion:(CDUnknownBlockType)arg1;

@end

