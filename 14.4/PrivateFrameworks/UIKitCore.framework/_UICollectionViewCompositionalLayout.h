//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UICollectionViewCompositionalLayout.h>

@class NSArray;

@interface _UICollectionViewCompositionalLayout : UICollectionViewCompositionalLayout
{
    long long _scrollDirection;
    NSArray *_boundarySupplementaryItems;
    NSArray *_supplementaryItems;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *supplementaryItems; // @synthesize supplementaryItems=_supplementaryItems;
@property(copy, nonatomic) NSArray *boundarySupplementaryItems; // @synthesize boundarySupplementaryItems=_boundarySupplementaryItems;
@property(readonly, nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
- (id)initWithLayoutSection:(id)arg1 scrollDirection:(long long)arg2;
- (id)initWithLayoutSectionProvider:(CDUnknownBlockType)arg1;
- (id)initWithLayoutSectionProvider:(CDUnknownBlockType)arg1 scrollDirection:(long long)arg2;
- (id)initWithLayoutSectionProvider:(CDUnknownBlockType)arg1 configuration:(id)arg2;
- (id)initWithLayoutSection:(id)arg1 configuration:(id)arg2;
- (id)initWithLayoutSection:(id)arg1;
- (id)initWithSectionProvider:(CDUnknownBlockType)arg1;
- (id)initWithSectionProvider:(CDUnknownBlockType)arg1 configuration:(id)arg2;
- (id)initWithSection:(id)arg1;
- (id)initWithSection:(id)arg1 configuration:(id)arg2;

@end

