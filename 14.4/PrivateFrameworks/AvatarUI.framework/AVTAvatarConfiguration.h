//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTCacheableResource-Protocol.h>
#import <AvatarUI/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString;

@interface AVTAvatarConfiguration : NSObject <AVTCacheableResource, NSCopying>
{
    NSMutableDictionary *_presetsStorage;
    NSMutableDictionary *_colorPresetsStorage;
}

+ (id)keyForSettingKind:(CDStruct_597dd055)arg1;
+ (id)configurationFromAvatar:(id)arg1 coreModel:(id)arg2;
+ (id)configurationFromAvatar:(id)arg1;
+ (id)configurationColorPresetWithColorPreset:(id)arg1 settingKind:(CDStruct_597dd055)arg2 coreModel:(id)arg3;
+ (id)configurationPresetWithPreset:(id)arg1 settingKind:(CDStruct_597dd055)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *colorPresetsStorage; // @synthesize colorPresetsStorage=_colorPresetsStorage;
@property(readonly, nonatomic) NSMutableDictionary *presetsStorage; // @synthesize presetsStorage=_presetsStorage;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)applyToAvatar:(id)arg1;
- (id)configurationPresetForSettingKind:(CDStruct_597dd055)arg1;
- (id)configurationPresets;
- (id)presetConfigurationPresets;
- (id)colorConfigurationPresets;
- (id)presetForSettingKind:(CDStruct_597dd055)arg1 storage:(id)arg2;
- (id)colorPresetForSettingKind:(CDStruct_597dd055)arg1;
- (id)presetForCategory:(long long)arg1;
- (id)presetsForStorage:(id)arg1;
- (id)colorPresets;
- (id)presets;
- (void)removePresetsForSettingKind:(CDStruct_597dd055)arg1 storage:(id)arg2;
- (void)removeColorPresetsForSettingKind:(CDStruct_597dd055)arg1;
- (void)removePresetsForCategory:(long long)arg1;
- (void)addConfigurationColorPreset:(id)arg1;
- (void)addColorPreset:(id)arg1;
- (void)addConfigurationPreset:(id)arg1;
- (void)addPreset:(id)arg1;
- (id)initWithPresets:(id)arg1 colorPresets:(id)arg2;
- (id)init;
- (_Bool)requiresEncryption;
- (unsigned long long)costForScope:(id)arg1;
- (id)persistentIdentifierForScope:(id)arg1;
- (id)volatileIdentifierForScope:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

