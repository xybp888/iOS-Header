//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SleepDaemon/HDSPSleepModeStateMachineState.h>

__attribute__((visibility("hidden")))
@interface HDSPSleepModeManualOffState : HDSPSleepModeStateMachineState
{
}

- (id)stateName;
- (_Bool)isUserRequested;
- (void)userDisengagedCurrentMode;
- (void)sleepScheduleStateChangedToBedtimeFromState:(unsigned long long)arg1;
- (void)sleepScheduleStateChangedToWindDownFromState:(unsigned long long)arg1;
- (id)determineExpirationDateForCurrentDate:(id)arg1;
- (void)updateState;
- (void)willEnterWithPreviousState:(id)arg1 context:(id)arg2;

@end

