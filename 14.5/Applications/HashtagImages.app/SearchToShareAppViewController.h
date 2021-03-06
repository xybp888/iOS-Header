//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PARSessionDelegate-Protocol.h"
#import "STSPickerSelectionDelegate-Protocol.h"
#import "STSRecentsDelegate-Protocol.h"
#import "STSSearchBrowserRootViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableArray, NSString, STSPicker, STSRootView, STSSearchBrowserRootViewController, STSSearchModel, STSZKWBrowserHeaderView;

@interface SearchToShareAppViewController : UIViewController <STSPickerSelectionDelegate, STSSearchBrowserRootViewControllerDelegate, PARSessionDelegate, UIGestureRecognizerDelegate, STSRecentsDelegate>
{
    STSPicker *_zkwPicker;
    STSZKWBrowserHeaderView *_zkwHeaderView;
    STSSearchBrowserRootViewController *_searchBrowserRootViewController;
    STSSearchModel *_zkwSearchModel;
    STSSearchModel *_searchBrowserSearchModel;
    NSMutableArray *_recentResults;
    _Bool _updateRecents;
    NSMutableArray *_constraints;
    CDUnknownBlockType _requestExpandedCompletion;
    CDUnknownBlockType _engagementFeedbackBlock;
    unsigned long long _presentationStyle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(copy, nonatomic) CDUnknownBlockType engagementFeedbackBlock; // @synthesize engagementFeedbackBlock=_engagementFeedbackBlock;
@property(copy, nonatomic) CDUnknownBlockType requestExpandedCompletion; // @synthesize requestExpandedCompletion=_requestExpandedCompletion;
- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;
- (id)searchResultForDict:(id)arg1;
- (id)dictForSearchResult:(id)arg1;
- (void)saveRecents;
- (void)_addResultToRecents:(id)arg1;
- (void)_updatePickerBottomInset;
- (void)_setup;
- (void)_transitionContentFromViewController:(id)arg1 toViewController:(id)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateRecentResults:(id)arg1;
- (void)searchBrowserRootViewControllerDidSelectCancel:(id)arg1;
- (void)browserDidTapLogo:(id)arg1;
- (void)requestExpandedPresentationStyleForBrowser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)browserIsPresentedFullscreen:(id)arg1;
- (void)browserSuggestionButtonClicked:(id)arg1 suggestion:(id)arg2;
- (void)browserCategoryButtonClicked:(id)arg1 result:(id)arg2;
- (void)browser:(id)arg1 didSearchFor:(id)arg2;
- (void)browserSearchBarButtonClicked:(id)arg1;
- (void)browser:(id)arg1 didSelectResult:(id)arg2 withPayload:(id)arg3;
- (void)browser:(id)arg1 didSelectProviderLink:(id)arg2;
- (void)browser:(id)arg1 didSelectCategoryResult:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)awakeFromNib;
- (void)updateConstraintsForSearchBrowser;
- (void)updateConstraintsForZKWBrowser;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) STSRootView *view; // @dynamic view;

@end

