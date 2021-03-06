//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageUI/MFMailAccountProxyGenerator-Protocol.h>

@class NSString, _MFMailAccountProxySource;

@interface MFMailAccountProxyGenerator : NSObject <MFMailAccountProxyGenerator>
{
    _MFMailAccountProxySource *_proxySource;
    _Bool _allowsRestrictedAccounts;
}

- (void).cxx_destruct;
- (id)allAccountProxies;
- (id)activeAccountProxiesOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(_Bool)arg2 originatingBundleID:(id)arg3 sourceAccountManagement:(int)arg4;
- (id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(_Bool)arg2;
- (id)defaultMailAccountProxyForDeliveryOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (id)initWithAllowsRestrictedAccounts:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

