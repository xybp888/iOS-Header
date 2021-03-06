//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class CSAudioFileReader, NSData, NSError;

@protocol CSAudioFileReaderDelegate <NSObject>
- (void)audioFileReaderDidStopRecording:(CSAudioFileReader *)arg1 forReason:(long long)arg2;
- (void)audioFileReaderDidStartRecording:(CSAudioFileReader *)arg1 successfully:(_Bool)arg2 error:(NSError *)arg3;
- (void)audioFileReaderBufferAvailable:(CSAudioFileReader *)arg1 buffer:(NSData *)arg2 atTime:(unsigned long long)arg3;
@end

