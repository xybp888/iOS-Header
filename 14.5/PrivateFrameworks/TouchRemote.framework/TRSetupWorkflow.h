//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, TRNearbyDevice, TROperationQueue, TRSession, UIViewController;

@interface TRSetupWorkflow : NSObject
{
    CDUnknownBlockType _startedHandler;
    CDUnknownBlockType _configurationStageStartedHandler;
    CDUnknownBlockType _networkStageStartedHandler;
    CDUnknownBlockType _activationStageStartedHandler;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _failureHandler;
    TRNearbyDevice *_nearbyDevice;
    unsigned long long _state;
    TRSession *_session;
    NSSet *_unauthenticatedAccountServices;
    UIViewController *_presentingViewController;
    TROperationQueue *_operationQueue;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) TROperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) NSSet *unauthenticatedAccountServices; // @synthesize unauthenticatedAccountServices=_unauthenticatedAccountServices;
@property(retain) TRSession *session; // @synthesize session=_session;
@property unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) TRNearbyDevice *nearbyDevice; // @synthesize nearbyDevice=_nearbyDevice;
@property(copy, nonatomic) CDUnknownBlockType failureHandler; // @synthesize failureHandler=_failureHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType activationStageStartedHandler; // @synthesize activationStageStartedHandler=_activationStageStartedHandler;
@property(copy, nonatomic) CDUnknownBlockType networkStageStartedHandler; // @synthesize networkStageStartedHandler=_networkStageStartedHandler;
@property(copy, nonatomic) CDUnknownBlockType configurationStageStartedHandler; // @synthesize configurationStageStartedHandler=_configurationStageStartedHandler;
@property(copy, nonatomic) CDUnknownBlockType startedHandler; // @synthesize startedHandler=_startedHandler;
- (void)_releaseHandlers;
- (void)_abortSetupWithErrorCode:(long long)arg1 userInfo:(id)arg2;
- (void)_performCompletionOperation;
- (void)_performAuthenticationOperation;
- (void)_performActivationOperation;
- (void)_performNetworkOperation;
- (void)_performConfigurationOperation;
- (void)_performHandshakeOperation;
- (void)cancel;
- (void)start;
- (id)initWithNearbyDevice:(id)arg1 presentingViewController:(id)arg2;

@end

