//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKColoredBalloonView.h>

#import <ChatKit/CKAudioBalloonView-Protocol.h>
#import <ChatKit/CKBalloonVibrancy-Protocol.h>

@class CKAudioProgressView, CKWaveformProgressView, NSString, UILabel;

@interface CKAudioBalloonView : CKColoredBalloonView <CKBalloonVibrancy, CKAudioBalloonView>
{
    _Bool _playing;
    _Bool _played;
    double _time;
    double _duration;
    UILabel *_timeLabel;
    CKAudioProgressView *_progressView;
    CKWaveformProgressView *_waveformProgressView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKWaveformProgressView *waveformProgressView; // @synthesize waveformProgressView=_waveformProgressView;
@property(retain, nonatomic) CKAudioProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic, getter=isPlayed) _Bool played; // @synthesize played=_played;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double time; // @synthesize time=_time;
- (void)vibrantContainerWillReparentNonVibrantSubviews:(id)arg1;
- (id)nonVibrantSubViews;
- (void)updateProgress;
- (void)updateTimeString;
@property(nonatomic) long long waveformContentMode;
@property(nonatomic, getter=isControlHidden) _Bool controlHidden;
- (void)setWaveform:(id)arg1;
- (void)prepareForReuse;
- (void)prepareForDisplay;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)addOverlaySubview:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)configureForComposition:(id)arg1;
- (void)configureForMessagePart:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

