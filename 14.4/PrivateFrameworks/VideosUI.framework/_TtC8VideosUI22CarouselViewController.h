//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/VUISwiftImpressionsElement-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI22CarouselViewController : UIViewController <VUISwiftImpressionsElement>
{
    MISSING_TYPE *viewImpressioner;
    MISSING_TYPE *headerViewModel;
    MISSING_TYPE *viewElement;
    MISSING_TYPE *collectionViewModel;
    MISSING_TYPE *$__lazy_storage_$_visibleCellViewModels;
    MISSING_TYPE *$__lazy_storage_$_carouselViewContainer;
    MISSING_TYPE *dataModelItems;
    MISSING_TYPE *lastViewWidth;
    MISSING_TYPE *centeredItemIndex;
    MISSING_TYPE *impressionsTracker;
    MISSING_TYPE *impressionsCalculator;
    MISSING_TYPE *selfVisibilityMonitor;
    MISSING_TYPE *$__lazy_storage_$_cellVisibilityMonitor;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

@end

