//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AXSSInterDeviceSecurityHelper : NSObject
{
    struct __SecIdentity *_cachedAppleIDIdentity;
    NSArray *_cachedCertificateChain;
    NSArray *_cachedSecurityIdentity;
}

- (void).cxx_destruct;
- (void)verifyCertificate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)securityIdentity;
- (id)_certificateChain;
- (struct __SecIdentity *)_appleIDIdentity;
- (void)_appleIDsDidChange;
- (void)dealloc;
- (id)init;

@end

