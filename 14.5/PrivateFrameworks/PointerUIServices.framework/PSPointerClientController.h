//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PointerUIServices/BSInvalidatable-Protocol.h>
#import <PointerUIServices/PSPointerDefaultLaunchingServiceServerToClientInterface-Protocol.h>
#import <PointerUIServices/PSPointerDefaultServiceServerToClientInterface-Protocol.h>

@class BSServiceConnection, NSCountedSet, NSMutableArray, NSString;
@protocol OS_dispatch_queue, PSPointerClientControllerDelegate;

@interface PSPointerClientController : NSObject <PSPointerDefaultServiceServerToClientInterface, PSPointerDefaultLaunchingServiceServerToClientInterface, BSInvalidatable>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    BSServiceConnection *_nonLaunchingConnection;
    BSServiceConnection *_launchingConnection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSCountedSet *_persistentPointerHideReasons;
    NSMutableArray *_serviceKeepAliveAssertions;
    struct os_unfair_lock_s _invalidationAndConfigurationLock;
    _Bool _hasActivatedLaunchingConnection;
    _Bool _isConnectionActive;
    unsigned int _systemCursorInteractionContextID;
    id <PSPointerClientControllerDelegate> _delegate;
    long long _clientInteractionState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int systemCursorInteractionContextID; // @synthesize systemCursorInteractionContextID=_systemCursorInteractionContextID;
@property(readonly, nonatomic) long long clientInteractionState; // @synthesize clientInteractionState=_clientInteractionState;
@property(nonatomic) __weak id <PSPointerClientControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didInvalidateRemoteSources;
- (id)_connectionQueue_launchingConnection;
- (void)_connectionQueue_handleLaunchingConnectionInterruption;
- (void)_connectionQueue_handleNonLaunchingConnectionInterruption;
- (void)_connectionQueue_handleNonLaunchingConnectionActivation;
- (id)_accessQueue_acquireServiceKeepAliveAssertion;
- (oneway void)adjustedDecelerationTargetPointerPosition:(id)arg1 velocity:(id)arg2 inContextID:(id)arg3 cursorRegionLookupRadius:(id)arg4 cursorRegionLookupResolution:(id)arg5 lookupConeAngle:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (oneway void)clientInteractionStateDidChange:(id)arg1;
- (id)persistentlyHidePointerAssertionForReason:(unsigned long long)arg1;
- (void)autohidePointerForReason:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isClientInteractionEnabled) _Bool clientInteractionEnabled;
- (id)acquireServiceKeepAliveAssertion;
- (void)setActiveHoverRegion:(id)arg1 transitionCompletion:(CDUnknownBlockType)arg2;
- (void)invalidateContentMatchMoveSources:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createContentMatchMoveSourcesWithCount:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidatePointerPortalSourceCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createPointerPortalSourceCollectionWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

