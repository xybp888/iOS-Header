//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewControllerContainerCollectionView.h>

@protocol SKUIScrollingTabBarContentCollectionViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIScrollingTabBarContentCollectionView : SKUIViewControllerContainerCollectionView
{
    _Bool _performingLayout;
}

@property(readonly, nonatomic, getter=isPerformingLayout) _Bool performingLayout; // @synthesize performingLayout=_performingLayout;
- (void)_reuseCell:(id)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(nonatomic) id <SKUIScrollingTabBarContentCollectionViewDelegate> delegate; // @dynamic delegate;

@end

