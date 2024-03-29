//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCodableCoding-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCodableAttribute, INCodableDescription, INCodableLocalizationTable, NSString;

@interface INCodableAttributeMetadata : NSObject <NSSecureCoding, INCodableCoding>
{
    NSString *_name;
    NSString *_placeholder;
    NSString *_placeholderID;
    INCodableAttribute *_codableAttribute;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak INCodableAttribute *codableAttribute; // @synthesize codableAttribute=_codableAttribute;
@property(copy, nonatomic) NSString *placeholderID; // @synthesize placeholderID=_placeholderID;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) __weak INCodableDescription *_codableDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_localizedDialogTokensWithLocalizer:(id)arg1;
- (id)localizedPlaceholderWithLocalizer:(id)arg1;
@property(readonly, copy, nonatomic) NSString *localizedPlaceholder;
@property(readonly, copy, nonatomic) INCodableLocalizationTable *_localizationTable;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (id)dictionaryRepresentation;
- (void)updateWithDictionary:(id)arg1;
- (id)initWithName:(id)arg1 codableAttribute:(id)arg2;
- (id)__INCodableDescriptionPlaceholderKey;
- (id)__INCodableDescriptionPlaceholderIDKey;
- (id)__INIntentResponseCodableDescriptionPlaceholderKey;
- (id)__INIntentResponseCodableDescriptionPlaceholderIDKey;
- (id)__INTypeCodableDescriptionPlaceholderKey;
- (id)__INTypeCodableDescriptionPlaceholderIDKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

