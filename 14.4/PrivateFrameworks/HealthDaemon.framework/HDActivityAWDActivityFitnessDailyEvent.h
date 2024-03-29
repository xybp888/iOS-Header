//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HDActivityAWDActivityFitnessDailyEvent : PBCodable <NSCopying>
{
    CDStruct_5df41632 _standEventMinutesSinceMidnightRoundedTo10s;
    long long _monthsSinceFirstWatchUsage;
    long long _moveRingCompletionPercentage;
    unsigned long long _timestamp;
    NSMutableArray *_exerciseMinuteHours;
    NSString *_userToken;
    struct {
        unsigned int monthsSinceFirstWatchUsage:1;
        unsigned int moveRingCompletionPercentage:1;
        unsigned int timestamp:1;
    } _has;
}

+ (Class)exerciseMinuteHoursType;
- (void).cxx_destruct;
@property(nonatomic) long long monthsSinceFirstWatchUsage; // @synthesize monthsSinceFirstWatchUsage=_monthsSinceFirstWatchUsage;
@property(nonatomic) long long moveRingCompletionPercentage; // @synthesize moveRingCompletionPercentage=_moveRingCompletionPercentage;
@property(retain, nonatomic) NSMutableArray *exerciseMinuteHours; // @synthesize exerciseMinuteHours=_exerciseMinuteHours;
@property(retain, nonatomic) NSString *userToken; // @synthesize userToken=_userToken;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMonthsSinceFirstWatchUsage;
@property(nonatomic) _Bool hasMoveRingCompletionPercentage;
- (id)exerciseMinuteHoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)exerciseMinuteHoursCount;
- (void)addExerciseMinuteHours:(id)arg1;
- (void)clearExerciseMinuteHours;
- (void)setStandEventMinutesSinceMidnightRoundedTo10s:(long long *)arg1 count:(unsigned long long)arg2;
- (long long)standEventMinutesSinceMidnightRoundedTo10AtIndex:(unsigned long long)arg1;
- (void)addStandEventMinutesSinceMidnightRoundedTo10:(long long)arg1;
- (void)clearStandEventMinutesSinceMidnightRoundedTo10s;
@property(readonly, nonatomic) long long *standEventMinutesSinceMidnightRoundedTo10s;
@property(readonly, nonatomic) unsigned long long standEventMinutesSinceMidnightRoundedTo10sCount;
@property(readonly, nonatomic) _Bool hasUserToken;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

