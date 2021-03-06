//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceServices/VSSpeechConnectionDelegate-Protocol.h>

@class NSMutableDictionary, NSString, NSUUID, VSSpeechConnection;
@protocol OS_dispatch_queue, VSSpeechSynthesizerDelegate;

@interface VSSpeechSynthesizer : NSObject <VSSpeechConnectionDelegate>
{
    NSString *_clientBundleIdentifier;
    NSUUID *_accessoryID;
    unsigned int _audioSessionID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    VSSpeechConnection *_xpcConnection;
    NSString *_identifier;
    struct {
        unsigned int delegateStart:1;
        unsigned int delegateFinish:1;
        unsigned int delegateFinishWithPhonemesSpoken:1;
        unsigned int delegatePause:1;
        unsigned int delegateContinue:1;
        unsigned int delegateWillSpeak:1;
        unsigned int delegateStartWithRequest:1;
        unsigned int delegateFinishWithRequest:1;
        unsigned int delegateFinishWithPhonemesSpokenWithRequest:1;
        unsigned int delegateSuccessWithInstrumentMetrics:1;
        unsigned int delegatePauseWithRequest:1;
        unsigned int delegateContinueWithRequest:1;
        unsigned int delegateWillSpeakWithRequest:1;
        unsigned int delegateStreamSynthesisAudioData:1;
        unsigned int willUseInput:1;
    } _synthesizerFlags;
    float _rate;
    float _pitch;
    float _volume;
    id <VSSpeechSynthesizerDelegate> _delegate;
    NSString *_voice;
    NSString *_language;
    NSMutableDictionary *_durationRequests;
}

+ (id)characterClassCountForUtterance:(id)arg1 language:(id)arg2;
+ (id)sharedInstance;
+ (void)stopPlayingVoicePreview;
+ (_Bool)playVoicePreviewForLanguageCode:(id)arg1 voiceName:(id)arg2 previewType:(long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (_Bool)playVoicePreviewForLanguageCode:(id)arg1 voiceName:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)playVoicePreviewForLanguageCode:(id)arg1 gender:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)_getVoiceResourceForLanguage:(id)arg1;
+ (id)validateAudioCachingRequest:(id)arg1;
+ (id)validateAudioRequest:(id)arg1;
+ (id)validateRequest:(id)arg1;
+ (id)validatePrewarmRequest:(id)arg1;
+ (id)errorWithReason:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *durationRequests; // @synthesize durationRequests=_durationRequests;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *voice; // @synthesize voice=_voice;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) float pitch; // @synthesize pitch=_pitch;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(nonatomic) __weak id <VSSpeechSynthesizerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2;
- (id)availableLanguageCodes;
- (id)availableVoicesForLanguageCode:(id)arg1;
- (void)getVoiceInfoForLanguageCode:(id)arg1 name:(id)arg2 footprint:(long long)arg3 gender:(long long)arg4 type:(long long)arg5 reply:(CDUnknownBlockType)arg6;
- (void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)getAutoDownloadedVoiceAssets:(CDUnknownBlockType)arg1;
- (void)triggerCellularDownloadedVoiceAssets:(id)arg1;
- (void)setAutoDownloadedVoiceAssets:(id)arg1;
- (void)getVoiceResourceForLanguage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getLocalVoiceResources:(CDUnknownBlockType)arg1;
- (void)getLocalVoiceAssetsForLanguage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getLocalVoiceAssets:(CDUnknownBlockType)arg1;
- (void)cleanUnusedAssets:(CDUnknownBlockType)arg1;
- (void)endAudioPowerUpdate;
- (void)beginAudioPowerUpdateWithReply:(CDUnknownBlockType)arg1;
- (void)killDaemon;
- (void)invokeDaemon:(CDUnknownBlockType)arg1;
- (void)cancelDownloads:(CDUnknownBlockType)arg1;
- (void)forwardStreamObject:(id)arg1;
- (_Bool)continueSpeakingWithError:(id *)arg1;
- (void)useSpecificAudioSession:(unsigned int)arg1;
- (void)useSharedAudioSession:(_Bool)arg1;
- (void)getLogToFile:(CDUnknownBlockType)arg1;
- (void)setLogToFile:(_Bool)arg1;
- (void)connection:(id)arg1 invalidatedWithError:(id)arg2;
- (void)connection:(id)arg1 presynthesizedAudioRequest:(id)arg2 successWithInstrumentMetrics:(id)arg3 error:(id)arg4;
- (void)connection:(id)arg1 presynthesizedAudioRequest:(id)arg2 didStopAtEnd:(_Bool)arg3 error:(id)arg4;
- (void)connection:(id)arg1 presynthesizedAudioRequestDidStart:(id)arg2;
- (void)connection:(id)arg1 synthesisRequest:(id)arg2 didFinishWithInstrumentMetrics:(id)arg3 error:(id)arg4;
- (void)connection:(id)arg1 speechRequest:(id)arg2 didGenerateAudioChunk:(id)arg3;
- (void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(long long)arg3 inRange:(struct _NSRange)arg4;
- (void)connection:(id)arg1 speechRequest:(id)arg2 didReceiveTimingInfo:(id)arg3;
- (void)connection:(id)arg1 speechRequest:(id)arg2 successWithInstrumentMetrics:(id)arg3;
- (void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(_Bool)arg3 phonemesSpoken:(id)arg4 error:(id)arg5;
- (void)connection:(id)arg1 speechRequestDidContinue:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidPause:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidStart:(id)arg2;
- (void)setMaintainInactivePersistentConnection:(_Bool)arg1;
- (void)setMaintainPersistentConnection:(_Bool)arg1;
- (void)estimateDurationOfRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (double)estimateDurationOfRequest:(id)arg1;
- (id)_continueSpeakingRequest;
- (float)maximumRate;
- (float)minimumRate;
- (id)speechString;
- (_Bool)isSystemSpeaking;
- (_Bool)isSpeaking;
- (_Bool)pauseSpeakingAtNextBoundary:(long long)arg1 synchronously:(_Bool)arg2 error:(id *)arg3;
- (_Bool)stopSpeakingPresynthesizedAudioSynchronously:(_Bool)arg1 error:(id *)arg2;
- (_Bool)stopSpeakingAtNextBoundary:(long long)arg1 synchronously:(_Bool)arg2 error:(id *)arg3;
- (void)cancelAudioRequest:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (id)cachePresynthesizedAudioRequest:(id)arg1;
- (id)startSpeakingPresynthesizedAudioRequest:(id)arg1;
- (id)startSpeakingRequest:(id)arg1;
- (id)startSynthesizingRequest:(id)arg1;
- (id)_pauseSpeakingRequestAtNextBoundary:(long long)arg1 synchronously:(_Bool)arg2;
- (id)_stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(_Bool)arg3;
- (id)_stopSpeakingPresynthesizedAudioRequest:(id)arg1 synchronously:(_Bool)arg2;
- (void)_setDelegate:(id)arg1;
- (_Bool)queryPhaticCapability:(id)arg1;
- (id)prewarmIfNeededWithRequest:(id)arg1;
- (id)initForInputFeedback;
- (id)initWithAccessoryID:(id)arg1;
- (id)init;
- (void)stopPlayingVoicePreview;
- (void)playVoicePreviewForLanguageCode:(id)arg1 voiceName:(id)arg2 previewType:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)playVoicePreviewForLanguageCode:(id)arg1 gender:(long long)arg2 completion:(CDUnknownBlockType)arg3;

@end

