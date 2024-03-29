//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSAnimationSettings;
@protocol _UIBasicAnimationFactory;

@interface UIStatusBarAnimationParameters : NSObject
{
    double _duration;
    double _delay;
    long long _curve;
    id <_UIBasicAnimationFactory> _animationFactory;
    _Bool _skipFencing;
    double _startTime;
}

+ (void)animateWithParameters:(id)arg1 fromCurrentState:(_Bool)arg2 frameInterval:(double)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)animateWithParameters:(id)arg1 fromCurrentState:(_Bool)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)animateWithParameters:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)fencingAnimation;
- (void).cxx_destruct;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) id <_UIBasicAnimationFactory> animationFactory; // @synthesize animationFactory=_animationFactory;
@property(nonatomic) _Bool skipFencing; // @synthesize skipFencing=_skipFencing;
@property(nonatomic) long long curve; // @synthesize curve=_curve;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) BSAnimationSettings *bsAnimationSettings;
- (_Bool)shouldAnimate;
- (id)initWithEmptyParameters;
- (id)initWithDefaultParameters;
- (id)init;

@end

