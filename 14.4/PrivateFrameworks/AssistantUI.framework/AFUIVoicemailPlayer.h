//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantUI/AFUIAudioPlayer.h>

@class VMVoicemail, VMVoicemailManager;

@interface AFUIVoicemailPlayer : AFUIAudioPlayer
{
    VMVoicemailManager *_voicemailManager;
    VMVoicemail *_voicemailObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic, getter=_voicemailObject, setter=_setVoicemailObject:) VMVoicemail *voicemailObject; // @synthesize voicemailObject=_voicemailObject;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (unsigned long long)_audioOptions;
- (id)_audioCategory;
- (id)_audioURL;
- (void)_updateVoicemailPlayedState:(id)arg1 finished:(_Bool)arg2;
- (long long)_voicemailID;
- (id)_voicemailManager;
- (void)setPlaybackCommand:(id)arg1;

@end

