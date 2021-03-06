//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/_GCIPCRemoteConnection.h>

#import <GameController/_GCIPCIncomingConnection-Protocol.h>

@class _GCIPCRemoteProcess;
@protocol _GCIPCProcess;

__attribute__((visibility("hidden")))
@interface _GCIPCRemoteIncomingConnection : _GCIPCRemoteConnection <_GCIPCIncomingConnection>
{
    _GCIPCRemoteProcess *_process;
}

+ (id)sharedConnectionWorkloop;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <_GCIPCProcess> process; // @synthesize process=_process;
- (id)synchronousRemoteProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteProxy;
- (id)valueForEntitlement:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (id)initWithConnection:(id)arg1 fromProcess:(id)arg2;

// Remaining properties
@property(readonly, nonatomic, getter=isInvalid) _Bool invalid;

@end

