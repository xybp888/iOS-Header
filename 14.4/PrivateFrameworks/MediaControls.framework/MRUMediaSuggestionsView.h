//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UICollectionView, UICollectionViewCompositionalLayout;

__attribute__((visibility("hidden")))
@interface MRUMediaSuggestionsView : UIView
{
    _Bool _supportsHorizontalLayout;
    UICollectionViewCompositionalLayout *_collectionViewLayout;
    UICollectionView *_collectionView;
    long long _layout;
    struct UIEdgeInsets _contentEdgeInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) _Bool supportsHorizontalLayout; // @synthesize supportsHorizontalLayout=_supportsHorizontalLayout;
@property(nonatomic) long long layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) UICollectionViewCompositionalLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
- (long long)numberOfColumns;
- (long long)numberOfRows;
- (double)itemHeightForItemWidth:(double)arg1;
- (double)itemWidthForWidth:(double)arg1;
- (void)updateCollectionViewLayout;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

