//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSExtension, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ASDExtensionRequest : NSObject
{
    NSObject<OS_dispatch_queue> *_runQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    double _serviceTime;
    NSObject<OS_dispatch_source> *_serviceTimer;
    double _graceTime;
    NSObject<OS_dispatch_source> *_graceTimer;
    NSUUID *_requestUUID;
    id _remoteContextInterface;
    _Bool _errorBlockCalled;
    CDUnknownBlockType _errorBlock;
    NSExtension *_extension;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
- (void)requestEnded;
- (void)endRequest;
- (CDStruct_a70f6672)beginRequestForHostContext:(Class)arg1 XPCInterface:(id)arg2;
- (void)beginRequestForHostContext:(Class)arg1 XPCInterface:(id)arg2 executionBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithExtension:(id)arg1 queue:(id)arg2;
- (id)initWithExtension:(id)arg1 queue:(id)arg2 serviceTime:(double)arg3 graceTime:(double)arg4;

@end

