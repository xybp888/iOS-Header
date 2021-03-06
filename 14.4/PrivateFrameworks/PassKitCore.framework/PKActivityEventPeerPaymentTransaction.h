//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKActivityEventTransaction.h>

@class PKPaymentTransaction;

@interface PKActivityEventPeerPaymentTransaction : PKActivityEventTransaction
{
    PKPaymentTransaction *_relatedTopUpFundingSourceWithdrawlTransaction;
    PKPaymentTransaction *_relatedTopUpPeerPaymentAccountDepositTransaction;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PKPaymentTransaction *relatedTopUpPeerPaymentAccountDepositTransaction; // @synthesize relatedTopUpPeerPaymentAccountDepositTransaction=_relatedTopUpPeerPaymentAccountDepositTransaction;
@property(readonly, nonatomic) PKPaymentTransaction *relatedTopUpFundingSourceWithdrawlTransaction; // @synthesize relatedTopUpFundingSourceWithdrawlTransaction=_relatedTopUpFundingSourceWithdrawlTransaction;
- (id)eventType;
- (_Bool)isEqualToActivityEvent:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTransaction:(id)arg1 relatedTopUpWithdrawlTransaction:(id)arg2 relatedTopUpDepositTransaction:(id)arg3 unread:(_Bool)arg4;

@end

