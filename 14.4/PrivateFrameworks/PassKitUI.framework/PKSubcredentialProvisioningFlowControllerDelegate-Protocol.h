//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSError, PKPaymentPass;
@protocol PKSubcredentialProvisioningFlowController;

@protocol PKSubcredentialProvisioningFlowControllerDelegate <NSObject>
- (void)userCanceledPairingWithSubcredentialProvisioningFlowController:(id <PKSubcredentialProvisioningFlowController>)arg1;
- (void)subcredentialProvisioningFlowController:(id <PKSubcredentialProvisioningFlowController>)arg1 didFinishWithPass:(PKPaymentPass *)arg2 error:(NSError *)arg3;
@end

