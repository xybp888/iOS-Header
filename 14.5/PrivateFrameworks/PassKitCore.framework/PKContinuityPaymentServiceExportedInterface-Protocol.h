//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, PKPayment, PKPaymentAuthorizationResult, PKPaymentClientUpdate, PKPaymentHostUpdate, PKRemotePaymentRequest;

@protocol PKContinuityPaymentServiceExportedInterface
- (void)didReceiveCancellationForRemotePaymentRequest:(PKRemotePaymentRequest *)arg1;
- (void)didReceivePaymentResult:(PKPaymentAuthorizationResult *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2;
- (void)didReceivePayment:(PKPayment *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2;
- (void)didReceivePaymentClientUpdate:(PKPaymentClientUpdate *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2;
- (void)didReceivePaymentHostUpdate:(PKPaymentHostUpdate *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2;
- (void)didReceiveUpdatedPaymentDevices:(NSArray *)arg1;
@end

