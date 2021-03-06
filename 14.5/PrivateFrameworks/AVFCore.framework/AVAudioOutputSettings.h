//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCore/AVOutputSettings.h>

@class NSDictionary;

@interface AVAudioOutputSettings : AVOutputSettings
{
}

+ (id)audioConverterPropertiesForAudioSettingsDictionary:(id)arg1;
+ (id)defaultAudioOutputSettings;
+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
+ (id)audioOutputSettingsWithTrustedAudioSettingsDictionary:(id)arg1;
+ (id)audioOutputSettingsWithAudioSettingsDictionary:(id)arg1;
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2 exceptionReason:(id *)arg3;
+ (id)registeredOutputSettingsClasses;
- (_Bool)validateUsingOutputSettingsValidator:(id)arg1 reason:(id *)arg2;
@property(readonly, nonatomic) NSDictionary *audioSettingsDictionary;
- (id)compatibleMediaTypes;
- (id)initWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;

@end

