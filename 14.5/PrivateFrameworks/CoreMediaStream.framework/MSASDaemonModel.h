//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMediaStream/MSASModelBase.h>

@interface MSASDaemonModel : MSASModelBase
{
}

+ (id)defaultModel;
- (void)clearAllNextActivityDates;
- (void)setNextActivityDate:(id)arg1 forPersonID:(id)arg2;
- (id)nextActivityDateByPersonID;
- (id)earliestNextActivityDate;
- (_Bool)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2;
- (id)init;

@end

