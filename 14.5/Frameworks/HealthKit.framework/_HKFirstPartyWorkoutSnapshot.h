//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface _HKFirstPartyWorkoutSnapshot : NSObject
{
    double _elapsedTime;
    NSDate *_snapshotDate;
    long long _state;
    unsigned long long _activityType;
}

+ (id)firstPartyWorkoutSnapshotWithCurrentWorkoutSnapshot:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (id)description;
- (double)durationForDate:(id)arg1;
- (id)_initWithState:(long long)arg1 activityType:(unsigned long long)arg2 elapsedTime:(double)arg3 snapshotDate:(id)arg4;

@end

