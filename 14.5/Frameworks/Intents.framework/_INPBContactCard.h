//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBContactCard-Protocol.h>

@class NSArray, NSString, _INPBDateTimeRangeValue, _INPBImageValue;

@interface _INPBContactCard : PBCodable <_INPBContactCard, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int isMe:1;
    } _has;
    _Bool _isMe;
    _INPBDateTimeRangeValue *_birthday;
    NSString *_contactIdentifier;
    NSArray *_contactRelations;
    NSArray *_dates;
    NSString *_departmentName;
    NSArray *_emailAddresses;
    NSString *_firstName;
    NSString *_fullName;
    _INPBImageValue *_image;
    NSArray *_instantMessageAddresses;
    NSString *_jobTitle;
    NSString *_lastName;
    NSString *_middleName;
    NSString *_namePrefix;
    NSString *_nameSuffix;
    NSString *_nickName;
    _INPBDateTimeRangeValue *_nonGregorianBirthday;
    NSString *_organizationName;
    NSArray *_phoneNumbers;
    NSString *_phoneticFirstName;
    NSString *_phoneticLastName;
    NSString *_phoneticMiddleName;
    NSString *_phoneticNamePrefix;
    NSString *_phoneticNameSuffix;
    NSString *_phoneticNickName;
    NSArray *_postalAddresses;
    NSArray *_urlAddresses;
}

+ (_Bool)supportsSecureCoding;
+ (Class)urlAddressesType;
+ (Class)postalAddressesType;
+ (Class)phoneNumbersType;
+ (Class)instantMessageAddressesType;
+ (Class)emailAddressesType;
+ (Class)datesType;
+ (Class)contactRelationsType;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *urlAddresses; // @synthesize urlAddresses=_urlAddresses;
@property(copy, nonatomic) NSArray *postalAddresses; // @synthesize postalAddresses=_postalAddresses;
@property(copy, nonatomic) NSString *phoneticNickName; // @synthesize phoneticNickName=_phoneticNickName;
@property(copy, nonatomic) NSString *phoneticNameSuffix; // @synthesize phoneticNameSuffix=_phoneticNameSuffix;
@property(copy, nonatomic) NSString *phoneticNamePrefix; // @synthesize phoneticNamePrefix=_phoneticNamePrefix;
@property(copy, nonatomic) NSString *phoneticMiddleName; // @synthesize phoneticMiddleName=_phoneticMiddleName;
@property(copy, nonatomic) NSString *phoneticLastName; // @synthesize phoneticLastName=_phoneticLastName;
@property(copy, nonatomic) NSString *phoneticFirstName; // @synthesize phoneticFirstName=_phoneticFirstName;
@property(copy, nonatomic) NSArray *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property(copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(retain, nonatomic) _INPBDateTimeRangeValue *nonGregorianBirthday; // @synthesize nonGregorianBirthday=_nonGregorianBirthday;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *nameSuffix; // @synthesize nameSuffix=_nameSuffix;
@property(copy, nonatomic) NSString *namePrefix; // @synthesize namePrefix=_namePrefix;
@property(copy, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *jobTitle; // @synthesize jobTitle=_jobTitle;
@property(nonatomic) _Bool isMe; // @synthesize isMe=_isMe;
@property(copy, nonatomic) NSArray *instantMessageAddresses; // @synthesize instantMessageAddresses=_instantMessageAddresses;
@property(retain, nonatomic) _INPBImageValue *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(copy, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(copy, nonatomic) NSString *departmentName; // @synthesize departmentName=_departmentName;
@property(copy, nonatomic) NSArray *dates; // @synthesize dates=_dates;
@property(copy, nonatomic) NSArray *contactRelations; // @synthesize contactRelations=_contactRelations;
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(retain, nonatomic) _INPBDateTimeRangeValue *birthday; // @synthesize birthday=_birthday;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)urlAddressesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long urlAddressesCount;
- (void)addUrlAddresses:(id)arg1;
- (void)clearUrlAddresses;
- (id)postalAddressesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long postalAddressesCount;
- (void)addPostalAddresses:(id)arg1;
- (void)clearPostalAddresses;
@property(readonly, nonatomic) _Bool hasPhoneticNickName;
@property(readonly, nonatomic) _Bool hasPhoneticNameSuffix;
@property(readonly, nonatomic) _Bool hasPhoneticNamePrefix;
@property(readonly, nonatomic) _Bool hasPhoneticMiddleName;
@property(readonly, nonatomic) _Bool hasPhoneticLastName;
@property(readonly, nonatomic) _Bool hasPhoneticFirstName;
- (id)phoneNumbersAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long phoneNumbersCount;
- (void)addPhoneNumbers:(id)arg1;
- (void)clearPhoneNumbers;
@property(readonly, nonatomic) _Bool hasOrganizationName;
@property(readonly, nonatomic) _Bool hasNonGregorianBirthday;
@property(readonly, nonatomic) _Bool hasNickName;
@property(readonly, nonatomic) _Bool hasNameSuffix;
@property(readonly, nonatomic) _Bool hasNamePrefix;
@property(readonly, nonatomic) _Bool hasMiddleName;
@property(readonly, nonatomic) _Bool hasLastName;
@property(readonly, nonatomic) _Bool hasJobTitle;
@property(nonatomic) _Bool hasIsMe;
- (id)instantMessageAddressesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long instantMessageAddressesCount;
- (void)addInstantMessageAddresses:(id)arg1;
- (void)clearInstantMessageAddresses;
@property(readonly, nonatomic) _Bool hasImage;
@property(readonly, nonatomic) _Bool hasFullName;
@property(readonly, nonatomic) _Bool hasFirstName;
- (id)emailAddressesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long emailAddressesCount;
- (void)addEmailAddresses:(id)arg1;
- (void)clearEmailAddresses;
@property(readonly, nonatomic) _Bool hasDepartmentName;
- (id)datesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long datesCount;
- (void)addDates:(id)arg1;
- (void)clearDates;
- (id)contactRelationsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long contactRelationsCount;
- (void)addContactRelations:(id)arg1;
- (void)clearContactRelations;
@property(readonly, nonatomic) _Bool hasContactIdentifier;
@property(readonly, nonatomic) _Bool hasBirthday;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

