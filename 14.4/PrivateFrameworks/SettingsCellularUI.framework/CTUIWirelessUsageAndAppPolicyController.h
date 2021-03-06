//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <SettingsCellularUI/CoreTelephonyClientSubscriberDelegate-Protocol.h>

@class CoreTelephonyClient, NSString, PSSpecifier, PSUIAppDataUsageGroup;

@interface CTUIWirelessUsageAndAppPolicyController : PSListController <CoreTelephonyClientSubscriberDelegate>
{
    _Bool _shouldCalculateUsage;
    PSSpecifier *_groupSpecifier;
    PSUIAppDataUsageGroup *_appDataUsageGroup;
    CoreTelephonyClient *_coreTelephonyClient;
}

- (void).cxx_destruct;
@property _Bool shouldCalculateUsage; // @synthesize shouldCalculateUsage=_shouldCalculateUsage;
@property(retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
@property(retain, nonatomic) PSUIAppDataUsageGroup *appDataUsageGroup; // @synthesize appDataUsageGroup=_appDataUsageGroup;
@property(retain, nonatomic) PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
- (id)selectSpecifier:(id)arg1;
- (_Bool)shouldReloadSpecifiersOnResume;
- (void)managedConfigurationProfileListDidChange;
- (void)managedConfigurationSettingsDidChange;
- (void)_handleWirelessDataUsageChangedNotification:(id)arg1;
- (void)_handleCellularPlanChangedNotification:(id)arg1;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (void)_handleNewCarrierNotification:(id)arg1;
- (id)specifiers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

