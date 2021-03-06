//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCPaymentTransactionManager-Protocol.h>

@class NSError, NSString;
@protocol FCPaymentTransactionManagerDelegate;

@interface FCMockPaymentTransactionManager : NSObject <FCPaymentTransactionManager>
{
    id <FCPaymentTransactionManagerDelegate> delegate;
    NSString *_productID;
    long long _transactionState;
    NSError *_transactionError;
    unsigned long long _transactionExpectation;
}

+ (id)mockPaymentTransactionWithFailForProductID:(id)arg1 transactionState:(long long)arg2 transactionError:(id)arg3;
+ (id)mockPaymentTransactionWithSuccessForProductID:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long transactionExpectation; // @synthesize transactionExpectation=_transactionExpectation;
@property(copy, nonatomic) NSError *transactionError; // @synthesize transactionError=_transactionError;
@property(nonatomic) long long transactionState; // @synthesize transactionState=_transactionState;
@property(copy, nonatomic) NSString *productID; // @synthesize productID=_productID;
@property(nonatomic) __weak id <FCPaymentTransactionManagerDelegate> delegate; // @synthesize delegate;
- (void)startPurchaseWithTagID:(id)arg1 productID:(id)arg2 purchaseID:(id)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5 price:(id)arg6 webAccessOptIn:(_Bool)arg7 payment:(id)arg8;
- (void)registerOngoingPurchaseTransactionsWithEntry:(id)arg1;
- (_Bool)canMakePayments;

@end

