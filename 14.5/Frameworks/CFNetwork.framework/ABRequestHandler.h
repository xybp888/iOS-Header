//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/AuthBrokerQuery-Protocol.h>

@interface ABRequestHandler : NSObject <AuthBrokerQuery>
{
    struct AuthBrokerAuthenticator *authenticator;
}

- (void)fetchProxyCredential:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)init;

@end

