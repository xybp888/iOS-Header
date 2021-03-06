//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseMainController.h"

@class BYMigrationSourceController, NSString, NSUUID, RPFileTransferSession, SFDeviceSetupSessioniOS, SVSCommonNavController, UIStoryboard, UIViewController, VPScannerViewController, iOSSetupAuthViewController, iOSSetupBackupSyncViewController, iOSSetupDoneViewController, iOSSetupFinishViewController, iOSSetupStartViewController;

@interface iOSSetupMainController : SVSBaseMainController
{
    _Bool _dismissed;
    RPFileTransferSession *_fileTransferSession;
    _Bool _homePressed;
    _Bool _loggedUsageStart;
    _Bool _loggedUsageDone;
    BYMigrationSourceController *_migrationController;
    UIStoryboard *_storyboard;
    iOSSetupAuthViewController *_vcAuth;
    iOSSetupBackupSyncViewController *_vcBackupSync;
    iOSSetupDoneViewController *_vcDone;
    iOSSetupFinishViewController *_vcFinish;
    SVSCommonNavController *_vcNav;
    iOSSetupStartViewController *_vcStart;
    VPScannerViewController *_vcVisualAuth;
    UIViewController *_vcVisualAuthParent;
    unsigned long long _visualAuthNextTicks;
    _Bool _visualAuthTryingCode;
    unsigned long long _viewAppearedTicks;
    _Bool _blockHardwareButtons;
    unsigned char _otherDeviceClassCode;
    unsigned char _otherDeviceModelCode;
    unsigned char _otherDeviceColorCode;
    unsigned int _badPINCount;
    int _testMode;
    NSUUID *_deviceIdentifier;
    NSString *_myAppleID;
    NSString *_otherDeviceClassName;
    SFDeviceSetupSessioniOS *_setupSession;
}

+ (_Bool)_isSecureForRemoteViewService;
- (void).cxx_destruct;
@property(nonatomic) int testMode; // @synthesize testMode=_testMode;
@property(retain, nonatomic) SFDeviceSetupSessioniOS *setupSession; // @synthesize setupSession=_setupSession;
@property(copy, nonatomic) NSString *otherDeviceClassName; // @synthesize otherDeviceClassName=_otherDeviceClassName;
@property(nonatomic) unsigned char otherDeviceColorCode; // @synthesize otherDeviceColorCode=_otherDeviceColorCode;
@property(nonatomic) unsigned char otherDeviceModelCode; // @synthesize otherDeviceModelCode=_otherDeviceModelCode;
@property(nonatomic) unsigned char otherDeviceClassCode; // @synthesize otherDeviceClassCode=_otherDeviceClassCode;
@property(copy, nonatomic) NSString *myAppleID; // @synthesize myAppleID=_myAppleID;
@property(copy, nonatomic) NSUUID *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(nonatomic) _Bool blockHardwareButtons; // @synthesize blockHardwareButtons=_blockHardwareButtons;
@property(nonatomic) unsigned int badPINCount; // @synthesize badPINCount=_badPINCount;
- (void)showWiFi;
- (void)showFinishUI;
- (void)showDoneUI:(id)arg1;
- (void)showBackupSyncUI:(unsigned int)arg1 info:(id)arg2;
- (void)showStartUI;
- (void)_tryPIN:(id)arg1;
- (void)_handleVisualAuthScannedCode:(id)arg1;
- (void)_handleVisualAuthEvent:(long long)arg1;
- (void)showAuthUIWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2 animated:(_Bool)arg3;
- (void)_sessionHandleProgress:(unsigned int)arg1 info:(id)arg2;
- (void)_sessionStart:(id)arg1;
- (void)logUsageDone:(int)arg1;
- (void)logUsageStart:(int)arg1;
- (void)_handleMigrateStartUI;
- (void)_handleMigrateStartDemo;
- (void)_handleMigrateStart;
- (void)_handleHomeButtonPressed;
- (void)handleButtonActions:(id)arg1;
- (void)dismiss:(int)arg1 animated:(_Bool)arg2;
- (void)dismiss:(int)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_willAppearInRemoteViewController;
- (_Bool)_canShowWhileLocked;

@end

