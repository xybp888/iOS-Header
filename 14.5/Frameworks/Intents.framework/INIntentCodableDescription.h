//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INRootCodableDescription.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCodableAttribute, NSArray, NSString;

@interface INIntentCodableDescription : INRootCodableDescription <NSSecureCoding, NSCopying>
{
    _Bool _userConfirmationRequired;
    _Bool _deprecated;
    _Bool _configurable;
    _Bool _eligibleForSuggestions;
    _Bool _eligibleForWidgets;
    NSString *_inputAttributeName;
    NSString *_keyAttributeName;
    NSString *_title;
    NSString *_titleLocID;
    NSString *_descriptiveText;
    NSString *_descriptiveTextLocID;
    NSString *_defaultImageName;
    long long _intentCategory;
    NSString *_verb;
    NSArray *_phrases;
    NSArray *_entityVerbs;
}

+ (_Bool)supportsSecureCoding;
+ (id)__Key;
+ (id)__NameKey;
+ (id)__CategoryKey;
+ (id)__ClassNameKey;
+ (id)__ClassPrefixKey;
+ (id)__ConfigurableKey;
+ (id)__DefaultImageNameKey;
+ (id)__DeprecatedKey;
+ (id)__DescriptionKey;
+ (id)__DescriptionIDKey;
+ (id)__EligibleForWidgetsKey;
+ (id)__EntityKey;
+ (id)__IneligibleForSuggestionsKey;
+ (id)__InputKey;
+ (id)__KeyParameterKey;
+ (id)__ParameterKey;
+ (id)__ParametersKey;
+ (id)__PhrasesKey;
+ (id)__SummaryKey;
+ (id)__TitleKey;
+ (id)__TitleIDKey;
+ (id)__UserConfirmationRequiredKey;
+ (id)__VerbKey;
+ (id)__VerbAssociationsKey;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *entityVerbs; // @synthesize entityVerbs=_entityVerbs;
@property(retain, nonatomic) NSArray *phrases; // @synthesize phrases=_phrases;
@property(nonatomic, getter=isEligibleForWidgets) _Bool eligibleForWidgets; // @synthesize eligibleForWidgets=_eligibleForWidgets;
@property(nonatomic, getter=isEligibleForSuggestions) _Bool eligibleForSuggestions; // @synthesize eligibleForSuggestions=_eligibleForSuggestions;
@property(nonatomic, getter=isConfigurable) _Bool configurable; // @synthesize configurable=_configurable;
@property(nonatomic, getter=isDeprecated) _Bool deprecated; // @synthesize deprecated=_deprecated;
@property(nonatomic) _Bool userConfirmationRequired; // @synthesize userConfirmationRequired=_userConfirmationRequired;
@property(copy, nonatomic) NSString *verb; // @synthesize verb=_verb;
@property(nonatomic) long long intentCategory; // @synthesize intentCategory=_intentCategory;
@property(copy, nonatomic) NSString *defaultImageName; // @synthesize defaultImageName=_defaultImageName;
@property(copy, nonatomic) NSString *descriptiveTextLocID; // @synthesize descriptiveTextLocID=_descriptiveTextLocID;
@property(copy, nonatomic) NSString *descriptiveText; // @synthesize descriptiveText=_descriptiveText;
@property(copy, nonatomic) NSString *titleLocID; // @synthesize titleLocID=_titleLocID;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic, setter=_setKeyAttributeName:) NSString *_keyAttributeName; // @synthesize _keyAttributeName;
@property(copy, nonatomic, setter=_setInputAttributeName:) NSString *_inputAttributeName; // @synthesize _inputAttributeName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)arg1 intentResponseCodableDescription:(id)arg2;
- (void)_establishReferencedCodableDescriptionsUsingTypes:(id)arg1 intentResponseCodableDescription:(id)arg2;
- (void)_updateWithIntentCodableDescription:(id)arg1;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)_attributesKey;
- (id)_attributeKey;
- (id)_ignoredAttributeTags;
- (id)localizedDescriptiveTextWithLocalizer:(id)arg1;
@property(readonly, copy, nonatomic) NSString *localizedDescriptiveText;
- (id)localizedTitleWithLocalizer:(id)arg1;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) INCodableAttribute *keyAttribute;
@property(readonly, nonatomic) INCodableAttribute *inputAttribute;
- (id)resolvableParameterCombinationsWithParameterCombinations:(id)arg1;
- (id)attributes;

@end

