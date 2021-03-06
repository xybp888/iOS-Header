//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Translation/_LTSpeechTranslationDelegate-Protocol.h>

@class NSMutableDictionary, NSString, NSURL, _LTRateLimiter, _LTSafariLatencyLoggingRequest, _LTTranslator;
@protocol OS_dispatch_queue, _LTTranslationService;

@interface _LTTranslationSession : NSObject <_LTSpeechTranslationDelegate>
{
    NSMutableDictionary *_outstandingRequests;
    _LTSafariLatencyLoggingRequest *_logging;
    NSString *_sessionID;
    NSURL *_URL;
    _LTTranslator *_translator;
    id <_LTTranslationService> _service;
    _LTRateLimiter *_rateLimiter;
    NSObject<OS_dispatch_queue> *_translationQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *translationQueue; // @synthesize translationQueue=_translationQueue;
@property(retain, nonatomic) _LTRateLimiter *rateLimiter; // @synthesize rateLimiter=_rateLimiter;
@property(retain, nonatomic) id <_LTTranslationService> service; // @synthesize service=_service;
@property(retain, nonatomic) _LTTranslator *translator; // @synthesize translator=_translator;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)paragraphTranslation:(id)arg1 result:(id)arg2 error:(id)arg3;
- (void)markFirstParagraphComplete;
- (void)markPageComplete;
- (void)markPageLoaded;
- (void)provideFeedback:(id)arg1;
- (void)translate:(id)arg1;
- (void)_ensureServiceConnection:(CDUnknownBlockType)arg1;
- (id)initWithTranslator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

