//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreServices/NSXPCConnectionDelegate-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LSDClient : NSObject <NSXPCConnectionDelegate>
{
    NSXPCConnection *_XPCConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(readonly, retain) NSXPCConnection *XPCConnection; // @synthesize XPCConnection=_XPCConnection;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;
- (void)didHandleInvocation:(id)arg1 isReply:(_Bool)arg2;
- (void)willHandleInvocation:(id)arg1 isReply:(_Bool)arg2;
- (id)initWithXPCConnection:(id)arg1;
- (id)initWithXPCConnection:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

