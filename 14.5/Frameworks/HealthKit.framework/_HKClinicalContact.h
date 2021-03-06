//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface _HKClinicalContact : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_name;
    NSString *_nameContactIdentifier;
    NSString *_phoneNumber;
    NSString *_phoneNumberContactIdentifier;
    NSString *_phoneNumberLabel;
    NSString *_relationship;
}

+ (id)clinicalContactWithContact:(id)arg1 property:(id)arg2;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *relationship; // @synthesize relationship=_relationship;
@property(copy, nonatomic) NSString *phoneNumberLabel; // @synthesize phoneNumberLabel=_phoneNumberLabel;
@property(copy, nonatomic) NSString *phoneNumberContactIdentifier; // @synthesize phoneNumberContactIdentifier=_phoneNumberContactIdentifier;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *nameContactIdentifier; // @synthesize nameContactIdentifier=_nameContactIdentifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqualToSyncedContact:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

