//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBFloatingDockRootViewController, SBFolderController;
@protocol SBViewControllerTransitionCoordinator;

@protocol SBFloatingDockRootViewControllerDelegate <NSObject>
- (void)floatingDockRootViewController:(SBFloatingDockRootViewController *)arg1 floatingDockWantsToBePresented:(_Bool)arg2;
- (void)floatingDockRootViewController:(SBFloatingDockRootViewController *)arg1 willChangeToHeight:(double)arg2;

@optional
- (void)floatingDockRootViewControllerDidEndPresentationTransition:(SBFloatingDockRootViewController *)arg1;
- (void)floatingDockRootViewController:(SBFloatingDockRootViewController *)arg1 willPerformTransitionWithFolder:(SBFolderController *)arg2 presenting:(_Bool)arg3 withTransitionCoordinator:(id <SBViewControllerTransitionCoordinator>)arg4;
- (void)floatingDockRootViewController:(SBFloatingDockRootViewController *)arg1 modifyProgress:(double)arg2 interactive:(_Bool)arg3 completion:(void (^)(_Bool))arg4;
- (_Bool)floatingDockRootViewControllerShouldHandlePanGestureRecognizer:(SBFloatingDockRootViewController *)arg1;
@end

