//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/HFItemManagerDelegate-Protocol.h>
#import <HomeUI/HUHomeStatusDetailsViewControllerDelegate-Protocol.h>
#import <HomeUI/HUPreloadableViewController-Protocol.h>

@class HFHomeStatusItemManager, HUGridLayoutOptions, NSMutableArray, NSString, NUIContainerStackView;

@interface HUHomeStatusViewController : UIViewController <HUHomeStatusDetailsViewControllerDelegate, HFItemManagerDelegate, HUPreloadableViewController>
{
    _Bool _wantsPreferredContentSize;
    _Bool _viewVisible;
    _Bool _hasFinishedInitialLoad;
    HFHomeStatusItemManager *_statusItemManager;
    HUGridLayoutOptions *_layoutOptions;
    NUIContainerStackView *_stackView;
    NSMutableArray *_viewVisibleFutures;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasFinishedInitialLoad; // @synthesize hasFinishedInitialLoad=_hasFinishedInitialLoad;
@property(readonly, nonatomic) NSMutableArray *viewVisibleFutures; // @synthesize viewVisibleFutures=_viewVisibleFutures;
@property(nonatomic, getter=isViewVisible) _Bool viewVisible; // @synthesize viewVisible=_viewVisible;
@property(retain, nonatomic) NUIContainerStackView *stackView; // @synthesize stackView=_stackView;
@property(copy, nonatomic) HUGridLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(nonatomic) _Bool wantsPreferredContentSize; // @synthesize wantsPreferredContentSize=_wantsPreferredContentSize;
@property(retain, nonatomic) HFHomeStatusItemManager *statusItemManager; // @synthesize statusItemManager=_statusItemManager;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3;
- (id)itemManager:(id)arg1 futureToUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3;
- (void)configureLabel:(id)arg1 forItem:(id)arg2;
- (void)statusDetailViewControllerDidFinish:(id)arg1;
- (void)presentHomeStatusDetailsWithSender:(id)arg1;
- (id)hu_preloadContent;
- (void)updatePreferredContentSizeIfNeeded;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

