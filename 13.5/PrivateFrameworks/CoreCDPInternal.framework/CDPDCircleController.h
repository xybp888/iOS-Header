//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CDPDCircleStateObserver, NSArray;
@protocol CDPDCircleDelegate, CDPDCircleProxy, CDPStateUIProviderInternal, OS_dispatch_queue;

@interface CDPDCircleController : NSObject
{
    CDPDCircleStateObserver *_circleJoinObserver;
    NSObject<OS_dispatch_queue> *_requestSynchronizationQueue;
    NSObject<OS_dispatch_queue> *_retryQueue;
    unsigned long long _cliqueStatusRetryCount;
    NSArray *_retryIntervals;
    id <CDPStateUIProviderInternal> _uiProvider;
    NSObject<CDPDCircleDelegate> *_delegate;
    id <CDPDCircleProxy> _circleProxy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <CDPDCircleProxy> circleProxy; // @synthesize circleProxy=_circleProxy;
@property(nonatomic) __weak NSObject<CDPDCircleDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <CDPStateUIProviderInternal> uiProvider; // @synthesize uiProvider=_uiProvider;
- (void)cancelApplicationToJoinCircle;
- (void)_requestCircleJoinWithObserver:(id)arg1 requestBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_requestToJoinWithRequestBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_requestToJoinAfterRestoreAndWaitForSuccessWithHandler:(CDUnknownBlockType)arg1;
- (void)_requestToJoinAndWaitForSuccessWithHandler:(CDUnknownBlockType)arg1;
- (void)_requestToJoinWithObserver:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applyToJoinCircleWithJoinHandler:(CDUnknownBlockType)arg1;
- (id)_peerDeviceNamesByPeerID;
- (void)useCircleInfoToUpdateNameForDevices:(id)arg1;
- (void)resetCircleIncludingCloudKitData:(_Bool)arg1 cloudKitResetReasonDescription:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (unsigned long long)_peerCount;
- (void)promptForCredentials:(CDUnknownBlockType)arg1;
- (long long)nextRetryInterval;
- (_Bool)canRetryCliqueStatus;
- (void)_joinCircleIgnoringBackups:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)joinCircleIgnoringBackups:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)joinCircleWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareCircleStateForRecovery;
- (_Bool)synchronizeCircleViews;
- (id)peerID;
- (unsigned long long)circleStatus;
- (void)dealloc;
- (id)initWithUiProvider:(id)arg1 delegate:(id)arg2 circleProxy:(id)arg3;

@end

