//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class BSUIAnimationFactory, SBSceneView;

@protocol SBSceneViewDelegate <NSObject>

@optional
- (void)sceneView:(SBSceneView *)arg1 changedPreferredStatusBarStyleTo:(long long)arg2;
- (BSUIAnimationFactory *)animationFactoryForImplicitTransitionFromMode:(long long)arg1 toMode:(long long)arg2 defaultFactory:(BSUIAnimationFactory *)arg3;
@end

