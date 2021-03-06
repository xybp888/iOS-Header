//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, PUImportOneUpTransitionItem, UIViewController;
@protocol UIViewControllerContextTransitioning;

@protocol PUImportOneUpTransitioning
- (void)didTransitionFromViewController:(UIViewController *)arg1 toViewController:(UIViewController *)arg2 withTransitionItems:(NSArray *)arg3;
- (void)willTransitionFromViewController:(UIViewController *)arg1 toViewController:(UIViewController *)arg2 withTransitionItems:(NSArray *)arg3;
- (void)prepareTransitionItemViewForDestination:(PUImportOneUpTransitionItem *)arg1;
- (struct CGRect)targetFrameForTransitionItem:(PUImportOneUpTransitionItem *)arg1;
- (NSArray *)transitionItemsForContext:(id <UIViewControllerContextTransitioning>)arg1;
@end

