//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;
@protocol NUIContainerViewDelegate;

@interface NUIContainerView : UIView
{
    _Bool _isRTL;
    id <NUIContainerViewDelegate> _delegate;
    struct map<UIView *, _NUIContainerViewArrangedSubview, std::__1::less<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, _NUIContainerViewArrangedSubview>>> _arrangedSubviewInfo;
    NSMutableArray *_arrangedSubviews;
    NSArray *_visibleArrangedSubviews;
    struct UIEdgeInsets _effectiveLayoutMargins;
    UIView *_firstBaselineView;
    UIView *_lastBaselineView;
    struct vector<CALayer *, std::__1::allocator<CALayer *>> _debugBoundingBoxLayers;
    struct {
        unsigned int hiddenArrangedSubviewCount:16;
        unsigned int delaydInvalidation:8;
        unsigned int batchDepth:4;
        unsigned int inLayoutPass:2;
        unsigned int inMeasurementPass:2;
        unsigned int layoutDependency:2;
        unsigned int removalPolicy:2;
        unsigned int removalPolicyHasBeenSet:1;
        unsigned int additionPolicy:1;
        unsigned int inEnsureArranged:1;
        unsigned int inEffectiveSize:1;
        unsigned int hasMargins:1;
        unsigned int sizeIsInvalid:1;
        unsigned int debugBoundingBoxes:1;
        unsigned int baselineRelative:1;
        unsigned int layoutMarginsRelative:1;
        unsigned int baselineLayoutMargins:1;
        unsigned int mustRestart:1;
        unsigned int delegateSystemLayoutSizeFittingSizeForArrangedSubview:1;
        unsigned int delegateLayoutFrameForArrangedSubview:1;
        unsigned int delegateWillMeasureFitting:1;
        unsigned int delegateShouldRestart:1;
        unsigned int delegateDidLayout:1;
    } _containerFlags;
}

+ (Class)layerClass;
+ (void)initialize;
+ (_Bool)isDebugBoundingBoxesEnabled;
+ (_Bool)requiresConstraintBasedLayout;
+ (void)setEnableAPIMisuseAssertions:(_Bool)arg1;
+ (_Bool)enableAPIMisuseAssertions;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)shouldCancelMeasurementForCompressionInAxis:(long long)arg1;
- (_Bool)canCancelMeasurementForCompression;
- (id)description;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutMarginsDidChange;
- (void)invalidateIntrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)effectiveLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)_setHasValidSize;
- (void)setMinimumSpacing:(struct NSDirectionalEdgeInsets)arg1 adjacentToView:(id)arg2;
- (struct NSDirectionalEdgeInsets)minimumSpacingAdjacentToView:(id)arg1;
- (void)setPositionAdjustmentOffset:(struct CGPoint)arg1 forView:(id)arg2;
- (struct CGPoint)positionAdjustmentOffsetForView:(id)arg1;
- (void)setAlignment:(long long)arg1 forView:(id)arg2 inAxis:(long long)arg3;
- (long long)alignmentForView:(id)arg1 inAxis:(long long)arg2;
@property(nonatomic, getter=hasBaselineRelativeLayoutMarginsForArrangement) _Bool baselineRelativeLayoutMarginsForArrangement;
@property(nonatomic, getter=isLayoutMarginsRelativeArrangement) _Bool layoutMarginsRelativeArrangement;
@property(nonatomic, getter=isBaselineRelativeArrangement) _Bool baselineRelativeArrangement;
- (unsigned long long)indexOfArrangedSubview:(id)arg1;
- (void)replaceArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceArrangedSubviewAtIndex:(unsigned long long)arg1 withView:(id)arg2;
- (void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeArrangedSubview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)addArrangedSubview:(id)arg1;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *visibleArrangedSubviews;
@property(copy, nonatomic) NSArray *arrangedSubviews;
@property(nonatomic) __weak id <NUIContainerViewDelegate> delegate;
@property(nonatomic) long long arrangedSubviewAdditionPolicy;
@property(nonatomic) long long arrangedSubviewRemovalPolicy;
- (void)dealloc;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg1;
- (_Bool)_isContainerView;
- (CDStruct_c3b9c2ee)_baselineOffsetsAtSize:(struct CGSize)arg1;
- (unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
- (_Bool)_layoutHeightDependsOnWidth;
- (_Bool)isLayoutSizeDependentOnPerpendicularAxis;
- (_Bool)mustRestartMeasurement;
- (void)layoutArrangedSubviewsInBounds:(struct CGRect)arg1;
- (id)calculateViewForLastBaselineLayout;
- (id)calculateViewForFirstBaselineLayout;
- (struct CGSize)calculateArrangedSizeFittingSize:(struct CGSize)arg1;
- (void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)didInsertArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)assertNotInLayoutPass:(_Bool)arg1;
- (struct CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect)arg2;
- (struct CGSize)contentLayoutSizeFittingSize:(struct CGSize)arg1 forArrangedSubview:(id)arg2;
- (void)intrinsicContentSizeDidInvalidateForArrangedSubview:(id)arg1;
- (void)visibilityDidChangeForArrangedSubview:(id)arg1;
- (_Bool)setNeedsInvalidation:(long long)arg1;
- (void)setNeedsLayout;
- (struct UIEdgeInsets)effectiveLayoutMargins;
- (void)ensureArrangedSubviewsAreValid;
- (_Bool)isInBatchUpdate;
- (struct CGRect)effectiveLayoutBounds;
- (id)debugDictionary;
@property(nonatomic, getter=isDebugBoundingBoxesEnabled) _Bool debugBoundingBoxesEnabled;
- (id)debugSetEnabledFlags;
- (id)debugSetDelegateRespondsToSelectors;
- (id)debugDictionaryForVisibleArrangedSubview:(id)arg1;
- (id)arrangedDescription;

@end

