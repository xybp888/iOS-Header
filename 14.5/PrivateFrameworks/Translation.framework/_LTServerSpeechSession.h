//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Translation/_LTSpeechTranslationDelegate-Protocol.h>

@class NSError, NSString, NSUUID, _LTHybridEndpointer, _LTLanguageDetector;
@protocol OS_dispatch_queue, _LTSpeechTranslationDelegate, _LTTranslationEngine;

__attribute__((visibility("hidden")))
@interface _LTServerSpeechSession : NSObject <_LTSpeechTranslationDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _expectFinalLidResult;
    _Bool _sentFinalLidResult;
    _Bool _translationFinished;
    NSError *_translationError;
    NSUUID *_sessionID;
    id <_LTTranslationEngine> _engine;
    CDUnknownBlockType _completionHandler;
    _LTLanguageDetector *_languageDetector;
    _LTHybridEndpointer *_endpointer;
    id <_LTSpeechTranslationDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <_LTSpeechTranslationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _LTHybridEndpointer *endpointer; // @synthesize endpointer=_endpointer;
@property(readonly, nonatomic) _LTLanguageDetector *languageDetector; // @synthesize languageDetector=_languageDetector;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) id <_LTTranslationEngine> engine; // @synthesize engine=_engine;
@property(retain, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
- (void)translationDidFinishWithError:(id)arg1;
- (void)translatorDidTranslate:(id)arg1;
- (void)speechRecognitionResult:(id)arg1;
- (void)serverEndpointerFeatures:(id)arg1 locale:(id)arg2;
- (void)hybridEndpointerFoundEndpoint;
- (void)languageDetectionCompleted;
- (void)languageDetectionResult:(id)arg1;
- (void)delegateTranslationDidFinishWithError:(id)arg1;
- (void)cancel;
- (void)endAudio;
- (void)addSpeechAudioData:(id)arg1;
- (void)startTextToSpeechTranslationWithContext:(id)arg1 text:(id)arg2;
- (void)startSpeechTranslationWithContext:(id)arg1;
- (id)initWithEngine:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

