//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentRecipient;

@interface PKPeerPaymentRecipientResponse : PKPeerPaymentWebServiceResponse
{
    PKPeerPaymentRecipient *_recipient;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PKPeerPaymentRecipient *recipient; // @synthesize recipient=_recipient;
- (id)initWithData:(id)arg1;

@end

