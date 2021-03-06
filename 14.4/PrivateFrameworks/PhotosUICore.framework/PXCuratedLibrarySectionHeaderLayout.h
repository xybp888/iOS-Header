//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGLayout.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGNamedImageSource-Protocol.h>
#import <PhotosUICore/PXGTitleSubtitleSource-Protocol.h>
#import <PhotosUICore/PXGViewSource-Protocol.h>
#import <PhotosUICore/PXLibrarySummaryOutputPresenter-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSMutableIndexSet, NSObject, NSSet, NSString, PXAssetCollectionReference, PXCuratedLibraryActionPerformer, PXCuratedLibraryEllipsisButtonActionPerformer, PXCuratedLibraryFilterActionPerformer, PXCuratedLibrarySectionHeaderLayoutSpec, PXGLayoutGuide, PXNumberAnimator, PXTitleSubtitleLabelSpec;
@protocol OS_dispatch_queue;

@interface PXCuratedLibrarySectionHeaderLayout : PXGLayout <PXGTitleSubtitleSource, PXGViewSource, PXGNamedImageSource, PXChangeObserver, PXLibrarySummaryOutputPresenter>
{
    CDStruct_d97c9657 _updateFlags;
    unsigned short _textVersion;
    unsigned short _ellipsisButtonVersion;
    unsigned short _filterButtonVersion;
    unsigned short _filterIndicatorButtonVersion;
    unsigned short _selectionTitleVersion;
    unsigned short _selectButtonVersion;
    unsigned short _cancelButtonVersion;
    unsigned short _toggleAspectFitButtonVersion;
    unsigned short _zoomInButtonVersion;
    unsigned short _zoomOutButtonVersion;
    unsigned short _controlStackButtonVersion;
    unsigned short _showSidebarButtonVersion;
    NSArray *_itemIdentifierBySpriteIndex;
    _Bool _presentedVisibility;
    _Bool _presentedTitleVisibility;
    NSMutableIndexSet *_axSpriteIndexes;
    unsigned short _gradientResizableCapInsetsIndex;
    struct CGSize _cachedSizeByButtonIdentifier[11];
    struct CGSize _cachedExternalTrailingButtonsSize;
    struct CGSize _cachedExternalLeadingButtonsSize;
    struct CGSize _cachedExternalTopButtonsSize;
    struct CGSize _cachedLongestPossibleSelectionTitleSize;
    long long _asyncDateGeneration;
    NSObject<OS_dispatch_queue> *_asyncDateQueue;
    _Bool _wantsOverBackgroundAppearance;
    _Bool _showsBackgroundGradient;
    _Bool _showsDebugDescription;
    _Bool _filterButtonHighlighted;
    _Bool _filterIndicatorButtonHighlighted;
    _Bool _controlStackButtonSelected;
    _Bool _usesCompactToggleAspectFitButton;
    float _buttonsZIndex;
    NSString *_title;
    NSString *_subtitle;
    PXAssetCollectionReference *_assetCollectionReference;
    PXCuratedLibrarySectionHeaderLayoutSpec *_spec;
    double _lateralMargin;
    double _maxPossibleHeight;
    double _titleAlpha;
    double _buttonsAlpha;
    PXCuratedLibraryEllipsisButtonActionPerformer *_ellipsisButtonActionPerformer;
    PXCuratedLibraryFilterActionPerformer *_filterActionPerformer;
    PXCuratedLibraryActionPerformer *_selectButtonActionPerformer;
    PXCuratedLibraryActionPerformer *_cancelButtonActionPerformer;
    PXCuratedLibraryActionPerformer *_zoomInButtonActionPerformer;
    PXCuratedLibraryActionPerformer *_zoomOutButtonActionPerformer;
    PXCuratedLibraryActionPerformer *_toggleAspectFitButtonActionPerformer;
    PXCuratedLibraryActionPerformer *_showSidebarButtonActionPerformer;
    NSString *_selectButtonTitle;
    NSString *_filterButtonCaption;
    NSString *_filterButtonTitle;
    NSString *_selectionTitle;
    NSString *_longestPossibleSelectionTitle;
    NSString *_toggleAspectFitButtonTitle;
    NSSet *_toggleAspectFitButtonPossibleTitles;
    long long _toggleAspectFitCompactButtonSymbol;
    long long _safeAreaBehavior;
    NSArray *_externalTrailingButtonConfigurations;
    NSArray *_externalLeadingButtonConfigurations;
    NSArray *_externalTopButtonConfigurations;
    PXGLayoutGuide *_leadingButtonsLayoutGuide;
    PXCuratedLibrarySectionHeaderLayoutSpec *_effectiveSpec;
    PXTitleSubtitleLabelSpec *_effectiveTitleSubtitleLabelSpec;
    PXTitleSubtitleLabelSpec *_effectiveOverBackgroundTitleSubtitleLabelSpec;
    double _buttonsMaxY;
    double _titleSubtitleTopSpacing;
    double _titleSubtitleLastBaseline;
    double _gradientAlpha;
    PXNumberAnimator *_alternateAppearanceMixAnimator;
    struct CGRect _titleSubtitleFrame;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PXNumberAnimator *alternateAppearanceMixAnimator; // @synthesize alternateAppearanceMixAnimator=_alternateAppearanceMixAnimator;
@property(nonatomic) double gradientAlpha; // @synthesize gradientAlpha=_gradientAlpha;
@property(nonatomic) double titleSubtitleLastBaseline; // @synthesize titleSubtitleLastBaseline=_titleSubtitleLastBaseline;
@property(nonatomic) double titleSubtitleTopSpacing; // @synthesize titleSubtitleTopSpacing=_titleSubtitleTopSpacing;
@property(nonatomic) double buttonsMaxY; // @synthesize buttonsMaxY=_buttonsMaxY;
@property(nonatomic) _Bool usesCompactToggleAspectFitButton; // @synthesize usesCompactToggleAspectFitButton=_usesCompactToggleAspectFitButton;
@property(nonatomic) _Bool controlStackButtonSelected; // @synthesize controlStackButtonSelected=_controlStackButtonSelected;
@property(readonly, nonatomic) PXTitleSubtitleLabelSpec *effectiveOverBackgroundTitleSubtitleLabelSpec; // @synthesize effectiveOverBackgroundTitleSubtitleLabelSpec=_effectiveOverBackgroundTitleSubtitleLabelSpec;
@property(readonly, nonatomic) PXTitleSubtitleLabelSpec *effectiveTitleSubtitleLabelSpec; // @synthesize effectiveTitleSubtitleLabelSpec=_effectiveTitleSubtitleLabelSpec;
@property(retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *effectiveSpec; // @synthesize effectiveSpec=_effectiveSpec;
@property(retain, nonatomic) PXGLayoutGuide *leadingButtonsLayoutGuide; // @synthesize leadingButtonsLayoutGuide=_leadingButtonsLayoutGuide;
@property(copy, nonatomic) NSArray *externalTopButtonConfigurations; // @synthesize externalTopButtonConfigurations=_externalTopButtonConfigurations;
@property(copy, nonatomic) NSArray *externalLeadingButtonConfigurations; // @synthesize externalLeadingButtonConfigurations=_externalLeadingButtonConfigurations;
@property(copy, nonatomic) NSArray *externalTrailingButtonConfigurations; // @synthesize externalTrailingButtonConfigurations=_externalTrailingButtonConfigurations;
@property(nonatomic) long long safeAreaBehavior; // @synthesize safeAreaBehavior=_safeAreaBehavior;
@property(readonly, nonatomic) struct CGRect titleSubtitleFrame; // @synthesize titleSubtitleFrame=_titleSubtitleFrame;
@property(nonatomic) long long toggleAspectFitCompactButtonSymbol; // @synthesize toggleAspectFitCompactButtonSymbol=_toggleAspectFitCompactButtonSymbol;
@property(copy, nonatomic) NSSet *toggleAspectFitButtonPossibleTitles; // @synthesize toggleAspectFitButtonPossibleTitles=_toggleAspectFitButtonPossibleTitles;
@property(copy, nonatomic) NSString *toggleAspectFitButtonTitle; // @synthesize toggleAspectFitButtonTitle=_toggleAspectFitButtonTitle;
@property(copy, nonatomic) NSString *longestPossibleSelectionTitle; // @synthesize longestPossibleSelectionTitle=_longestPossibleSelectionTitle;
@property(copy, nonatomic) NSString *selectionTitle; // @synthesize selectionTitle=_selectionTitle;
@property(nonatomic) _Bool filterIndicatorButtonHighlighted; // @synthesize filterIndicatorButtonHighlighted=_filterIndicatorButtonHighlighted;
@property(nonatomic) _Bool filterButtonHighlighted; // @synthesize filterButtonHighlighted=_filterButtonHighlighted;
@property(copy, nonatomic) NSString *filterButtonTitle; // @synthesize filterButtonTitle=_filterButtonTitle;
@property(copy, nonatomic) NSString *filterButtonCaption; // @synthesize filterButtonCaption=_filterButtonCaption;
@property(copy, nonatomic) NSString *selectButtonTitle; // @synthesize selectButtonTitle=_selectButtonTitle;
@property(retain, nonatomic) PXCuratedLibraryActionPerformer *showSidebarButtonActionPerformer; // @synthesize showSidebarButtonActionPerformer=_showSidebarButtonActionPerformer;
@property(retain, nonatomic) PXCuratedLibraryActionPerformer *toggleAspectFitButtonActionPerformer; // @synthesize toggleAspectFitButtonActionPerformer=_toggleAspectFitButtonActionPerformer;
@property(retain, nonatomic) PXCuratedLibraryActionPerformer *zoomOutButtonActionPerformer; // @synthesize zoomOutButtonActionPerformer=_zoomOutButtonActionPerformer;
@property(retain, nonatomic) PXCuratedLibraryActionPerformer *zoomInButtonActionPerformer; // @synthesize zoomInButtonActionPerformer=_zoomInButtonActionPerformer;
@property(retain, nonatomic) PXCuratedLibraryActionPerformer *cancelButtonActionPerformer; // @synthesize cancelButtonActionPerformer=_cancelButtonActionPerformer;
@property(retain, nonatomic) PXCuratedLibraryActionPerformer *selectButtonActionPerformer; // @synthesize selectButtonActionPerformer=_selectButtonActionPerformer;
@property(retain, nonatomic) PXCuratedLibraryFilterActionPerformer *filterActionPerformer; // @synthesize filterActionPerformer=_filterActionPerformer;
@property(retain, nonatomic) PXCuratedLibraryEllipsisButtonActionPerformer *ellipsisButtonActionPerformer; // @synthesize ellipsisButtonActionPerformer=_ellipsisButtonActionPerformer;
@property(nonatomic) float buttonsZIndex; // @synthesize buttonsZIndex=_buttonsZIndex;
@property(nonatomic) _Bool showsDebugDescription; // @synthesize showsDebugDescription=_showsDebugDescription;
@property(nonatomic) _Bool showsBackgroundGradient; // @synthesize showsBackgroundGradient=_showsBackgroundGradient;
@property(nonatomic) _Bool wantsOverBackgroundAppearance; // @synthesize wantsOverBackgroundAppearance=_wantsOverBackgroundAppearance;
@property(nonatomic) double buttonsAlpha; // @synthesize buttonsAlpha=_buttonsAlpha;
@property(nonatomic) double titleAlpha; // @synthesize titleAlpha=_titleAlpha;
@property(nonatomic) double maxPossibleHeight; // @synthesize maxPossibleHeight=_maxPossibleHeight;
@property(nonatomic) double lateralMargin; // @synthesize lateralMargin=_lateralMargin;
@property(retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *spec; // @synthesize spec=_spec;
@property(retain, nonatomic) PXAssetCollectionReference *assetCollectionReference; // @synthesize assetCollectionReference=_assetCollectionReference;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg1 inDirection:(unsigned long long)arg2;
- (id)axSpriteIndexesInRect:(struct CGRect)arg1;
- (id)axSpriteIndexes;
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;
- (id)_configurationForButton:(unsigned long long)arg1 overBackgroundVariant:(_Bool)arg2;
- (id)_configurationForButton:(unsigned long long)arg1;
- (id)configurationForButton:(unsigned long long)arg1 spec:(id)arg2;
- (void)_discardAllCachedButtonSizes;
- (struct CGSize)_sizeOfButton:(unsigned long long)arg1;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)didRenderTitleAndSubtitleSpriteAtIndex:(unsigned int)arg1 layoutVersion:(long long)arg2 withLastBaseline:(double)arg3;
- (id)imageConfigurationAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)_titleSubtitleSpecForItemIdentifier:(id)arg1;
- (id)titleSubtitleSpecForSpriteAtIndex:(unsigned int)arg1;
- (id)subtitleForSpriteAtIndex:(unsigned int)arg1;
- (id)titleForSpriteAtIndex:(unsigned int)arg1;
- (void)_handleAsyncDateDescription:(id)arg1 placement:(long long)arg2 generation:(long long)arg3;
- (void)_updateTitleAndSubtitle;
- (id)_effectiveTitleSubtitleLabelSpec:(id)arg1;
- (void)_updateEffectiveSpec;
- (void)_invalidateFilterIndicatorButton;
- (void)_invalidateFilterButton;
- (void)_updateLastBaseline;
- (void)alphaDidChange;
- (void)screenScaleDidChange;
- (void)referenceOptionsDidChange;
- (void)referenceSizeDidChange;
- (void)safeAreaInsetsDidChange;
- (void)visibleRectDidChange;
- (void)setVisibleRect:(struct CGRect)arg1;
- (unsigned int)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;
- (id)objectReferenceForSpriteIndex:(unsigned int)arg1;
- (id)_selectionTitleLabelConfigurationWithTitle:(id)arg1;
@property(readonly, nonatomic) unsigned long long toggleAspectFitButton;
- (struct UIEdgeInsets)safeAreaInsetsWithCurrentBehavior;
- (void)_updateSpritesAlpha;
- (void)_updateSpriteTags;
- (void)_updateButtonActionPerformers;
- (void)_updateSprites;
- (void)update;
- (id)init;

// Remaining properties
@property(nonatomic) double alpha; // @dynamic alpha;
@property(copy, nonatomic) NSAttributedString *attributedTitle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSDictionary *defaultAttributes;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *emphasizedAttributes;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool wantsDisclosureIndicator;

@end

