//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthenticationServices/NSObject-Protocol.h>

@class ASPasswordCredential, NSError, _ASCredentialProviderExtensionHostContext;

@protocol _ASCredentialProviderExtensionHostContextDelegate <NSObject>

@optional
- (void)prepareToCancelRequestWithHostContext:(_ASCredentialProviderExtensionHostContext *)arg1 error:(NSError *)arg2 completion:(void (^)(void))arg3;
- (void)prepareToCompleteExtensionConfigurationRequestWithHost:(_ASCredentialProviderExtensionHostContext *)arg1 completion:(void (^)(void))arg2;
- (void)prepareToCompleteRequestWithHostContext:(_ASCredentialProviderExtensionHostContext *)arg1 credential:(ASPasswordCredential *)arg2 completion:(void (^)(void))arg3;
@end

