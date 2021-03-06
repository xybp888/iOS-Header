//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NavigationChromeViewItem;
@protocol UIViewControllerAnimatedTransitioning;

__attribute__((visibility("hidden")))
@interface NavigationChromeTransitionContext : NSObject
{
    NavigationChromeViewItem *_toItem;
    NavigationChromeViewItem *_fromItem;
    id <UIViewControllerAnimatedTransitioning> _customTransition;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <UIViewControllerAnimatedTransitioning> customTransition; // @synthesize customTransition=_customTransition;
@property(retain, nonatomic) NavigationChromeViewItem *fromItem; // @synthesize fromItem=_fromItem;
@property(retain, nonatomic) NavigationChromeViewItem *toItem; // @synthesize toItem=_toItem;
- (id)description;

@end

