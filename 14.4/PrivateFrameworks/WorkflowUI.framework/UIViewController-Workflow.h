//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class WFDrawerController, WFDrawerItem;

@interface UIViewController (Workflow)
- (void)wf_applyContentLayoutMarginsToNavigationController;
@property(readonly, nonatomic) struct UIEdgeInsets wf_contentLayoutMargins;
- (_Bool)wf_showSearchBarAboveScrollView:(id)arg1;
@property(readonly, nonatomic) WFDrawerItem *wf_drawerItem; // @dynamic wf_drawerItem;
- (void)wf_setDrawerItem:(id)arg1;
@property(readonly, nonatomic) __weak WFDrawerController *wf_drawerController; // @dynamic wf_drawerController;
- (void)wf_setDrawerController:(id)arg1;
@end

