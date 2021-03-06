//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFCore/AVDelegateStorage-Protocol.h>

@class AVWeakReference, NSString;
@protocol OS_dispatch_queue;

@interface AVWeakReferencingDelegateStorage : NSObject <AVDelegateStorage>
{
    NSObject<OS_dispatch_queue> *_delegateReadWriteQueue;
    struct OpaqueConcurrentAccessDetector *_detectorForWeakReferenceToDelegate;
    AVWeakReference *_weakReferenceToDelegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

+ (void)initialize;
- (void)invokeDelegateCallbackWithBlock:(CDUnknownBlockType)arg1 synchronouslyIfDelegateQueueIsQueue:(id)arg2;
- (void)invokeDelegateCallbackWithBlock:(CDUnknownBlockType)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)getRetainedDelegate:(id *)arg1 retainedDelegateQueue:(id *)arg2;
- (void)_setDelegateViaWeakReference:(id)arg1;
- (id)_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property(readonly, nonatomic) id delegate;
- (void)dealloc;
- (void)_collectUncollectables;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

