//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBGestureRootSwitcherModifier.h>

@class SBSwitcherModifier;

@interface SBHomeGestureRootSwitcherModifier : SBGestureRootSwitcherModifier
{
    SBSwitcherModifier *_multitaskingModifier;
}

- (void).cxx_destruct;
- (id)_newMultitaskingModifier;
- (_Bool)wantsAsynchronousSurfaceRetentionAssertion;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (long long)gestureType;
- (id)initWithStartingEnvironmentMode:(long long)arg1 multitaskingModifier:(id)arg2;

@end

