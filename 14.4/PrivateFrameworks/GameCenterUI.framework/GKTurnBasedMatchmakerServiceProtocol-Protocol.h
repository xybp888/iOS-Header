//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKExtensionProtocol-Protocol.h>

@class GKMatchRequestInternal;

@protocol GKTurnBasedMatchmakerServiceProtocol <GKExtensionProtocol>

@optional
- (void)refreshMatches;
- (void)setShowQuit:(_Bool)arg1;
- (void)setShowPlay:(_Bool)arg1;
- (void)setShowExistingMatches:(_Bool)arg1;
- (void)setMatchRequestInternal:(GKMatchRequestInternal *)arg1;
@end

