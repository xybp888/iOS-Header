//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFDrawerAnimation : NSObject
{
    unsigned long long _type;
    union {
        struct {
            long long curve;
        } basic;
        struct {
            double mass;
            double stiffness;
            double damping;
            double initialVelocity;
        } spring;
        struct {
            double initialVelocity;
        } defaultSpring;
    } _typeParameters;
    double _duration;
    double _delay;
    WFDrawerAnimation *_coordinatedUnitAnimation;
}

+ (id)animationUsingDefaultSpringWithInitialVelocity:(double)arg1 delay:(double)arg2;
+ (id)animationWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(double)arg4 delay:(double)arg5;
+ (id)animationWithDuration:(double)arg1 curve:(long long)arg2 delay:(double)arg3;
+ (id)drawerReleaseAnimationWithInitialVelocity:(double)arg1;
- (void).cxx_destruct;
- (id)description;
- (void)applyWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) WFDrawerAnimation *coordinatedUnitAnimation;
- (id)initUsingDefaultSpringWithInitialVelocity:(double)arg1 delay:(double)arg2;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(double)arg4 delay:(double)arg5 calculateCoordinatedAnimation:(_Bool)arg6;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(double)arg4 delay:(double)arg5;
- (id)initWithDuration:(double)arg1 curve:(long long)arg2 delay:(double)arg3;

@end

