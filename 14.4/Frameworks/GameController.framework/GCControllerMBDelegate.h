//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface GCControllerMBDelegate : NSObject
{
    struct BTSessionImpl *_session;
    struct BTPairingAgentImpl *_pairingAgent;
    struct BTDiscoveryAgentImpl *_discoveryAgent;
    NSTimer *_timer;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)stopScan;
- (void)startScan;
- (void)scanTimeout:(id)arg1;
- (void)fireCompletionHandler;
- (void)dealloc;

@end

