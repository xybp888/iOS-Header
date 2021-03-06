//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBContactValue, _INPBImageValue;

@protocol _INPBRideDriver <NSObject>
@property(readonly, nonatomic) _Bool hasRating;
@property(copy, nonatomic) NSString *rating;
@property(readonly, nonatomic) _Bool hasPhoneNumber;
@property(copy, nonatomic) NSString *phoneNumber;
@property(readonly, nonatomic) _Bool hasPerson;
@property(retain, nonatomic) _INPBContactValue *person;
@property(readonly, nonatomic) _Bool hasImage;
@property(retain, nonatomic) _INPBImageValue *image;
@end

