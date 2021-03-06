//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/WFOAuth2AuthorizationSession-Protocol.h>

@class ASWebAuthenticationSession, NSString, NSURL, WFOAuth2SessionManager, WFWebAuthenticationSessionPresentationContext;

@interface WFOAuth2WebAuthorizationSession : NSObject <WFOAuth2AuthorizationSession>
{
    NSURL *_authorizationURL;
    NSURL *_redirectURI;
    WFOAuth2SessionManager *_sessionManager;
    NSString *_responseType;
    NSString *_state;
    CDUnknownBlockType _completionHandler;
    ASWebAuthenticationSession *_authenticationSession;
    WFWebAuthenticationSessionPresentationContext *_presentationContext;
    NSString *_responseKey;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *responseKey; // @synthesize responseKey=_responseKey;
@property(retain, nonatomic) WFWebAuthenticationSessionPresentationContext *presentationContext; // @synthesize presentationContext=_presentationContext;
@property(retain, nonatomic) ASWebAuthenticationSession *authenticationSession; // @synthesize authenticationSession=_authenticationSession;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSString *state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *responseType; // @synthesize responseType=_responseType;
@property(readonly, nonatomic) WFOAuth2SessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(readonly, copy, nonatomic) NSURL *redirectURI; // @synthesize redirectURI=_redirectURI;
@property(readonly, copy, nonatomic) NSURL *authorizationURL; // @synthesize authorizationURL=_authorizationURL;
- (_Bool)resumeSessionWithURL:(id)arg1;
- (_Bool)resumeSessionWithResponseObject:(id)arg1;
- (id)authenticationSessionWithUserInterface:(id)arg1;
- (id)initWithSessionManager:(id)arg1 authorizationURL:(id)arg2 responseType:(id)arg3 redirectURI:(id)arg4 specifyRedirectURI:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

