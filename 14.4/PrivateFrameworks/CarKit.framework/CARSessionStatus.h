//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CARObserverHashTable, CARSession, CARSessionChangedNotificationConverter;
@protocol CARSessionObserving, OS_dispatch_source;

@interface CARSessionStatus : NSObject
{
    _Bool _clientIsCarPlayShell;
    id <CARSessionObserving> _sessionObserver;
    CARSession *_session;
    CARSessionChangedNotificationConverter *_notificationConverter;
    CARObserverHashTable *_sessionObservers;
    NSObject<OS_dispatch_source> *_connectingTimer;
    unsigned long long _timeoutInterval;
}

+ (id)sessionUpdatesQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool clientIsCarPlayShell; // @synthesize clientIsCarPlayShell=_clientIsCarPlayShell;
@property(nonatomic) unsigned long long timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *connectingTimer; // @synthesize connectingTimer=_connectingTimer;
@property(retain, nonatomic) CARObserverHashTable *sessionObservers; // @synthesize sessionObservers=_sessionObservers;
@property(retain, nonatomic) CARSessionChangedNotificationConverter *notificationConverter; // @synthesize notificationConverter=_notificationConverter;
@property(retain, nonatomic) CARSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <CARSessionObserving> sessionObserver; // @synthesize sessionObserver=_sessionObserver;
- (void)_notifyDidUpdateSession:(id)arg1;
- (void)_notifyDidDisconnectSession:(id)arg1;
- (void)_notifyDidConnectSession:(id)arg1;
- (void)_notifyCancelledConnectionAttemptOnTransport:(unsigned long long)arg1;
- (void)_notifyStartedConnectionAttemptOnTransport:(unsigned long long)arg1;
- (void)_handleConnectingTimeout;
- (void)_stopConnectingTimer;
- (void)_startConnectingTimer;
- (void)_updateSession;
- (void)_handleCarCapabilitiesUpdated;
- (void)_handleConfigurationUpdated;
- (void)_handleSessionChanged;
- (void)_handleInCarNotification;
- (void)_handleAuthenticationSucceeded:(id)arg1;
- (void)removeSessionObserver:(id)arg1;
- (void)addSessionObserver:(id)arg1;
- (void)waitForSessionInitialization;
@property(readonly, nonatomic) CARSession *currentSession;
- (void)dealloc;
- (id)initForCarPlayShell;
- (id)initAndWaitUntilSessionUpdated;
- (id)init;

@end

