//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FlightUtilitiesCore/NSCopying-Protocol.h>
#import <FlightUtilitiesCore/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface FUAirline : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_IATACode;
    NSString *_FAACode;
    NSString *_name;
    NSString *_phoneNumber;
    NSURL *_URL;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSURL *URL; // @synthesize URL=_URL;
@property(retain) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *FAACode; // @synthesize FAACode=_FAACode;
@property(retain) NSString *IATACode; // @synthesize IATACode=_IATACode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

@end

