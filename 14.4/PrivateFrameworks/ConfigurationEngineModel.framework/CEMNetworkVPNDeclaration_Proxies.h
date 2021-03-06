//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSNumber, NSString;

@interface CEMNetworkVPNDeclaration_Proxies : CEMPayloadBase
{
    NSNumber *_payloadHTTPEnable;
    NSNumber *_payloadHTTPPort;
    NSString *_payloadHTTPProxy;
    NSString *_payloadHTTPProxyPassword;
    NSString *_payloadHTTPProxyUsername;
    NSNumber *_payloadHTTPSEnable;
    NSNumber *_payloadHTTPSPort;
    NSString *_payloadHTTPSProxy;
    NSNumber *_payloadProxyAutoConfigEnable;
    NSNumber *_payloadProxyAutoDiscoveryEnable;
    NSString *_payloadProxyAutoConfigURLString;
    NSArray *_payloadSupplementalMatchDomains;
}

+ (id)buildRequiredOnly;
+ (id)buildWithHTTPEnable:(id)arg1 withHTTPPort:(id)arg2 withHTTPProxy:(id)arg3 withHTTPProxyPassword:(id)arg4 withHTTPProxyUsername:(id)arg5 withHTTPSEnable:(id)arg6 withHTTPSPort:(id)arg7 withHTTPSProxy:(id)arg8 withProxyAutoConfigEnable:(id)arg9 withProxyAutoDiscoveryEnable:(id)arg10 withProxyAutoConfigURLString:(id)arg11 withSupplementalMatchDomains:(id)arg12;
+ (id)allowedPayloadKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *payloadSupplementalMatchDomains; // @synthesize payloadSupplementalMatchDomains=_payloadSupplementalMatchDomains;
@property(copy, nonatomic) NSString *payloadProxyAutoConfigURLString; // @synthesize payloadProxyAutoConfigURLString=_payloadProxyAutoConfigURLString;
@property(copy, nonatomic) NSNumber *payloadProxyAutoDiscoveryEnable; // @synthesize payloadProxyAutoDiscoveryEnable=_payloadProxyAutoDiscoveryEnable;
@property(copy, nonatomic) NSNumber *payloadProxyAutoConfigEnable; // @synthesize payloadProxyAutoConfigEnable=_payloadProxyAutoConfigEnable;
@property(copy, nonatomic) NSString *payloadHTTPSProxy; // @synthesize payloadHTTPSProxy=_payloadHTTPSProxy;
@property(copy, nonatomic) NSNumber *payloadHTTPSPort; // @synthesize payloadHTTPSPort=_payloadHTTPSPort;
@property(copy, nonatomic) NSNumber *payloadHTTPSEnable; // @synthesize payloadHTTPSEnable=_payloadHTTPSEnable;
@property(copy, nonatomic) NSString *payloadHTTPProxyUsername; // @synthesize payloadHTTPProxyUsername=_payloadHTTPProxyUsername;
@property(copy, nonatomic) NSString *payloadHTTPProxyPassword; // @synthesize payloadHTTPProxyPassword=_payloadHTTPProxyPassword;
@property(copy, nonatomic) NSString *payloadHTTPProxy; // @synthesize payloadHTTPProxy=_payloadHTTPProxy;
@property(copy, nonatomic) NSNumber *payloadHTTPPort; // @synthesize payloadHTTPPort=_payloadHTTPPort;
@property(copy, nonatomic) NSNumber *payloadHTTPEnable; // @synthesize payloadHTTPEnable=_payloadHTTPEnable;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

