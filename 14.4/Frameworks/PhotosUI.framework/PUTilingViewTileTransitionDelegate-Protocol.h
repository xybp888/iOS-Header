//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSArray, PUTileReattachmentContext, PUTileTransitionCoordinator, PUTilingDataSourceConverter, PUTilingLayout, PUTilingLayoutInvalidationContext, PUTilingLayoutTransitionContext, PUTilingView;
@protocol NSFastEnumeration;

@protocol PUTilingViewTileTransitionDelegate <NSObject>

@optional
- (_Bool)tilingViewCanBypass20069585Check:(PUTilingView *)arg1;
- (PUTileTransitionCoordinator *)tilingView:(PUTilingView *)arg1 tileTransitionCoordinatorForLayoutInvalidationContext:(PUTilingLayoutInvalidationContext *)arg2;
- (PUTileTransitionCoordinator *)tilingView:(PUTilingView *)arg1 tileTransitionCoordinatorForReattachedTileControllers:(id <NSFastEnumeration>)arg2 context:(PUTileReattachmentContext *)arg3;
- (PUTileTransitionCoordinator *)tilingView:(PUTilingView *)arg1 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect)arg2 toFrame:(struct CGRect)arg3 duration:(double)arg4;
- (PUTileTransitionCoordinator *)tilingView:(PUTilingView *)arg1 tileTransitionCoordinatorForUpdateWithItems:(NSArray *)arg2;
- (PUTilingDataSourceConverter *)tilingView:(PUTilingView *)arg1 dataSourceConverterForTransitionFromLayout:(PUTilingLayout *)arg2 toLayout:(PUTilingLayout *)arg3;
- (PUTileTransitionCoordinator *)tilingView:(PUTilingView *)arg1 tileTransitionCoordinatorForTransitionFromLayout:(PUTilingLayout *)arg2 toLayout:(PUTilingLayout *)arg3 withContext:(PUTilingLayoutTransitionContext *)arg4;
@end

