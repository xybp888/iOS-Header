//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContinuousDialogManagerService/CDMSetupXPCListenerService-Protocol.h>

@class NSString, NSXPCConnection;

@interface CDMSetupXPCClient : NSObject <CDMSetupXPCListenerService>
{
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (void)invalidateClientFlowCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)getClientFlowStatusWithReply:(CDUnknownBlockType)arg1;
- (void)getNLAssetStatusForType:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (id)_remoteObjectProxy;
- (void)_clearConnectionWithError:(id)arg1;
- (id)_connection;
- (void)disconnect;
- (void)connect;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

