//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/VNRequestCancelling-Protocol.h>
#import <Vision/VNRequestWarming-Protocol.h>

@class VNObservationsCache, VNRequestPerformer, VNSession;

@interface VNPhotosRequestHandler : NSObject <VNRequestWarming, VNRequestCancelling>
{
    VNSession *_session;
    VNRequestPerformer *_requestPerformer;
    VNObservationsCache *_observationsCache;
    NSObject *modelContextObject;
    CDUnknownBlockType _burstAnalysisLoggingCallback;
}

+ (void)forcedCleanupWithOptions:(id)arg1;
+ (void)requestForcedCleanupWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestForcedCleanupWithOptions:(id)arg1;
+ (void)forcedCleanup;
+ (void)requestForcedCleanup;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType burstAnalysisLoggingCallback; // @synthesize burstAnalysisLoggingCallback=_burstAnalysisLoggingCallback;
@property(retain) NSObject *modelContextObject; // @synthesize modelContextObject;
- (void)cancelAllRequests;
- (_Bool)performRequests:(id)arg1 gatheredForensics:(id *)arg2 error:(id *)arg3;
- (_Bool)performRequests:(id)arg1 error:(id *)arg2;
- (_Bool)prepareForPerformingRequests:(id)arg1 error:(id *)arg2;
- (_Bool)prepareForPerformingRequestsOfClass:(id)arg1 error:(id *)arg2;
- (id)initWithSession:(id)arg1;
- (id)init;

@end

