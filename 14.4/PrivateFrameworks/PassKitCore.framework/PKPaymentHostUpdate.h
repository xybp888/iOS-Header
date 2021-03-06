//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class PKContact, PKPaymentMethod, PKShippingMethod;

@interface PKPaymentHostUpdate : NSObject <NSSecureCoding>
{
    PKContact *_shippingContact;
    PKShippingMethod *_shippingMethod;
    PKPaymentMethod *_paymentMethod;
}

+ (_Bool)supportsSecureCoding;
+ (id)paymentUpdateWithProtobuf:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) PKPaymentMethod *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
@property(readonly, nonatomic) PKShippingMethod *shippingMethod; // @synthesize shippingMethod=_shippingMethod;
@property(readonly, nonatomic) PKContact *shippingContact; // @synthesize shippingContact=_shippingContact;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 shippingMethod:(id)arg2 paymentMethod:(id)arg3;
- (id)protobuf;

@end

