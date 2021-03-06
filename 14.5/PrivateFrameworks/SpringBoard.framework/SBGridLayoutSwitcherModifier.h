//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>

@class NSString;

@interface SBGridLayoutSwitcherModifier : SBSwitcherModifier <PTSettingsKeyObserver>
{
    struct CGPoint _previousContentOffset;
    _Bool _isScrollingForward;
    _Bool _usesFixedCardSize;
    double _unroundedCardScale;
    unsigned long long _scrollAxis;
    unsigned long long _fixedGroupingSize;
    unsigned long long _alignment;
    unsigned long long _layoutDirection;
    struct CGSize _fixedCardSize;
}

@property(nonatomic) unsigned long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) struct CGSize fixedCardSize; // @synthesize fixedCardSize=_fixedCardSize;
@property(nonatomic, getter=isUsingFixedCardSize) _Bool usesFixedCardSize; // @synthesize usesFixedCardSize=_usesFixedCardSize;
@property(nonatomic) unsigned long long fixedGroupingSize; // @synthesize fixedGroupingSize=_fixedGroupingSize;
@property(nonatomic) unsigned long long scrollAxis; // @synthesize scrollAxis=_scrollAxis;
@property(nonatomic) double cardScale; // @synthesize cardScale=_unroundedCardScale;
- (struct CGSize)_scaledCardSize;
- (struct CGSize)_cardSize;
- (unsigned long long)_numberOfRows;
- (unsigned long long)_numberOfColumns;
- (struct CGRect)_frameWithScaleAppliedForIndex:(unsigned long long)arg1 ignoringScrollOffset:(_Bool)arg2;
- (double)_gridSwitcherPageScale;
- (double)_cardHeaderHeight;
- (unsigned long long)_columnForIndex:(unsigned long long)arg1;
- (unsigned long long)_rowForIndex:(unsigned long long)arg1;
- (double)_cardCornerRadiusInSwitcher;
- (double)_horizontalSpacing;
- (double)_verticalSpacing;
- (double)_trailingPadding;
- (double)_leadingPadding;
- (struct CGRect)_frameForIndex:(unsigned long long)arg1 ignoringScrollOffset:(_Bool)arg2;
- (unsigned long long)_firstTrailingIndexForContentOffset:(struct CGPoint)arg1;
- (struct _NSRange)_visibleAppLayoutRangeForContentOffset:(struct CGPoint)arg1;
- (void)_applyPrototypeSettings;
- (void)resetAdjustedScrollingState;
- (struct CGPoint)adjustedOffsetForOffset:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 startPoint:(struct CGPoint)arg3 locationInView:(struct CGPoint)arg4 horizontalVelocity:(inout double *)arg5 verticalVelocity:(inout double *)arg6;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1;
- (struct CGPoint)restingOffsetForScrollOffset:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (struct CGPoint)contentOffsetForIndex:(unsigned long long)arg1 centered:(_Bool)arg2;
- (struct CGSize)_fittedContentSize;
- (struct CGSize)_contentSize;
- (double)minimumTranslationToKillIndex:(unsigned long long)arg1;
- (id)scrollViewAttributes;
- (double)contentPageViewScaleForAppLayout:(id)arg1;
- (double)snapshotScaleForAppLayout:(id)arg1;
- (unsigned long long)_indexOfLeadingCard;
- (unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1;
- (unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1;
- (_Bool)shouldBringCardToFrontDuringInsertionOrRemoval;
- (_Bool)shouldAnimateInsertionOrRemovalAtIndex:(unsigned long long)arg1;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (id)appLayoutsToCacheSnapshots;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (double)shadowOffsetForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1;
- (_Bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (struct CGRect)fullyPresentedFrameForAppLayout:(id)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (double)contentViewScale;
- (_Bool)_isIndexVisible:(unsigned long long)arg1;
- (id)visibleAppLayouts;
- (double)rotationAngleForIndex:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (void)_handleTransitionEvent:(id)arg1;
- (id)handleInlineTransitionEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleScrollEvent:(id)arg1;
- (id)handleSwitcherSettingsChangedEvent:(id)arg1;
- (unsigned long long)numberOfRows;
- (void)didMoveToParentModifier:(id)arg1;
- (id)initWithScrollAxis:(unsigned long long)arg1 fixedGroupingSize:(unsigned long long)arg2 cardScale:(double)arg3 alignment:(unsigned long long)arg4 layoutDirection:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

