//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, PKApplePayTrustSignatureRequest;

@interface PKApplePayTrustSignature : NSObject <NSSecureCoding>
{
    PKApplePayTrustSignatureRequest *_signatureRequest;
    NSData *_signatureData;
    NSData *_paymentData;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *paymentData; // @synthesize paymentData=_paymentData;
@property(readonly, copy, nonatomic) NSData *signatureData; // @synthesize signatureData=_signatureData;
@property(readonly, nonatomic) PKApplePayTrustSignatureRequest *signatureRequest; // @synthesize signatureRequest=_signatureRequest;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSignatureRequest:(id)arg1 signature:(id)arg2;

@end

