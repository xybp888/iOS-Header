//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PGCommand : NSObject
{
    NSDictionary *_dictionaryRepresentation;
}

+ (id)commandForFaceTimeAction:(long long)arg1 associatedBoolValue:(_Bool)arg2;
+ (id)commandForFaceTimeAction:(long long)arg1;
+ (id)commandForSwitchCamera;
+ (id)commandForSetMicrophoneMuted:(_Bool)arg1;
+ (id)commandForSetCameraEnabled:(_Bool)arg1;
+ (id)commandForToggleZoom;
+ (id)commandForSendActionButtonTapped;
+ (id)commandForToggleControlsVisibility;
+ (id)commandForRestoreFromPIP;
+ (id)commandForCancelPIP;
+ (id)commandForSystemAction:(long long)arg1;
+ (id)commandForSkipByInterval:(double)arg1;
+ (id)commandForSkipPreroll;
+ (id)commandForSkipToLive;
+ (id)commandForEndInterruptionWithShouldResumeSuggestion:(_Bool)arg1;
+ (id)commandForBeginInterruption;
+ (id)commandForSetSuspended:(_Bool)arg1;
+ (id)commandForSetPlaying:(_Bool)arg1;
+ (id)commandForSetMuted:(_Bool)arg1;
+ (id)commandForPlaybackAction:(long long)arg1 associatedDoubleValue:(double)arg2;
+ (id)commandForPlaybackAction:(long long)arg1 associatedBoolValue:(_Bool)arg2;
+ (id)commandForPlaybackAction:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation; // @synthesize dictionaryRepresentation=_dictionaryRepresentation;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)appendDescriptionForKey:(long long)arg1 value:(id)arg2 toBuilder:(id)arg3;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
@property(readonly, nonatomic) double associatedDoubleValue;
@property(readonly, nonatomic) _Bool associatedBoolValue;
@property(readonly, nonatomic) long long faceTimeAction;
@property(readonly, nonatomic) long long systemAction;
@property(readonly, nonatomic) long long playbackAction;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

