//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>
#import <ReminderKit/REMObjectIDProviding-Protocol.h>

@class NSDate, NSString, REMAlarmTrigger, REMObjectID;

@interface REMAlarm : NSObject <REMObjectIDProviding, NSSecureCoding>
{
    REMAlarmTrigger *_trigger;
    REMObjectID *_objectID;
    NSDate *_acknowledgedDate;
    NSString *_alarmUID;
    NSString *_originalAlarmUID;
}

+ (_Bool)supportsSecureCoding;
+ (id)cdEntityName;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)newObjectID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *originalAlarmUID; // @synthesize originalAlarmUID=_originalAlarmUID;
@property(retain, nonatomic) NSString *alarmUID; // @synthesize alarmUID=_alarmUID;
@property(retain, nonatomic) NSDate *acknowledgedDate; // @synthesize acknowledgedDate=_acknowledgedDate;
@property(retain, nonatomic) REMObjectID *objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) REMAlarmTrigger *trigger; // @synthesize trigger=_trigger;
- (_Bool)isSnooze;
- (_Bool)isOriginal;
- (_Bool)isAcknowledged;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isContentEqual:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAlarm:(id)arg1 objectID:(id)arg2;
- (id)initWithTrigger:(id)arg1;
- (id)initWithTrigger:(id)arg1 objectID:(id)arg2;
@property(readonly, nonatomic) REMObjectID *remObjectID;

@end

