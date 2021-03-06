//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGAXResponder-Protocol.h>
#import <PhotosUICore/PXGViewDiagnosticsSource-Protocol.h>
#import <PhotosUICore/PXZoomablePhotosInteractionDelegate-Protocol.h>

@class NSString, PHPhotoLibrary, PXAssetReference, PXAssetsDataSourceCountsController, PXCuratedLibraryAssetsDataSourceManager, PXCuratedLibraryFooterController, PXCuratedLibraryLayout, PXCuratedLibraryVideoPlaybackController, PXCuratedLibraryViewModel, PXExtendedTraitCollection, PXGView, PXSectionedObjectReference, PXUIMediaProvider, PXZoomablePhotosInteraction;
@protocol PXCuratedLibraryEventTracker, PXGAXResponder;

@interface PXCuratedLibraryViewProvider : NSObject <PXGViewDiagnosticsSource, PXZoomablePhotosInteractionDelegate, PXChangeObserver, PXGAXResponder>
{
    id <PXGAXResponder> _axNextResponder;
    PHPhotoLibrary *_photoLibrary;
    PXExtendedTraitCollection *_extendedTraitCollection;
    PXGView *_gridView;
    PXCuratedLibraryLayout *_layout;
    PXCuratedLibraryViewModel *_viewModel;
    PXUIMediaProvider *_mediaProvider;
    PXCuratedLibraryAssetsDataSourceManager *_assetsDataSourceManager;
    PXCuratedLibraryVideoPlaybackController *_videoPlaybackController;
    PXAssetsDataSourceCountsController *_itemCountsController;
    PXCuratedLibraryFooterController *_footerController;
    id <PXCuratedLibraryEventTracker> _eventTracker;
    PXZoomablePhotosInteraction *_zoomablePhotosInteraction;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PXZoomablePhotosInteraction *zoomablePhotosInteraction; // @synthesize zoomablePhotosInteraction=_zoomablePhotosInteraction;
@property(readonly, nonatomic) id <PXCuratedLibraryEventTracker> eventTracker; // @synthesize eventTracker=_eventTracker;
@property(readonly, nonatomic) PXCuratedLibraryFooterController *footerController; // @synthesize footerController=_footerController;
@property(readonly, nonatomic) PXAssetsDataSourceCountsController *itemCountsController; // @synthesize itemCountsController=_itemCountsController;
@property(readonly, nonatomic) PXCuratedLibraryVideoPlaybackController *videoPlaybackController; // @synthesize videoPlaybackController=_videoPlaybackController;
@property(readonly, nonatomic) PXCuratedLibraryAssetsDataSourceManager *assetsDataSourceManager; // @synthesize assetsDataSourceManager=_assetsDataSourceManager;
@property(readonly, nonatomic) PXUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) PXCuratedLibraryLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) PXGView *gridView; // @synthesize gridView=_gridView;
@property(readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection; // @synthesize extendedTraitCollection=_extendedTraitCollection;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(nonatomic) __weak id <PXGAXResponder> axNextResponder; // @synthesize axNextResponder=_axNextResponder;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (struct UIEdgeInsets)anchorPaddingForCurrentZoomLevel;
- (void)selectionManager:(id)arg1 revealObjectAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (struct PXSimpleIndexPath)selectionManager:(id)arg1 indexPathClosestToIndexPath:(struct PXSimpleIndexPath)arg2 inDirection:(unsigned long long)arg3;
- (id)selectionManager:(id)arg1 indexPathsBetweenIndexPath:(struct PXSimpleIndexPath)arg2 andIndexPath:(struct PXSimpleIndexPath)arg3 inDirection:(unsigned long long)arg4;
- (long long)selectionBasisForSelectionManager:(id)arg1;
- (id)zoomablePhotosInteraction:(id)arg1 assetReferenceAtLocation:(struct CGPoint)arg2;
- (void)zoomablePhotosInteractionWillBegin:(id)arg1;
- (_Bool)zoomablePhotosInteractionShouldBegin:(id)arg1;
- (_Bool)axGroup:(id)arg1 didRequestToPerformAction:(long long)arg2 userInfo:(id)arg3;
- (void)_handleChangeToModifySelectionWithUserInfo:(id)arg1;
- (void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3;
- (id)axContainingViewForAXGroup:(id)arg1;
- (id)indexPathsForItemsInRect:(struct CGRect)arg1 coordinateSpace:(id)arg2;
- (id)indexPathsFromIndexPath:(struct PXSimpleIndexPath)arg1 toIndexPath:(struct PXSimpleIndexPath)arg2 inDataSource:(id)arg3;
- (struct PXSimpleIndexPath)selectableIndexPathClosestToIndexPath:(struct PXSimpleIndexPath)arg1 fromDataSource:(id)arg2 inDirection:(unsigned long long)arg3;
- (_Bool)canSelectObjectAtIndexPath:(struct PXSimpleIndexPath)arg1 inDataSource:(id)arg2;
- (struct PXSimpleIndexPath)_indexPathClosestToIndexPath:(struct PXSimpleIndexPath)arg1 fromDataSource:(id)arg2 inDirection:(unsigned long long)arg3;
- (id)_itemsGeometryForDataSource:(id)arg1;
- (id)hitTestResultControlsForCurrentZoomLevel;
- (void)scrollLibraryViewToObjectReference:(id)arg1 scrollPosition:(unsigned long long)arg2 padding:(struct UIEdgeInsets)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)scrollLibraryViewToAssetReference:(id)arg1 scrollPosition:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)prepareForNavigationToObjectReference:(id)arg1;
- (void)_logLibraryCountsIfNecessary;
@property(readonly, nonatomic) PXSectionedObjectReference *preferredObjectReferenceToScrollToWhenRestoringState;
@property(readonly, nonatomic) PXAssetReference *preferredAnchorAssetReference;
- (id)additionalRectDiagnosticsProvidersForView:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1 extendedTraitCollection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

