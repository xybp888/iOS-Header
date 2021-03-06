//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UICollectionViewDropCoordinator-Protocol.h>

@class NSIndexPath, NSString, UICollectionViewDropProposal, UIDragItem, UIDragPreviewTarget;
@protocol UIDropSession, _UICollectionViewDropPlaceholderContext;

@protocol _UICollectionViewDropCoordinator <UICollectionViewDropCoordinator>
@property(readonly, nonatomic) id <UIDropSession> dropSession;
@property(readonly, nonatomic) UICollectionViewDropProposal *dropProposal;
- (void)dropToTarget:(UIDragPreviewTarget *)arg1 forDragItem:(UIDragItem *)arg2;
- (id <_UICollectionViewDropPlaceholderContext>)dropToPlaceholderInsertedAtIndexPath:(NSIndexPath *)arg1 reuseIdentifier:(NSString *)arg2 forDragItem:(UIDragItem *)arg3 cellUpdateHandler:(void (^)(UICollectionViewCell *))arg4;
- (void)dropToItemAtIndexPath:(NSIndexPath *)arg1 forDragItem:(UIDragItem *)arg2;
@end

