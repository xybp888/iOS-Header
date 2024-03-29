//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNNavigationServiceProxy-Protocol.h>

@class MNSettings, MNStartNavigationDetails, NSArray, NSHashTable, NSMutableArray, NSString, NSXPCConnection, geo_isolater;
@protocol MNNavigationServiceClientInterface, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MNNavigationServiceRemoteProxy : NSObject <MNNavigationServiceProxy>
{
    _Bool _applicationActive;
    NSXPCConnection *_connection;
    MNSettings *_settings;
    geo_isolater *_clientsLock;
    NSHashTable *_clients;
    MNStartNavigationDetails *_startNavigationDetails;
    NSMutableArray *_interruptionDates;
    _Bool _isReconnecting;
    CDUnknownBlockType _predictionHandler;
    NSObject<OS_dispatch_queue> *_serialQueue;
    long long _sandboxHandle;
    id <MNNavigationServiceClientInterface> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MNNavigationServiceClientInterface> delegate; // @synthesize delegate=_delegate;
- (void)navigationServiceProxy:(id)arg1 didUpdateNavigationDetails:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;
- (void)checkinForNavigationService:(CDUnknownBlockType)arg1;
- (void)interfaceHashesWithHandler:(CDUnknownBlockType)arg1;
- (void)recordPedestrianTracePath:(id)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)setTracePosition:(double)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTraceIsPlaying:(_Bool)arg1;
- (void)acceptReroute:(_Bool)arg1 forTrafficIncidentAlert:(id)arg2;
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
- (void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setIsConnectedToCarplay:(_Bool)arg1;
- (void)setGuidancePromptsEnabled:(_Bool)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setHFPPreference:(_Bool)arg1 forSetting:(id)arg2;
- (void)stopCurrentGuidancePrompt;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;
- (void)changeSettings:(id)arg1;
- (void)setFullGuidanceMode:(_Bool)arg1;
- (void)switchToRoute:(id)arg1;
- (void)resumeOriginalDestination;
- (void)updateDestination:(id)arg1;
- (void)stopPredictingDestinations;
- (void)startPredictingDestinationsWithHandler:(CDUnknownBlockType)arg1;
- (void)stopNavigation;
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(CDUnknownBlockType)arg2;
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)_releaseSandboxExtension;
- (void)_consumeSandboxExtension:(char *)arg1;
- (id)_remoteObjectProxy;
- (void)_startNavigationWithDetails:(id)arg1;
- (void)_closeConnection;
- (_Bool)_shouldReconnectWithInterruptionOnDate:(id)arg1;
- (void)_restoreIdleConnection;
- (void)_restoreNavigationSession;
- (void)_restorePredictionSession;
- (void)_handleInterruption;
- (void)_openConnection;
- (void)_updateConnection;
@property(readonly, nonatomic) unsigned long long clientCount;
@property(readonly, nonatomic) unsigned long long interruptionCount;
@property(readonly, nonatomic) NSArray *interruptionDates;
- (_Bool)isOpenForClient:(id)arg1;
- (void)closeForClient:(id)arg1;
- (void)openForClient:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

