//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

#import <HomeUI/HUControllableCollectionViewLayout-Protocol.h>
#import <HomeUI/HUProvidesMosaicFrames-Protocol.h>

@class NSMutableArray, NSString;
@protocol HUMosaicLayoutDelegate;

@interface HUMosaicLayout : UICollectionViewLayout <HUControllableCollectionViewLayout, HUProvidesMosaicFrames>
{
    _Bool _layoutInvalidatedForBoundsChange;
    id <HUMosaicLayoutDelegate> _delegate;
    NSMutableArray *_attributeCache;
    struct CGRect _contentBounds;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool layoutInvalidatedForBoundsChange; // @synthesize layoutInvalidatedForBoundsChange=_layoutInvalidatedForBoundsChange;
@property(retain, nonatomic) NSMutableArray *attributeCache; // @synthesize attributeCache=_attributeCache;
@property(nonatomic) id <HUMosaicLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect contentBounds; // @synthesize contentBounds=_contentBounds;
- (void)clearAllOverrideAttributesForItems:(id)arg1;
- (void)clearOverrideAttributesForItem:(id)arg1 atIndexPath:(id)arg2;
- (void)applyOverrideAttributes:(id)arg1 toItem:(id)arg2 atIndexPath:(id)arg3;
- (id)currentMosaicFrames;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)invalidateLayout;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareLayout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

