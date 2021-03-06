//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriActivation/SASSystemState.h>

@class SiriContextOverride;

@interface SASOverriddenSystemState : SASSystemState
{
    SASSystemState *_systemState;
    SiriContextOverride *_contextOverride;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SiriContextOverride *contextOverride; // @synthesize contextOverride=_contextOverride;
@property(retain, nonatomic) SASSystemState *systemState; // @synthesize systemState=_systemState;
- (_Bool)siriIsSupported;
- (_Bool)siriIsRestricted;
- (_Bool)siriIsEnabled;
- (_Bool)isConnectedToTrustedCarPlay;
- (_Bool)isConnectedToCarPlay;
- (_Bool)carDNDActive;
- (_Bool)accessibilityShortcutEnabled;
- (_Bool)smartCoverClosed;
- (_Bool)isPad;
- (_Bool)pocketStateShouldPreventVoiceTrigger;
- (_Bool)deviceIsPasscodeLocked;
- (_Bool)deviceIsBlocked;
- (_Bool)hasUnlockedSinceBoot;
- (id)currentSpokenLanguageCode;
- (void)setLockStateMonitor:(id)arg1;
- (id)lockStateMonitor;
- (id)initWithSystemState:(id)arg1 contextOverride:(id)arg2;

@end

