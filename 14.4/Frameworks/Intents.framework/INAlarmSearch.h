//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INDateComponentsRange, INSpeakableString, NSNumber, NSString;

@interface INAlarmSearch : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    long long _alarmReferenceType;
    NSString *_identifier;
    INDateComponentsRange *_time;
    INSpeakableString *_label;
    long long _alarmSearchStatus;
    NSNumber *_includeSleepAlarm;
    long long _period;
    NSNumber *_isMeridianInferred;
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *isMeridianInferred; // @synthesize isMeridianInferred=_isMeridianInferred;
@property(readonly, nonatomic) long long period; // @synthesize period=_period;
@property(readonly, copy, nonatomic) NSNumber *includeSleepAlarm; // @synthesize includeSleepAlarm=_includeSleepAlarm;
@property(readonly, nonatomic) long long alarmSearchStatus; // @synthesize alarmSearchStatus=_alarmSearchStatus;
@property(readonly, copy, nonatomic) INSpeakableString *label; // @synthesize label=_label;
@property(readonly, copy, nonatomic) INDateComponentsRange *time; // @synthesize time=_time;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) long long alarmReferenceType; // @synthesize alarmReferenceType=_alarmReferenceType;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithAlarmReferenceType:(long long)arg1 identifier:(id)arg2 time:(id)arg3 label:(id)arg4 alarmSearchStatus:(long long)arg5 includeSleepAlarm:(id)arg6 period:(long long)arg7 isMeridianInferred:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

