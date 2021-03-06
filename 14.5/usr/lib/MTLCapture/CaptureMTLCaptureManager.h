//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLCaptureManager.h>

#import <MTLCapture/CaptureMTLObject-Protocol.h>

@interface CaptureMTLCaptureManager : MTLCaptureManager <CaptureMTLObject>
{
    struct GTTraceContext *_traceContext;
    struct GTTraceStream *_traceStream;
}

- (id)newCaptureScopeWithCommandQueue:(id)arg1;
- (id)newCaptureScopeWithDevice:(id)arg1;
- (_Bool)isCapturing;
- (void)stopCapture;
- (void)startCaptureWithScope:(id)arg1;
- (void)startCaptureWithCommandQueue:(id)arg1;
- (void)startCaptureWithDevice:(id)arg1;
- (_Bool)startCaptureWithDescriptor:(id)arg1 error:(id *)arg2;
- (_Bool)supportsDestination:(long long)arg1;
- (void)dealloc;
- (id)initWithCaptureContext:(struct GTTraceContext *)arg1;
@property(readonly) struct GTTraceStream *traceStream;

// Remaining properties
@property(readonly) id baseObject;
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceContext *traceContext;

@end

