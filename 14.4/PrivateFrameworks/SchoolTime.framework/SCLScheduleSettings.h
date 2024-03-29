//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SchoolTime/NSCopying-Protocol.h>
#import <SchoolTime/NSMutableCopying-Protocol.h>
#import <SchoolTime/NSSecureCoding-Protocol.h>

@class SCLSchedule;

@interface SCLScheduleSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    _Bool _enabled;
    SCLSchedule *_schedule;
    unsigned long long _version;
}

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)version;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) SCLSchedule *schedule; // @synthesize schedule=_schedule;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (id)endTimeForDay:(long long)arg1;
- (id)startTimeForDay:(long long)arg1;
- (id)debugDescription;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSchoolModeScheduleSettings:(id)arg1;
- (id)init;
- (id)recurrenceForActiveScheduleOnOrAfterDate:(id)arg1 calendar:(id)arg2;
- (id)dateIntervalForActiveScheduleOnOrAfterDate:(id)arg1 calendar:(id)arg2;
- (_Bool)isActiveAtDate:(id)arg1 calendar:(id)arg2;

@end

