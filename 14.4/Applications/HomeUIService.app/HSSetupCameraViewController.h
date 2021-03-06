//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HSSetupPairingViewController.h"

@class HSAccessoryBrowsingManager, HSEntitlementContext;
@protocol HSSetupStepDelegate;

@interface HSSetupCameraViewController : HSSetupPairingViewController
{
    _Bool _codeScanningRequired;
    id <HSSetupStepDelegate> _delegate;
    HSAccessoryBrowsingManager *_accessoryBrowsingManager;
    HSEntitlementContext *_entitlementContext;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool codeScanningRequired; // @synthesize codeScanningRequired=_codeScanningRequired;
@property(readonly, nonatomic) HSEntitlementContext *entitlementContext; // @synthesize entitlementContext=_entitlementContext;
@property(readonly, nonatomic) HSAccessoryBrowsingManager *accessoryBrowsingManager; // @synthesize accessoryBrowsingManager=_accessoryBrowsingManager;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)didUpdatePairingController:(id)arg1;
- (long long)setupState;
- (id)initWithAccessoryBrowsingManager:(id)arg1 entitlementContext:(id)arg2 mode:(unsigned long long)arg3 codeScanningRequired:(_Bool)arg4;

@end

