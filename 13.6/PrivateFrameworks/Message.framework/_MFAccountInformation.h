//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DeliveryAccount, MailAccount, NSDictionary;

@interface _MFAccountInformation : NSObject
{
    MailAccount *_account;
    DeliveryAccount *_deliveryAccount;
    NSDictionary *_localizedNotes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *localizedNotes; // @synthesize localizedNotes=_localizedNotes;
@property(retain, nonatomic) DeliveryAccount *deliveryAccount; // @synthesize deliveryAccount=_deliveryAccount;
@property(retain, nonatomic) MailAccount *account; // @synthesize account=_account;

@end

