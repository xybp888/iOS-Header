//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACAccount.h>

@class NSArray, NSNumber, NSString;

@interface ACAccount (ContactsFoundation)
- (void)setPropertiesFromDelegateInfo:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *_cn_appleAccountAppleIDAliases;
@property(readonly, copy, nonatomic) NSString *_cn_appleAccountAppleID;
@property(readonly, nonatomic) _Bool _cn_isManaged;
@property(readonly, nonatomic) _Bool _cn_isChildDelegateAccount;
@property(readonly, nonatomic) _Bool _cn_isCardDAV;
@property(readonly, nonatomic) _Bool _cn_isLDAP;
@property(readonly, nonatomic) _Bool _cn_isPrimaryAccount;
@property(copy, nonatomic) NSString *_cn_lastName;
@property(copy, nonatomic) NSString *_cn_firstName;
@property(copy, nonatomic) NSString *_cn_appleID;
@property(copy, nonatomic) NSString *_cn_principalPath;
@property(copy, nonatomic) NSString *_cn_altDSID;
@property(copy, nonatomic) NSNumber *_cn_dsid;
@end

