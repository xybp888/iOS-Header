//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIFocusEnvironmentPrivate-Protocol.h>

@class UIFocusAnimationCoordinator, UIFocusUpdateContext, _UIFocusGroup;
@protocol UIFocusEnvironment, UIFocusItem, _UIFocusRegionContainer;

@protocol _UIFocusEnvironmentInternal <_UIFocusEnvironmentPrivate>

@optional
@property(readonly, nonatomic, getter=_focusMapContainer) __weak id <_UIFocusRegionContainer> focusMapContainer;
- (id <UIFocusItem>)_primaryFocusItemForFocusGroup:(_UIFocusGroup *)arg1;
- (void)_didUpdateFocusInContext:(UIFocusUpdateContext *)arg1 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg2;
- (void)_willUpdateFocusInContext:(UIFocusUpdateContext *)arg1 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg2;
- (_Bool)_shouldUpdateFocusInContext:(UIFocusUpdateContext *)arg1;
- (id <UIFocusEnvironment>)_overridingPreferredFocusEnvironment;
@end

