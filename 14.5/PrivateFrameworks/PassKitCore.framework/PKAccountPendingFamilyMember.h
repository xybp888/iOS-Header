//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface PKAccountPendingFamilyMember : NSObject <NSSecureCoding>
{
    _Bool _displayedNotification;
    NSString *_accountIdentifier;
    NSString *_inviteEmail;
    NSDate *_inviteDate;
    NSString *_altDSID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(nonatomic) _Bool displayedNotification; // @synthesize displayedNotification=_displayedNotification;
@property(copy, nonatomic) NSDate *inviteDate; // @synthesize inviteDate=_inviteDate;
@property(copy, nonatomic) NSString *inviteEmail; // @synthesize inviteEmail=_inviteEmail;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)_isEqualToAccountPendingFamilyMember:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPendingFamilyMember:(id)arg1 accountIdentifier:(id)arg2;

@end

