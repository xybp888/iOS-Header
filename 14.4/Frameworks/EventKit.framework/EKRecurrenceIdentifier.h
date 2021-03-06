//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKit/NSCopying-Protocol.h>

@class NSDate, NSString;

@interface EKRecurrenceIdentifier : NSObject <NSCopying>
{
    NSString *_localUID;
    NSDate *_recurrenceDate;
    NSString *_identifierString;
}

+ (id)_recurrenceStringForDate:(id)arg1 stripTime:(_Bool)arg2 stripTimeZone:(_Bool)arg3;
+ (id)_recurrenceIdentifierWithRecurrenceDate:(id)arg1 localUID:(id)arg2 stripTime:(_Bool)arg3 stripTimeZone:(_Bool)arg4;
+ (_Bool)_splitIdentifier:(id)arg1 intoLocalUID:(id *)arg2 recurrenceDate:(id *)arg3;
+ (const char *)_dateFormatStripTime:(_Bool)arg1 stripTimeZone:(_Bool)arg2;
+ (id)localUIDForIdentifierString:(id)arg1;
+ (id)recurrenceIdentifierWithString:(id)arg1;
+ (id)recurrenceIdentifierWithLocalUID:(id)arg1 recurrenceDate:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *identifierString; // @synthesize identifierString=_identifierString;
@property(retain) NSDate *recurrenceDate; // @synthesize recurrenceDate=_recurrenceDate;
@property(retain) NSString *localUID; // @synthesize localUID=_localUID;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

