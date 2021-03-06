//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTransport.h>

#import <Catalyst/CATRemoteConnectionDelegate-Protocol.h>

@class CATRemoteConnection, NSMutableDictionary, NSString;
@protocol CATRemoteTransportDelegate;

@interface CATRemoteTransport : CATTransport <CATRemoteConnectionDelegate>
{
    CATRemoteConnection *mConnection;
    NSMutableDictionary *mOperationByUUID;
    _Bool mConnectionHasOpened;
    id <CATRemoteTransportDelegate> _remoteTransportDelegate;
}

+ (void)createRemoteTransportPairWithTransport:(id *)arg1 andTransport:(id *)arg2;
+ (id)new;
- (void).cxx_destruct;
@property(nonatomic) __weak id <CATRemoteTransportDelegate> remoteTransportDelegate; // @synthesize remoteTransportDelegate=_remoteTransportDelegate;
- (void)remoteTransportSendMessageOperation:(id)arg1 sendData:(id)arg2;
- (void)connectionDidClose:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didInterruptWithError:(id)arg2;
- (void)connection:(id)arg1 didFailToSendData:(id)arg2 userInfo:(id)arg3 error:(id)arg4;
- (void)connection:(id)arg1 didSendData:(id)arg2 userInfo:(id)arg3;
- (void)connectionDidSecure:(id)arg1;
- (void)connection:(id)arg1 encounteredTrustDecisionWhileTryingToSecure:(id)arg2;
- (void)connectionWillSecure:(id)arg1;
- (void)setName:(id)arg1;
- (id)name;
- (id)operationToSendMessage:(id)arg1;
- (void)invalidateConnection;
- (void)suspendConnection;
- (void)resumeConnection;
@property(readonly, nonatomic) struct __SecTrust *peerTrust;
- (id)initWithRemoteConnection:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

