//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMBusinessInvitation : FATObject
{
    NSNumber *_businessId;
    NSString *_email;
    NSNumber *_role;
    NSNumber *_status;
    NSNumber *_requesterId;
    NSNumber *_fromWorkChat;
    NSNumber *_created;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *created; // @synthesize created=_created;
@property(retain, nonatomic) NSNumber *fromWorkChat; // @synthesize fromWorkChat=_fromWorkChat;
@property(retain, nonatomic) NSNumber *requesterId; // @synthesize requesterId=_requesterId;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber *role; // @synthesize role=_role;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSNumber *businessId; // @synthesize businessId=_businessId;

@end

