//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INCodableAttributeMetadata.h>

#import <Intents/INCodableAttributeDefaultValueProviding-Protocol.h>

@class NSNumber, NSString;

@interface INCodableNumberAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding>
{
    long long _type;
    NSNumber *_defaultValue;
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(retain, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
@property(retain, nonatomic) NSNumber *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_localizedDialogTokensWithLocalizer:(id)arg1;
- (id)defaultValueForIntentDefaultValueProvider;
@property(readonly, nonatomic) _Bool supportsNegativeNumbers;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)__INCodableDescriptionMaximumValueKey;
- (id)__INIntentResponseCodableDescriptionMaximumValueKey;
- (id)__INTypeCodableDescriptionMaximumValueKey;
- (id)__INCodableDescriptionMinimumValueKey;
- (id)__INIntentResponseCodableDescriptionMinimumValueKey;
- (id)__INTypeCodableDescriptionMinimumValueKey;
- (id)__INCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INIntentResponseCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INTypeCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INCodableDescriptionTypeKey;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)__INTypeCodableDescriptionTypeKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

