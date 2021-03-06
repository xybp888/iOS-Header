//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/NSObject-Protocol.h>

@protocol OFViewControllerTransitioningContext;

@protocol OFViewControllerInteractiveTransitioning <NSObject>
@property(readonly) _Bool tracksWithFinger;
- (void)makeCurrentTransitionInteractiveWithContext:(id <OFViewControllerTransitioningContext>)arg1 andProgress:(double)arg2;
- (void)endInteractiveTransitionWithContext:(id <OFViewControllerTransitioningContext>)arg1 transitionCompleted:(_Bool)arg2;
- (void)updateInteractiveTransitionWithContext:(id <OFViewControllerTransitioningContext>)arg1 andProgress:(double)arg2;
- (void)startInteractiveTransitionWithContext:(id <OFViewControllerTransitioningContext>)arg1;
@end

