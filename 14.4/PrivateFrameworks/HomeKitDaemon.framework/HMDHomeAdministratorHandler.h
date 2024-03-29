//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFMessageDispatcher.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHome, NSMapTable, NSOperationQueue, NSString;
@protocol HMFLocking;

@interface HMDHomeAdministratorHandler : HMFMessageDispatcher <HMFLogging>
{
    id <HMFLocking> _lock;
    NSOperationQueue *_queue;
    NSMapTable *_receivers;
    HMDHome *_home;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
- (id)logIdentifier;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addOperation:(id)arg1;
- (id)operationForMessage:(id)arg1 error:(id *)arg2;
- (void)deregisterReceiver:(id)arg1;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 selector:(SEL)arg4;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 messageHandler:(CDUnknownBlockType)arg4;
- (id)syncOperationManager;
@property(readonly) HMFMessageDispatcher *dispatcher;
- (id)initWithHome:(id)arg1;
- (id)initWithTransport:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

