//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAML/SAMLBaseElement.h>

@class NSData, NSString, SAMLKeyRetrievalMethod, SAMLPGPData, SAMLSignatureKeyValue, SAMLX509Data;

__attribute__((visibility("hidden")))
@interface SAMLKeyInfo : SAMLBaseElement
{
}

+ (id)createElement:(id *)arg1;
@property(readonly, nonatomic) NSString *mgmtData;
@property(readonly, nonatomic) NSData *spkiSexpData;
@property(readonly, nonatomic) SAMLPGPData *pgpData;
@property(readonly, nonatomic) SAMLX509Data *x509Data;
@property(readonly, nonatomic) SAMLKeyRetrievalMethod *retrievalMethod;
@property(readonly, nonatomic) SAMLSignatureKeyValue *keyValue;
@property(readonly, nonatomic) NSString *keyName;
@property(readonly, nonatomic) NSString *identifier;

@end

