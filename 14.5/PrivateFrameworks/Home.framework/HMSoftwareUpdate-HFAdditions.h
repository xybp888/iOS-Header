//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMSoftwareUpdate.h>

#import <Home/HFHomeKitObject-Protocol.h>
#import <Home/HFStateDumpBuildable-Protocol.h>

@class NSString, NSUUID;

@interface HMSoftwareUpdate (HFAdditions) <HFStateDumpBuildable, HFHomeKitObject>
+ (id)hf_mostUpToDateSoftwareUpdateReleaseNotesFromAccessories:(id)arg1;
+ (id)hf_mostUpToDateSoftwareUpdateFromAccessories:(id)arg1;
+ (_Bool)hf_shouldShowLearnMoreForAccessories:(id)arg1;
+ (CDUnknownBlockType)hf_sortComparator;
+ (id)hf_stringFromUpdateState:(long long)arg1;
- (_Bool)hf_shouldShowSoftwareUpdateInfo;
- (_Bool)hf_possessesNecessaryDocumentation;
- (_Bool)hf_isInstalling;
- (_Bool)hf_isDownloading;
- (_Bool)hf_isInProgress;
- (_Bool)hf_isReadyToInstall;
- (id)hf_stringFromState;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end

