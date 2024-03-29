//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXForYouSuggestionsGadgetProvider.h>

#import <PhotosUICore/PXActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXOneUpPresentationDelegate-Protocol.h>

@class NSString, PXAssetReference, PXForYouSuggestionAssetsDataSourceManager, PXPhotoKitAdjustedUIMediaProvider;

@interface PXForYouRecentInterestSuggestionsGadgetProvider : PXForYouSuggestionsGadgetProvider <PXOneUpPresentationDelegate, PXActionPerformerDelegate>
{
    PXPhotoKitAdjustedUIMediaProvider *_oneUpMediaProvider;
    PXForYouSuggestionAssetsDataSourceManager *_oneUpDataSourceManager;
    PXAssetReference *_oneUpInitialAssetReference;
}

- (void).cxx_destruct;
- (void)_fileRadarForSuggestion:(id)arg1;
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (_Bool)oneUpPresentationWantsShowInLibraryButton:(id)arg1;
- (long long)oneUpPresentationActionContext:(id)arg1;
- (id)oneUpPresentationActionManagerForPreviewing:(id)arg1;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (void)_addTTRActionIntoPreview:(id)arg1 forGadget:(id)arg2;
- (void)_insertRemoveSuggestionActionIntoPreview:(id)arg1 forGadget:(id)arg2;
- (void)suggestionGadget:(id)arg1 didDismissPreviewController:(id)arg2 committing:(_Bool)arg3;
- (void)suggestionGadget:(id)arg1 commitViewController:(id)arg2;
- (id)suggestionGadgetPreviewController:(id)arg1;
- (void)presentOneUpForSuggestion:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_prepareForOneUpPresentationForSuggestion:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

