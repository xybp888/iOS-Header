//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMAccountGoogleDeclaration_CommunicationServiceRules, NSString;

@interface CEMAccountGoogleDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadAccountDescription;
    NSString *_payloadAccountName;
    NSString *_payloadEmailAddress;
    CEMAccountGoogleDeclaration_CommunicationServiceRules *_payloadCommunicationServiceRules;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withEmailAddress:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withAccountDescription:(id)arg2 withAccountName:(id)arg3 withEmailAddress:(id)arg4 withCommunicationServiceRules:(id)arg5;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
- (void).cxx_destruct;
@property(copy, nonatomic) CEMAccountGoogleDeclaration_CommunicationServiceRules *payloadCommunicationServiceRules; // @synthesize payloadCommunicationServiceRules=_payloadCommunicationServiceRules;
@property(copy, nonatomic) NSString *payloadEmailAddress; // @synthesize payloadEmailAddress=_payloadEmailAddress;
@property(copy, nonatomic) NSString *payloadAccountName; // @synthesize payloadAccountName=_payloadAccountName;
@property(copy, nonatomic) NSString *payloadAccountDescription; // @synthesize payloadAccountDescription=_payloadAccountDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (_Bool)mustBeSupervised;
- (_Bool)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

