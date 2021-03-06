//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIFeedback.h>

#import <UIKitCore/_UIFeedbackContinuousPlayable-Protocol.h>

@class NSString;

@interface _UIContinuousFeedback : _UIFeedback <_UIFeedbackContinuousPlayable>
{
    double _duration;
    long long _type;
}

+ (id)continuousFeedbackForType:(long long)arg1;
+ (id)type;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)_debugDictionary;
- (void)_playedAtTime:(double)arg1 engine:(id)arg2;
- (double)_effectiveDuration;
- (unsigned long long)_effectiveEventType;
- (id)_playableProtocol;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(readonly) Class superclass;

@end

