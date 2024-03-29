//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SleepHealthDaemon/HKSPSleepOnboardingStore-Protocol.h>

@class HKSPMutableSleepEventRecord, HKSPMutableSleepSettings, NSDate;
@protocol HKSPSleepStoreObserver;

__attribute__((visibility("hidden")))
@interface HDSHSleepOnboardingTestStore : NSObject <HKSPSleepOnboardingStore>
{
    HKSPMutableSleepEventRecord *_sleepEventRecord;
    HKSPMutableSleepSettings *_sleepSettings;
    id <HKSPSleepStoreObserver> _observer;
    NSDate *_currentDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)setSleepWindDownShortcutsOnboardingCompletedVersion:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSleepTrackingOnboardingCompletedVersion:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSleepCoachingOnboardingCompletedVersion:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveCurrentSleepEventRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool springBoardGreetingDisabled;
- (void)currentSleepEventRecordWithCompletion:(CDUnknownBlockType)arg1;
- (id)currentSleepSettingsWithError:(id *)arg1;
- (id)currentSleepEventRecordWithError:(id *)arg1;
- (id)init;

@end

