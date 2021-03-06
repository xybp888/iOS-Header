//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface PKAppletSubcredentialEncryptedRequest : NSObject <NSSecureCoding>
{
    NSString *_encryptionScheme;
    NSString *_ephemeralPublicKey;
    NSString *_publicKeyHash;
    NSData *_data;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSString *publicKeyHash; // @synthesize publicKeyHash=_publicKeyHash;
@property(readonly, nonatomic) NSString *ephemeralPublicKey; // @synthesize ephemeralPublicKey=_ephemeralPublicKey;
@property(readonly, nonatomic) NSString *encryptionScheme; // @synthesize encryptionScheme=_encryptionScheme;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithEncryptionScheme:(id)arg1 ephemeralPublicKey:(id)arg2 publicKeyHash:(id)arg3 data:(id)arg4;
- (id)initWithRequest:(id)arg1;

@end

