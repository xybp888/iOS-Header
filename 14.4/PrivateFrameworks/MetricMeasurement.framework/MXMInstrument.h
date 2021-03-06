//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL;
@protocol MXMInstrumentDelegate, OS_dispatch_queue;

@interface MXMInstrument : NSObject
{
    _Bool _didQuiesce;
    NSArray *_instrumentals;
    NSURL *_performanceTraceFileURL;
    NSString *_performanceTraceFileSandboxExtensionToken;
    NSDictionary *_performanceTestConfiguration;
    id <MXMInstrumentDelegate> _delegate;
    CDStruct_33f31899 *_currentIteration;
    NSObject<OS_dispatch_queue> *_instrumentalsQueue;
}

+ (id)instrumentWithInstrumentals:(id)arg1;
+ (id)activeInstrument;
+ (void)load;
- (void).cxx_destruct;
@property(readonly) NSObject<OS_dispatch_queue> *instrumentalsQueue; // @synthesize instrumentalsQueue=_instrumentalsQueue;
@property CDStruct_33f31899 *currentIteration; // @synthesize currentIteration=_currentIteration;
@property(readonly) _Bool didQuiesce; // @synthesize didQuiesce=_didQuiesce;
@property(retain, nonatomic) id <MXMInstrumentDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSDictionary *performanceTestConfiguration; // @synthesize performanceTestConfiguration=_performanceTestConfiguration;
@property(readonly) NSString *performanceTraceFileSandboxExtensionToken; // @synthesize performanceTraceFileSandboxExtensionToken=_performanceTraceFileSandboxExtensionToken;
@property(readonly) NSURL *performanceTraceFileURL; // @synthesize performanceTraceFileURL=_performanceTraceFileURL;
@property(readonly, nonatomic) NSArray *instrumentals; // @synthesize instrumentals=_instrumentals;
- (void)dealloc;
- (void)quiesceDidUpdate:(_Bool)arg1 error:(id)arg2;
- (id)_validOptionKeys;
- (id)_defaultValueWithOption:(id)arg1;
- (id)_valueWithOption:(id)arg1 userOptions:(id)arg2;
- (id)_makeInstrumentalsForIteration:(id)arg1 shouldCopy:(_Bool)arg2;
- (id)measureAutomatically:(unsigned long long)arg1 options:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)measureAutomatically:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)measureWithOptions:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)measureBlock:(CDUnknownBlockType)arg1;
- (id)stopWithError:(id *)arg1;
- (id)stop;
- (_Bool)startWithError:(id *)arg1;
- (void)start;
- (id)_transitionWithState:(unsigned long long)arg1 iteration:(const CDStruct_33f31899 *)arg2 instrumentals:(id)arg3;
- (void)_setupAndRunWithIteration:(CDStruct_33f31899 *)arg1 spawnThread:(_Bool)arg2 attrs:(struct _opaque_pthread_attr_t *)arg3 pthread:(struct _opaque_pthread_t **)arg4 returnCode:(unsigned long long *)arg5;
- (void)_prepareIteration:(CDStruct_33f31899 *)arg1 options:(id)arg2 instrumentals:(id)arg3 errors:(id)arg4;
- (id)initWithInstrumentals:(id)arg1;
@property _Bool active;

@end

