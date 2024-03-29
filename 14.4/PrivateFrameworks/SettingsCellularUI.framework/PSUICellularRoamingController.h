//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface PSUICellularRoamingController : PSListController
{
    PSSpecifier *_voiceRoamingSpecifier;
    PSSpecifier *_dataRoamingSpecifier;
    PSSpecifier *_cdmaRoamingSpecifier;
}

- (void).cxx_destruct;
- (void)roamingOptionsDidChange;
- (id)getCDMARoamingStatus:(id)arg1;
- (void)setCDMARoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setEUInternetEnabled:(id)arg1 specifier:(id)arg2;
- (void)setDataRoamingEnabledForService:(id)arg1 enabled:(id)arg2 specifier:(id)arg3;
- (void)setDataRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (id)getEUInternetStatus:(id)arg1;
- (id)getDataRoamingStatusForService:(id)arg1 specifier:(id)arg2;
- (id)getDataRoamingStatus:(id)arg1;
- (id)getVoiceRoamingStatus:(id)arg1;
- (void)setVoiceRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)reloadRoamingStatus;
- (void)cellularPlanChangedNotification:(id)arg1;
- (void)newCarrierNotification;
- (id)specifiers;
- (id)_voiceRoamingFooterTextWithVoiceRoamingOn:(_Bool)arg1;
- (id)cdmaRoamingSpecifiers;
- (id)dataRoamingSpecifiers;
- (void)dealloc;
- (id)init;

@end

