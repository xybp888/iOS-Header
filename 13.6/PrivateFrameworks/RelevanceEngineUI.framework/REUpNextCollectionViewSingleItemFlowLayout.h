//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngineUI/REUpNextCollectionViewFlowLayout.h>

@class NSDictionary, NSIndexPath, REUpNextCollectionViewFlowLayoutAttributes;

@interface REUpNextCollectionViewSingleItemFlowLayout : REUpNextCollectionViewFlowLayout
{
    REUpNextCollectionViewFlowLayoutAttributes *_preferedCellAttributes;
    NSDictionary *_allAttributes;
    NSIndexPath *_preferedIndexPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *preferedIndexPath; // @synthesize preferedIndexPath=_preferedIndexPath;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;

@end

