//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Fitness/FISleepDataProviderDelegate-Protocol.h>

@class FISimpleHistogram, FISleepDataProvider, FISleepUserDay, HKActivitySummary, NSDate, NSDateInterval, NSMutableArray, NSString;
@protocol FITypicalDayActivityModelDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface FITypicalDayActivityModel : NSObject <FISleepDataProviderDelegate>
{
    NSDateInterval *_interval;
    HKActivitySummary *_queue_currentActivitySummary;
    FISimpleHistogram *_queue_moveHistogram;
    FISimpleHistogram *_queue_exerciseHistogram;
    NSMutableArray *_queue_bucketDates;
    _Bool _activitySummaryLoaded;
    NSObject<OS_dispatch_group> *_activitySummaryBarrierGroup;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_projectedOffWristDateToday;
    long long _totalActiveDays;
    FISleepDataProvider *_sleepDataProvider;
    FISleepUserDay *_sleepUserDay;
    struct os_unfair_lock_s _sleepUserDayLock;
    id <FITypicalDayActivityModelDelegate> _delegate;
}

+ (id)_emptySimpleHistogram;
- (void).cxx_destruct;
@property(nonatomic) __weak id <FITypicalDayActivityModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setProjectedOffWristDateToday:(id)arg1;
- (void)_setSleepUserDay:(id)arg1;
- (long long)_bucketIndexForDate:(id)arg1 startOfDay:(id)arg2 bucketDates:(id)arg3;
- (id)_bucketDateForIndex:(unsigned long long)arg1 startOfDay:(id)arg2;
- (_Bool)_queue_enumerateActivitySummariesOrderedByCacheIndexWithCalendar:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_queue_populateHistogramsAndOffWristDateForToday;
@property(readonly, nonatomic) long long totalActiveDays;
- (id)_queue_calculateProjectedOffWristDateFromHistogram:(id)arg1 activeDays:(long long)arg2;
- (void)_queue_updateProjectedOffWristDateHistogram:(id)arg1 activitySummary:(id)arg2 activeDays:(long long *)arg3;
- (void)_queue_updateHistogram:(id)arg1 goalType:(long long)arg2 activitySummary:(id)arg3;
- (void)_waitUntilActivitySummaryLoaded;
- (id)currentCalendar;
- (id)currentDate;
- (void)sleepDataProviderLastGoodMorningDismissedDateDidChange;
- (void)sleepDataProviderUserDayDidUpdate;
- (void)handleUpdatedCurrentActivitySummary:(id)arg1;
- (id)goodMorningAlertDismissedDateForToday;
- (_Bool)isSleepAlarmEnabledForToday;
- (double)projectedDayDuration;
- (id)projectedOffWrist;
- (id)userEndOfDay;
- (id)userStartOfDay;
- (double)_queue_briskWalkTimeToCompleteMoveGoalWithDateOfBirth:(id)arg1 biologicalSex:(long long)arg2 height:(id)arg3 weight:(id)arg4 wheelchairUse:(long long)arg5 experienceType:(unsigned long long)arg6;
- (double)briskWalkTimeToCompleteMoveGoalWithAcitivitySettingsController:(id)arg1;
- (_Bool)shouldSuggestWalkWithActivitySettingsController:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
- (void)rebuildWithInterval:(id)arg1;
- (_Bool)projectedToBeatMoveRecordByEndOfDay;
- (_Bool)willCompletingMoveRingEarnStreakAchievement;
- (double)currentStandGoalPercentage;
- (double)currentExerciseGoalPercentage;
- (double)currentMoveGoalPercentage;
- (_Bool)willCompleteStandGoalOrItIsTooLateWithBufferPercentage:(double)arg1;
- (_Bool)willCompleteExerciseGoalWithBufferPercentage:(double)arg1;
- (_Bool)willCompleteMoveGoalWithBufferPercentage:(double)arg1;
- (_Bool)_willCompleteGoalWithType:(long long)arg1 bufferPercentage:(double)arg2;
- (double)valueOfTypicalDayMoveEarnedByNow;
- (double)valueOfTypicalDayBriskMinutesEarnedByNow;
- (double)percentageOfTypicalDayBriskMinutesEarnedComparedToNow;
- (double)percentageOfTypicalDayMoveComparedToNow;
- (double)_percentageOfTypicalDayComparedToNowForGoal:(long long)arg1;
- (double)_queue_currentValueForHistogram:(id)arg1;
- (id)endOfToday;
- (id)startOfToday;
- (void)_updateSleepUserDay;
- (id)initForDateInterval:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

