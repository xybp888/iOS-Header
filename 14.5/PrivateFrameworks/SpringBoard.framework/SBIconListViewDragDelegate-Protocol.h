//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBIconListView, SBIconView, UIDragItem, UIDropProposal, UITargetedDragPreview;
@protocol UIDragAnimating, UIDropSession, UIViewSpringAnimationBehaviorDescribing;

@protocol SBIconListViewDragDelegate <NSObject>
- (id <UIViewSpringAnimationBehaviorDescribing>)iconListView:(SBIconListView *)arg1 customSpringAnimationBehaviorForDroppingItem:(UIDragItem *)arg2;
- (void)iconListView:(SBIconListView *)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(SBIconView *)arg2;
- (_Bool)iconListView:(SBIconListView *)arg1 shouldAllowSpringLoadedInteractionForIconDropSession:(id <UIDropSession>)arg2 onIconView:(SBIconView *)arg3;
- (void)iconListView:(SBIconListView *)arg1 iconDragItem:(UIDragItem *)arg2 willAnimateDropWithAnimator:(id <UIDragAnimating>)arg3;
- (UITargetedDragPreview *)iconListView:(SBIconListView *)arg1 previewForDroppingIconDragItem:(UIDragItem *)arg2 proposedPreview:(UITargetedDragPreview *)arg3;
- (void)iconListView:(SBIconListView *)arg1 willUseIconView:(SBIconView *)arg2 forDroppingIconDragItem:(UIDragItem *)arg3;
- (void)iconListView:(SBIconListView *)arg1 performIconDrop:(id <UIDropSession>)arg2;
- (void)iconListView:(SBIconListView *)arg1 iconDropSessionDidExit:(id <UIDropSession>)arg2;
- (void)iconListView:(SBIconListView *)arg1 iconDropSession:(id <UIDropSession>)arg2 didPauseAtLocation:(struct CGPoint)arg3;
- (UIDropProposal *)iconListView:(SBIconListView *)arg1 iconDropSessionDidUpdate:(id <UIDropSession>)arg2;
- (void)iconListView:(SBIconListView *)arg1 iconDropSessionDidEnter:(id <UIDropSession>)arg2;
- (_Bool)iconListView:(SBIconListView *)arg1 canHandleIconDropSession:(id <UIDropSession>)arg2;
@end

