//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, NSMutableDictionary, PUAlbumListTransitionContext, UICollectionViewLayoutAttributes;

__attribute__((visibility("hidden")))
@interface PUStackedAlbumLayout : UICollectionViewLayout
{
    NSMutableDictionary *_visibleLayoutAttributesByIndexPath;
    NSMutableDictionary *_derivedLayoutAttributesByIndexPath;
    NSMutableDictionary *_zIndexByIndexPath;
    _Bool _isInteractive;
    UICollectionViewLayoutAttributes *_globalHeaderAttributes;
    NSArray *_visibleStackedItemLayoutAttributes;
    UICollectionViewLayoutAttributes *_referenceItemLayoutAttributes;
    double _yAdjust;
    PUAlbumListTransitionContext *_albumListTransitionContext;
    struct CGPoint _referenceCenter;
    struct CGSize _contentSizeAdjust;
}

- (void).cxx_destruct;
@property(nonatomic, setter=setInteractive:) _Bool isInteractive; // @synthesize isInteractive=_isInteractive;
@property(retain, nonatomic) PUAlbumListTransitionContext *albumListTransitionContext; // @synthesize albumListTransitionContext=_albumListTransitionContext;
@property(nonatomic) struct CGSize contentSizeAdjust; // @synthesize contentSizeAdjust=_contentSizeAdjust;
@property(nonatomic) double yAdjust; // @synthesize yAdjust=_yAdjust;
@property(nonatomic) struct CGPoint referenceCenter; // @synthesize referenceCenter=_referenceCenter;
@property(copy, nonatomic) UICollectionViewLayoutAttributes *referenceItemLayoutAttributes; // @synthesize referenceItemLayoutAttributes=_referenceItemLayoutAttributes;
@property(copy, nonatomic) NSArray *visibleStackedItemLayoutAttributes; // @synthesize visibleStackedItemLayoutAttributes=_visibleStackedItemLayoutAttributes;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *globalHeaderAttributes; // @synthesize globalHeaderAttributes=_globalHeaderAttributes;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (struct CGSize)collectionViewContentSize;
- (id)_newAdjustedLayoutAttributes:(id)arg1 indexPath:(id)arg2;
- (long long)zIndexForItemAtIndexPath:(id)arg1;

@end

