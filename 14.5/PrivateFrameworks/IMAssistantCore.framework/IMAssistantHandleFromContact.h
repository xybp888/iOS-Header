//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, CNLabeledValue, NSString;

@interface IMAssistantHandleFromContact : NSObject
{
    CNContact *_contact;
    CNLabeledValue *_labeledEmailAddress;
    CNLabeledValue *_labeledPhoneNumber;
    NSString *_businessID;
    NSString *_displayID;
    long long _handleType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long handleType; // @synthesize handleType=_handleType;
@property(readonly, nonatomic) NSString *displayID; // @synthesize displayID=_displayID;
@property(readonly, nonatomic) NSString *businessID; // @synthesize businessID=_businessID;
@property(readonly, nonatomic) CNLabeledValue *labeledPhoneNumber; // @synthesize labeledPhoneNumber=_labeledPhoneNumber;
@property(readonly, nonatomic) CNLabeledValue *labeledEmailAddress; // @synthesize labeledEmailAddress=_labeledEmailAddress;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (id)description;
- (_Bool)matchesIMHandle:(id)arg1;
- (_Bool)matchesHandleID:(id)arg1;
@property(readonly, nonatomic) NSString *personHandleLabel;
@property(readonly, nonatomic) long long personHandleType;
@property(readonly, nonatomic) NSString *handleID;
- (id)initWithBusinessID:(id)arg1;
- (id)initWithCNLabeledEmailAddress:(id)arg1 contact:(id)arg2;
- (id)initWithCNLabeledPhoneNumber:(id)arg1 contact:(id)arg2;
- (id)_initWithPhoneNumber:(id)arg1 emailAddress:(id)arg2 businessID:(id)arg3 handleType:(long long)arg4 contact:(id)arg5;

@end

