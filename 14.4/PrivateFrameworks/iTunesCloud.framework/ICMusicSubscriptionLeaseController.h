//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICEnvironmentMonitorObserver-Protocol.h>
#import <iTunesCloud/ICMusicSubscriptionLeaseSessionDelegate-Protocol.h>

@class NSMutableDictionary, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface ICMusicSubscriptionLeaseController : NSObject <ICEnvironmentMonitorObserver, ICMusicSubscriptionLeaseSessionDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableDictionary *_accountDSIDToFairPlayKeyStatus;
    NSMutableDictionary *_cacheKeyToLeaseSession;
    _Bool _hasReceivedUserInteractionEvent;
    _Bool _isRemoteServerLikelyReachable;
    _Bool _isServerReachable;
    NSString *_lastKnownHouseholdID;
    int _leaseDidEndNotificationToken;
    NSOperationQueue *_leaseSessionPreparationOperationQueue;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (void)_handlePlaybackLeaseDidEndPushNotification;
- (void)receivedUserInteractionEvent;
- (void)getLeaseSessionWithRequestContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getLastKnownHouseholdIDWithCompletion:(CDUnknownBlockType)arg1;
- (void)musicLeaseSession:(id)arg1 requestsFairPlayKeyStatusUpdateWithCompletion:(CDUnknownBlockType)arg2;
- (void)musicLeaseSession:(id)arg1 didFinishPlaybackRequest:(id)arg2 withPlaybackResponse:(id)arg3 responseError:(id)arg4 updatedFairPlayKeyStatusList:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
@property(readonly, copy, nonatomic) NSString *lastKnownHouseholdID;
- (void)dealloc;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

