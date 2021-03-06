//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthenticationServicesCore/NSObject-Protocol.h>

@class LAContext, NSError, NSString;
@protocol ASCCredentialProtocol, ASCLoginChoiceProtocol;

@protocol ASCAuthorizationPresenterHostProtocol <NSObject>
- (void)initializeClientToViewServiceConnection;
- (void)validateUserEnteredPIN:(NSString *)arg1 completionHandler:(void (^)(id <ASCCredentialProtocol>, NSError *))arg2;
- (void)authorizationRequestFinishedWithCredential:(id <ASCCredentialProtocol>)arg1 error:(NSError *)arg2 completionHandler:(void (^)(void))arg3;
- (void)authorizationRequestInitiatedWithLoginChoice:(id <ASCLoginChoiceProtocol>)arg1 authenticatedContext:(LAContext *)arg2 completionHandler:(void (^)(id <ASCCredentialProtocol>, NSError *))arg3;
@end

