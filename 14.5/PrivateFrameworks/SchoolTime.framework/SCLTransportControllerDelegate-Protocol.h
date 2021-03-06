//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SchoolTime/NSObject-Protocol.h>

@class SCLScheduleSettings, SCLTransportController, SCLUnlockHistoryItem;

@protocol SCLTransportControllerDelegate <NSObject>
- (SCLScheduleSettings *)currentScheduleSettingsForTransportController:(SCLTransportController *)arg1;
- (void)transportController:(SCLTransportController *)arg1 didReceiveSchedule:(SCLScheduleSettings *)arg2 forInitialSync:(_Bool)arg3;
- (void)transportController:(SCLTransportController *)arg1 didReceiveUnlockHistoryItem:(SCLUnlockHistoryItem *)arg2;
@end

