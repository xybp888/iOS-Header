//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPPlayButtonControl.h>

#import <LinkPresentation/LPStreamingAudioPlayerClient-Protocol.h>

@class LPStreamingAudioPlayer;

__attribute__((visibility("hidden")))
@interface LPStreamingAudioPlayButtonControl : LPPlayButtonControl <LPStreamingAudioPlayerClient>
{
    LPStreamingAudioPlayer *_player;
}

- (void).cxx_destruct;
- (void)buttonPressed:(id)arg1;
- (void)streamingAudioPlayerDidFailToPlay:(id)arg1;
- (void)streamingAudioPlayer:(id)arg1 didChangeProgress:(float)arg2;
- (void)streamingAudioPlayer:(id)arg1 didTransitionToState:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithAudio:(id)arg1 style:(id)arg2 theme:(id)arg3;

@end

