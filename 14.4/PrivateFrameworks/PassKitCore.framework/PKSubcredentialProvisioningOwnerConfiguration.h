//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKSubcredentialProvisioningLocalDeviceConfiguration.h>

@class NSString, PKAppletSubcredentialPairingSession;

@interface PKSubcredentialProvisioningOwnerConfiguration : PKSubcredentialProvisioningLocalDeviceConfiguration
{
    PKAppletSubcredentialPairingSession *_session;
    NSString *_pairingPassword;
    NSString *_keyName;
    NSString *_issuerName;
    NSString *_appIdentifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(readonly, nonatomic) NSString *issuerName; // @synthesize issuerName=_issuerName;
@property(readonly, nonatomic) NSString *keyName; // @synthesize keyName=_keyName;
@property(readonly, nonatomic) NSString *pairingPassword; // @synthesize pairingPassword=_pairingPassword;
@property(readonly, nonatomic) __weak PKAppletSubcredentialPairingSession *session; // @synthesize session=_session;
- (id)description;
- (long long)startingState;
- (id)transitionTable;
- (id)initWithSession:(id)arg1 pairingPassword:(id)arg2 keyName:(id)arg3 issuerName:(id)arg4 webService:(id)arg5 registrationMetadata:(id)arg6;

@end

