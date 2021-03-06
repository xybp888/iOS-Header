//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableSet;

__attribute__((visibility("hidden")))
@interface QLImageAnimationTimer : NSObject
{
    NSMutableSet *_observers;
    CADisplayLink *_displayLink;
}

+ (id)sharedTimer;
- (void).cxx_destruct;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) NSMutableSet *observers; // @synthesize observers=_observers;
- (void)animationTimerFired:(id)arg1;
- (void)removeAnimationTimerObserver:(id)arg1;
- (void)addAnimationTimerObserver:(id)arg1;
- (id)init;

@end

