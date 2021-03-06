//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSCopying-Protocol.h>

@interface SKTransition : NSObject <NSCopying>
{
    struct SKCTransitionNode *_skcTransitionNode;
}

+ (id)transitionWithCIFilter:(id)arg1 duration:(double)arg2;
+ (id)doorwayWithDuration:(double)arg1;
+ (id)doorsCloseVerticalWithDuration:(double)arg1;
+ (id)doorsCloseHorizontalWithDuration:(double)arg1;
+ (id)doorsOpenVerticalWithDuration:(double)arg1;
+ (id)doorsOpenHorizontalWithDuration:(double)arg1;
+ (id)pushRightWithDuration:(double)arg1;
+ (id)pushLeftWithDuration:(double)arg1;
+ (id)pushDownWithDuration:(double)arg1;
+ (id)pushUpWithDuration:(double)arg1;
+ (id)moveInRightWithDuration:(double)arg1;
+ (id)moveInLeftWithDuration:(double)arg1;
+ (id)moveInDownWithDuration:(double)arg1;
+ (id)moveInUpWithDuration:(double)arg1;
+ (id)revealRightWithDuration:(double)arg1;
+ (id)revealLeftWithDuration:(double)arg1;
+ (id)revealDownWithDuration:(double)arg1;
+ (id)revealUpWithDuration:(double)arg1;
+ (id)flipVerticalWithDuration:(double)arg1;
+ (id)flipHorizontalWithDuration:(double)arg1;
+ (id)crossFadeWithDuration:(double)arg1;
+ (id)fadeWithColor:(id)arg1 duration:(double)arg2;
+ (id)fadeWithDuration:(double)arg1;
+ (id)pushWithDirection:(long long)arg1 duration:(double)arg2;
+ (id)moveInWithDirection:(long long)arg1 duration:(double)arg2;
+ (id)revealWithDirection:(long long)arg1 duration:(double)arg2;
- (void)dealloc;
- (id)_filter;
- (struct SKCTransitionNode *)_backingNode;
- (double)_duration;
@property(nonatomic) _Bool pausesOutgoingScene;
@property(nonatomic) _Bool pausesIncomingScene;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

