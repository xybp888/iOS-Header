//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class AFSpeechAudioAnalytics, AFSpeechRecognition;

@interface AFSpeechPackage : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isFinal;
    AFSpeechRecognition *_recognition;
    AFSpeechRecognition *_rawRecognition;
    AFSpeechAudioAnalytics *_audioAnalytics;
    double _utteranceStart;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) double utteranceStart; // @synthesize utteranceStart=_utteranceStart;
@property(readonly, nonatomic) _Bool isFinal; // @synthesize isFinal=_isFinal;
@property(readonly, nonatomic) AFSpeechAudioAnalytics *audioAnalytics; // @synthesize audioAnalytics=_audioAnalytics;
@property(readonly, nonatomic) AFSpeechRecognition *rawRecognition; // @synthesize rawRecognition=_rawRecognition;
@property(readonly, nonatomic) AFSpeechRecognition *recognition; // @synthesize recognition=_recognition;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecognition:(id)arg1 rawRecognition:(id)arg2 audioAnalytics:(id)arg3 isFinal:(_Bool)arg4 utteranceStart:(double)arg5;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

