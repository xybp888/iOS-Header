//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, TRTransferServerDelegate;

@interface TRTransferServer : NSObject
{
    CDStruct_a231404c *_aesContext;
    _Bool _didSendData;
    struct AirPlayPairingSessionPrivate *_pairingSession;
    long long _pairingState;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_responseSemaphore;
    _Bool _started;
    _Bool _waitingOnSemaphore;
    id <TRTransferServerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TRTransferServerDelegate> delegate; // @synthesize delegate=_delegate;
- (int)_runVerifyStepWithInput:(const void *)arg1 inputLength:(unsigned long long)arg2 outputData:(id *)arg3;
- (int)_runSetupStepWithInput:(const void *)arg1 inputLength:(unsigned long long)arg2 outputData:(id *)arg3;
- (id)_onQueue_didReceiveEncryptedData:(id)arg1;
- (void)_onQueue_didFinishPairing;
- (void)_beginAdvertisingIfPowered;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end

