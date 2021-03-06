//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Social/SLWebAuthController.h>

@class ACAccount, ACAccountStore, ASWebAuthenticationSession;

@interface SLGoogleAuthController : SLWebAuthController
{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    CDUnknownBlockType _presentationBlock;
    ASWebAuthenticationSession *_authenticationSession;
}

+ (void)_presentInternetOfflineError;
+ (void)_presentUsernameMismatchAlert;
+ (id)_identityFromUsername:(id)arg1 displayName:(id)arg2 token:(id)arg3 refreshToken:(id)arg4;
+ (id)googleAuthControllerWithYouTubeUsername:(id)arg1 presentationBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)googleAuthControllerWithAccount:(id)arg1 accountStore:(id)arg2 presentationBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)googleAuthControllerWithPresentationBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)_completeWithIdentity:(id)arg1 error:(id)arg2;
- (void)_dismissAndCompleteWithIdentity:(id)arg1 error:(id)arg2;
- (void)_didRedirectToURL:(id)arg1 codeVerifier:(id)arg2;
- (id)_redirectPathForURI:(id)arg1;
- (void)dealloc;
- (void)cancelAuthorization;
- (id)_initWithAccount:(id)arg1 accountStore:(id)arg2 username:(id)arg3 youTube:(_Bool)arg4 presentationBlock:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (id)initWithAccount:(id)arg1 accountStore:(id)arg2 presentationBlock:(CDUnknownBlockType)arg3;
- (id)initWithAccountDescription:(id)arg1 presentationBlock:(CDUnknownBlockType)arg2;
- (id)_webClient;

@end

