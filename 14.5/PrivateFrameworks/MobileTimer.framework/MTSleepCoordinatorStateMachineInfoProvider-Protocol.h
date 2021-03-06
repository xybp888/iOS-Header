//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/MTStateMachineInfoProvider-Protocol.h>

@class MTAlarm, NSDate;

@protocol MTSleepCoordinatorStateMachineInfoProvider <MTStateMachineInfoProvider>
@property(readonly, nonatomic) unsigned long long sleepTimeOutMinutes;
@property(readonly, nonatomic) NSDate *currentDate;
@property(readonly, nonatomic) MTAlarm *sleepAlarm;
@end

