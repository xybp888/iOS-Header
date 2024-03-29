//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUCallCapabilitiesXPCClient-Protocol.h>
#import <TelephonyUtilities/TUCallCapabilitiesXPCServerActions-Protocol.h>

@class NSMapTable, NSString, NSXPCConnection, TUCallCapabilitiesState;
@protocol OS_dispatch_queue;

@interface TUCallCapabilitiesXPCClient : NSObject <TUCallCapabilitiesXPCClient, TUCallCapabilitiesXPCServerActions>
{
    int _token;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSMapTable *_delegateToQueue;
    TUCallCapabilitiesState *_state;
}

+ (id)callCapabilitiesServerXPCInterface;
+ (id)callCapabilitiesClientXPCInterface;
+ (void)setSynchronousServer:(id)arg1;
+ (id)synchronousServer;
+ (void)setAsynchronousServer:(id)arg1;
+ (id)asynchronousServer;
- (void).cxx_destruct;
@property(retain, nonatomic) TUCallCapabilitiesState *state; // @synthesize state=_state;
@property(readonly, nonatomic) NSMapTable *delegateToQueue; // @synthesize delegateToQueue=_delegateToQueue;
@property(readonly, nonatomic) int token; // @synthesize token=_token;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_updateState:(id)arg1;
- (void)_retrieveState;
- (oneway void)capabilityStateUpdated:(id)arg1;
- (void)invalidate;
- (oneway void)cancelPinRequestFromPrimaryDevice;
- (oneway void)requestPinFromPrimaryDevice;
- (oneway void)invalidateAndRefreshThumperCallingProvisioningURLForSenderIdentityWithUUID:(id)arg1;
- (oneway void)invalidateAndRefreshWiFiCallingProvisioningURLForSenderIdentityWithUUID:(id)arg1;
- (oneway void)endEmergencyCallbackMode;
- (oneway void)setThumperCallingAllowedOnDefaultPairedDevice:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;
- (oneway void)setThumperCallingAllowed:(_Bool)arg1 onSecondaryDeviceWithID:(id)arg2 forSenderIdentityWithUUID:(id)arg3;
- (oneway void)setThumperCallingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;
- (oneway void)setVoLTECallingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;
- (oneway void)setWiFiCallingRoamingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;
- (oneway void)setWiFiCallingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;
- (oneway void)setRelayCallingEnabled:(_Bool)arg1 forDeviceWithID:(id)arg2;
- (oneway void)setRelayCallingEnabled:(_Bool)arg1;
- (void)performDelegateCallbackBlock:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)synchronousServerWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)asynchronousServerWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)asynchronousServer;
- (void)handleServerDisconnect;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

