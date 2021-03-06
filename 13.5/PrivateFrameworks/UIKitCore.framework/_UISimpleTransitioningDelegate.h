//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UINavigationControllerDelegate-Protocol.h>
#import <UIKitCore/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString;
@protocol UIViewControllerAnimatedTransitioning;

__attribute__((visibility("hidden")))
@interface _UISimpleTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate>
{
    id <UIViewControllerAnimatedTransitioning> _animator;
    _Bool __suppressCrossFadeNavigationBarAnimation;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setSuppressCrossFadeNavigationBarAnimation:) _Bool _suppressCrossFadeNavigationBarAnimation; // @synthesize _suppressCrossFadeNavigationBarAnimation=__suppressCrossFadeNavigationBarAnimation;
- (_Bool)_navigationControllerShouldCrossFadeNavigationBar:(id)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)initWithAnimator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

