//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameKitServices/GKSessionVoiceChatDelegate-Protocol.h>
#import <GameKitServices/GKVoiceChatClient-Protocol.h>
#import <GameKitServices/InterfaceListenerDelegate-Protocol.h>
#import <GameKitServices/VideoConferenceSpeakingDelegate-Protocol.h>

@class GKInterfaceListener, GKRWLock, GKSessionInternal, GKVoiceChatServiceFocus, NSArray, NSMutableArray, NSMutableDictionary, NSString, VoiceChatSessionRoster;
@protocol GKVoiceChatSessionDelegate, OS_dispatch_queue;

@interface GKVoiceChatSessionInternal : NSObject <GKSessionVoiceChatDelegate, GKVoiceChatClient, VideoConferenceSpeakingDelegate, InterfaceListenerDelegate>
{
    NSString *_sessionName;
    unsigned int _conferenceID;
    _Bool activeSession;
    float sessionVolume;
    _Bool focusCallbacks;
    GKSessionInternal *_gkSession;
    NSString *_peerID;
    NSMutableArray *_connectedPeers;
    NSMutableArray *_connectedVoicePeers;
    NSMutableArray *_connectedFocusPeers;
    NSMutableArray *_mutedPeers;
    NSMutableArray *_myPausedList;
    NSMutableDictionary *_peerChannelQuality;
    _Bool needsRecalculateGoodChannels;
    int goodChannels;
    unsigned int talkingPeersLimit;
    _Bool isUsingSuppression;
    unsigned int _sessionState;
    GKRWLock *_rwLock;
    GKVoiceChatServiceFocus *_vcService;
    VoiceChatSessionRoster *_roster;
    NSObject<OS_dispatch_queue> *_sendQueue;
    id <GKVoiceChatSessionDelegate> delegate;
    unsigned int congestionState;
    id _publicWrapper;
    GKInterfaceListener *_wifiListener;
    _Bool _currentWifiState;
}

+ (void)brokenHash:(id)arg1 response:(char *)arg2;
@property _Bool isUsingSuppression;
@property unsigned int talkingPeersLimit;
- (unsigned int)peerCount;
- (void)parseConnectedPeers:(id)arg1;
- (void)sendConnectedPeers;
- (void)updatedConnectedPeers:(id)arg1;
- (void)updatedFocusPeers:(id)arg1;
- (void)removeFromFocusPausedList:(id)arg1;
- (void)addPeerToFocusPausedList:(id)arg1;
- (void)pruneBadLinks;
- (void)unPauseAll;
- (void)pauseAll;
- (void)parseMutedPeers:(id)arg1 forPeer:(id)arg2;
- (void)sendMutedPeers;
- (void)updatedMutedPeers:(id)arg1 forPeer:(id)arg2;
- (void)updatedFocusID:(unsigned int)arg1;
- (void)updatedSubscribedBeaconList:(id)arg1;
- (void)handlePeerDisconnected:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property float sessionVolume;
@property(readonly, nonatomic) unsigned int conferenceID;
@property(readonly, nonatomic) NSString *sessionName;
@property(getter=isActiveSession) _Bool activeSession;
@property(readonly) NSArray *peerList;
- (_Bool)getMuteStateForPeer:(id)arg1;
- (void)setMute:(_Bool)arg1 forPeer:(id)arg2;
- (void)stopSessionInternal;
- (void)stopSession;
- (void)startSessionInternal;
- (void)startSession;
- (void)cleanupProc:(id)arg1;
- (void)cleanup;
- (void)dealloc;
- (id)decodePeerID:(id)arg1;
- (id)encodePeerID:(id)arg1;
- (void)calculateConferenceID;
- (id)initWithGKSession:(id)arg1 publicWrapper:(id)arg2 sessionName:(id)arg3;
- (void)networkStateDidChange;
- (void)interfaceStateDidChangeWithWifiUp:(_Bool)arg1 cellUp:(_Bool)arg2;
- (void)session:(id)arg1 didReceiveOOBAudioPacket:(id)arg2 fromPeerID:(id)arg3;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(unsigned int)arg3;
- (void)session:(id)arg1 didReceiveAudioPacket:(id)arg2 fromPeerID:(id)arg3;
- (void)informClientVoiceChatFocusChange:(id)arg1;
- (void)informClientVoiceChatSilent:(id)arg1;
- (void)informClientVoiceChatSpeaking:(id)arg1;
- (void)informClientVoiceChatDidStop:(id)arg1;
- (void)informClientVoiceChatCouldNotConnect:(id)arg1;
- (void)informClientVoiceChatConnecting:(id)arg1;
- (void)informClientVoiceChatDidStart:(id)arg1;
@property id <GKVoiceChatSessionDelegate> delegate;
- (void)voiceChatService:(id)arg1 didReceiveInvitationFromParticipantID:(id)arg2 callID:(unsigned int)arg3;
- (void)voiceChatService:(id)arg1 didStopWithParticipantID:(id)arg2 error:(id)arg3;
- (void)voiceChatService:(id)arg1 didNotStartWithParticipantID:(id)arg2 error:(id)arg3;
- (void)voiceChatService:(id)arg1 didStartWithParticipantID:(id)arg2;
- (id)participantID;
- (void)voiceChatService:(id)arg1 sendData:(id)arg2 toParticipantID:(id)arg3;
- (void)didStopSpeaking:(id)arg1;
- (void)didStartSpeaking:(id)arg1;
- (void)lossRate:(float)arg1 forParticipantID:(id)arg2;
- (int)goodChannels;
- (int)calculateChannelQualities;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

