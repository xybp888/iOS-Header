//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFAuthenticationPolicy-Protocol.h>

@class NSString, SBSoftwareUpdatePasscodePolicyManager, SBiCloudPasscodeRequirementLockoutController, SecureBackup;

@interface SBDefaultAuthenticationPolicy : NSObject <SBFAuthenticationPolicy>
{
    SBiCloudPasscodeRequirementLockoutController *_iCloudPasscodeRequirementLockoutController;
    SBSoftwareUpdatePasscodePolicyManager *_softwareUpdatePasscodePolicyManager;
    SecureBackup *_secureBackupHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic, getter=_secureBackupHelper, setter=_setSecureBackupHelper:) SecureBackup *secureBackupHelper; // @synthesize secureBackupHelper=_secureBackupHelper;
@property(retain, nonatomic) SBSoftwareUpdatePasscodePolicyManager *softwareUpdatePasscodePolicyManager; // @synthesize softwareUpdatePasscodePolicyManager=_softwareUpdatePasscodePolicyManager;
@property(retain, nonatomic) SBiCloudPasscodeRequirementLockoutController *iCloudPasscodeRequirementLockoutController; // @synthesize iCloudPasscodeRequirementLockoutController=_iCloudPasscodeRequirementLockoutController;
- (void)passcodeAuthenticationFailedWithError:(id)arg1;
- (void)clearPasscodeCache;
- (void)cachePasscode:(id)arg1;
- (void)wipeDeviceWithReason:(id)arg1;
- (_Bool)usesSecureMode;
- (_Bool)shouldClearBlockStateOnSync;
- (_Bool)allowAuthenticationRevocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

