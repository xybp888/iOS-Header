//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIWindowAnimationController.h>

__attribute__((visibility("hidden")))
@interface _UIHostedWindowAnimationController : _UIWindowAnimationController
{
    CDUnknownBlockType _transitionActions;
    double _duration;
}

- (void).cxx_destruct;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) CDUnknownBlockType transitionActions; // @synthesize transitionActions=_transitionActions;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end

