//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIPresentationController, UIView, UIViewController;
@protocol _UIClickPresentationTransition;

@interface _UIClickPresentation : NSObject
{
    UIViewController *_viewController;
    UIPresentationController *_presentationController;
    UIView *_customContainerView;
    UIView *_customViewForTouchContinuation;
    id <_UIClickPresentationTransition> _appearanceTransition;
    id <_UIClickPresentationTransition> _disappearanceTransition;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <_UIClickPresentationTransition> disappearanceTransition; // @synthesize disappearanceTransition=_disappearanceTransition;
@property(retain, nonatomic) id <_UIClickPresentationTransition> appearanceTransition; // @synthesize appearanceTransition=_appearanceTransition;
@property(retain, nonatomic) UIView *customViewForTouchContinuation; // @synthesize customViewForTouchContinuation=_customViewForTouchContinuation;
@property(retain, nonatomic) UIView *customContainerView; // @synthesize customContainerView=_customContainerView;
@property(readonly, nonatomic) UIPresentationController *presentationController; // @synthesize presentationController=_presentationController;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (id)initWithPresentedViewController:(id)arg1 presentationController:(id)arg2;

@end

