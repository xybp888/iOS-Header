//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXModeEntityScorerProtocol-Protocol.h>

@interface ATXModeEntityScorer : NSObject <ATXModeEntityScorerProtocol>
{
}

- (id)dataFromFileHandle:(id)arg1;
- (id)modeEntityScoresFromCacheForModeEntityTypeIdentifier:(id)arg1 modeIdentifier:(id)arg2;
- (id)pathForModeEntityTypeIdentifier:(id)arg1 modeIdentifier:(id)arg2;
- (id)rankedEntitiesForMode:(unsigned long long)arg1 entityTypeIdentifier:(id)arg2;
- (void)scoreEntities:(id)arg1 entityTypeIdentifier:(id)arg2 mode:(unsigned long long)arg3;
- (id)rankedAppsForMode:(unsigned long long)arg1;
- (void)scoreApps:(id)arg1 mode:(unsigned long long)arg2;

@end

