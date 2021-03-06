//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/NSSecureCoding-Protocol.h>

@class GKPlayer, GKTournamentParticipantHistoricalDataInternal, NSMutableArray;

@interface GKTournamentParticipantHistoricalData : NSObject <NSSecureCoding>
{
    GKTournamentParticipantHistoricalDataInternal *_internal;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) GKTournamentParticipantHistoricalDataInternal *internal; // @synthesize internal=_internal;
@property(readonly, nonatomic) GKPlayer *player;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) long long averageRank; // @dynamic averageRank;
@property(readonly, nonatomic) long long averageScore; // @dynamic averageScore;
@property(readonly, nonatomic) long long bestScore; // @dynamic bestScore;
@property(readonly, nonatomic) long long highestRank; // @dynamic highestRank;
@property(readonly, nonatomic) NSMutableArray *historicalRanks; // @dynamic historicalRanks;
@property(readonly, nonatomic) long long latestRank; // @dynamic latestRank;
@property(readonly, nonatomic) long long latestScore; // @dynamic latestScore;
@property(readonly, nonatomic) long long tournamentsPlayed; // @dynamic tournamentsPlayed;

@end

