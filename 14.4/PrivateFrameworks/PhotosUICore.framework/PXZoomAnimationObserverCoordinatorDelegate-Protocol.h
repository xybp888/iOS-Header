//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXZoomAnimationObserverCoordinator;
@protocol PXZoomAnimationContext;

@protocol PXZoomAnimationObserverCoordinatorDelegate <NSObject>

@optional
- (void)zoomAnimationObserverCoordinator:(PXZoomAnimationObserverCoordinator *)arg1 animationDidEndWithContext:(id <PXZoomAnimationContext>)arg2;
- (void)zoomAnimationObserverCoordinator:(PXZoomAnimationObserverCoordinator *)arg1 animationWillBeginWithContext:(id <PXZoomAnimationContext>)arg2;
@end

