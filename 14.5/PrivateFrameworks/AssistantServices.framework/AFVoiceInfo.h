//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class AFOutputVoiceColorDescriptor, NSNumber, NSString;

@interface AFVoiceInfo : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _isCustom;
    _Bool _wasInitalizedFromDictionaryRepresentation;
    NSString *_languageCode;
    long long _footprint;
    NSString *_name;
    NSNumber *_contentVersion;
    NSString *_masteredVersion;
    long long _gender;
    AFOutputVoiceColorDescriptor *_colorDescriptor;
}

+ (_Bool)supportsSecureCoding;
+ (long long)defaultGenderForOutputVoiceLanguageCode:(id)arg1;
+ (id)outputVoiceIdentifierForLanguageCode:(id)arg1 voiceName:(id)arg2;
+ (id)voiceInfoForLanguageCode:(id)arg1;
+ (id)allVoicesForSiriSessionLanguage:(id)arg1;
+ (long long)genderForVSSpeechGender:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) AFOutputVoiceColorDescriptor *colorDescriptor; // @synthesize colorDescriptor=_colorDescriptor;
@property(readonly, nonatomic) _Bool wasInitalizedFromDictionaryRepresentation; // @synthesize wasInitalizedFromDictionaryRepresentation=_wasInitalizedFromDictionaryRepresentation;
@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(readonly, nonatomic) NSString *masteredVersion; // @synthesize masteredVersion=_masteredVersion;
@property(readonly, nonatomic) NSNumber *contentVersion; // @synthesize contentVersion=_contentVersion;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long footprint; // @synthesize footprint=_footprint;
@property(nonatomic) _Bool isCustom; // @synthesize isCustom=_isCustom;
@property(readonly, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
- (id)footprintString;
- (id)genderString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isLanguageAndGenderEqual:(id)arg1;
- (id)initWithLanguageCode:(id)arg1;
- (id)initWithLanguageCode:(id)arg1 gender:(long long)arg2 footprint:(long long)arg3 isCustom:(_Bool)arg4;
- (id)initWithLanguageCode:(id)arg1 gender:(long long)arg2 isCustom:(_Bool)arg3;
- (id)initWithLanguageCode:(id)arg1 gender:(long long)arg2 isCustom:(_Bool)arg3 name:(id)arg4 footprint:(long long)arg5 contentVersion:(id)arg6 masteredVersion:(id)arg7;
- (_Bool)isValidForSiriSessionLanguage:(id)arg1;
- (_Bool)isMatchForVoiceAsset:(id)arg1;
- (id)VSVoiceAsset;
- (long long)VSSpeechType;
- (long long)VSSpeechFootprint;
- (long long)VSSpeechGender;

@end

