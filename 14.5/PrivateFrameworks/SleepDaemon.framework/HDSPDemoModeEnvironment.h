//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SleepDaemon/HDSPEnvironment.h>

#import <SleepDaemon/HDSPNotificationObserver-Protocol.h>
#import <SleepDaemon/HDSPSource-Protocol.h>

@class NSString;
@protocol HDSPSource;

__attribute__((visibility("hidden")))
@interface HDSPDemoModeEnvironment : HDSPEnvironment <HDSPNotificationObserver, HDSPSource>
{
}

@property(readonly, nonatomic) NSString *sourceIdentifier;
- (id)demoEventRecord;
- (id)demoSleepSchedule;
- (id)demoSleepSettings;
- (id)demoScheduleModel;
- (void)resetDemoMode;
- (void)setInitialSchedule;
- (id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2;
- (void)environmentDidBecomeReady;
- (_Bool)isDemoEnvironment;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool dontNotify;
@property(readonly, nonatomic) _Bool dontSync;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) id <HDSPSource> targetSource;

@end

