//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXExtendedTraitCollection.h>

#import <PhotosUICore/PXMockMutableExtendedTraitCollection-Protocol.h>

@class PXUpdater;

@interface PXMockExtendedTraitCollection : PXExtendedTraitCollection <PXMockMutableExtendedTraitCollection>
{
    PXUpdater *_updater;
    long long _layoutSizeClass;
    long long _layoutOrientation;
    long long _userInterfaceIdiom;
    long long _formFactor;
    unsigned long long _visibleChromeElements;
    double _displayScale;
    struct CGSize _layoutReferenceSize;
    struct UIEdgeInsets _safeAreaInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets safeAreaInsets; // @synthesize safeAreaInsets=_safeAreaInsets;
@property(nonatomic) double displayScale; // @synthesize displayScale=_displayScale;
@property(nonatomic) unsigned long long visibleChromeElements; // @synthesize visibleChromeElements=_visibleChromeElements;
@property(nonatomic) long long formFactor; // @synthesize formFactor=_formFactor;
@property(nonatomic) long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(nonatomic) struct CGSize layoutReferenceSize; // @synthesize layoutReferenceSize=_layoutReferenceSize;
@property(nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property(nonatomic) long long layoutSizeClass; // @synthesize layoutSizeClass=_layoutSizeClass;
- (void)_updateSafeAreaInsets;
- (void)_invalidateSafeAreaInsets;
- (void)_updateLayoutReferenceSizeAndDisplayScale;
- (void)_invalidateLayoutReferenceSizeAndDisplayScale;
- (void)_updateLayoutSizeClass;
- (void)_invalidateLayoutSizeClass;
- (void)_setNeedsUpdate;
- (long long)layoutSizeSubclass;
- (void)didPerformChanges;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)unregisterObservations;
- (void)registerObservations;
- (id)initWithFormFactor:(long long)arg1 orientation:(long long)arg2 visibleChromeElements:(unsigned long long)arg3;
- (id)initWithLayoutSizeClass:(long long)arg1;
- (id)initWithViewController:(id)arg1;

@end

