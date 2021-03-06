//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKDashboardViewController.h>

#import <PassKitUI/CNAvatarViewDelegate-Protocol.h>

@class NSIndexPath, NSObject, NSString, PKAnimatedNavigationBarTitleView, PKContactAvatarManager, PKContinuousButton, PKFamilyMemberCollection, PKNavigationController, PKPaymentTransaction, PKSpendingSummaryFooterContainer, PKSpendingSummaryFooterView, PKTransactionHistoryHeaderPresenter, PKTransactionSourceCollection, UIImageView;
@protocol OS_dispatch_source;

@interface PKTransactionHistoryViewController : PKDashboardViewController <CNAvatarViewDelegate>
{
    PKSpendingSummaryFooterView *_footer;
    PKSpendingSummaryFooterContainer *_footerContainer;
    _Bool _loadingMapsViewController;
    NSObject<OS_dispatch_source> *_loadingMapsTimer;
    PKContinuousButton *_detailsButton;
    PKContinuousButton *_phoneButton;
    PKContinuousButton *_messageButton;
    struct UIEdgeInsets _lastContentInset;
    double _headerHeight;
    PKNavigationController *_navigationController;
    NSIndexPath *_headerIndexPath;
    double _merchantHeaderAnimationProgress;
    PKAnimatedNavigationBarTitleView *_titleView;
    UIImageView *_titleIconImageView;
    NSString *_titleText;
    PKTransactionHistoryHeaderPresenter *_headerPresenter;
    PKContactAvatarManager *_contactAvatarManager;
    _Bool _isHeaderPinned;
    PKPaymentTransaction *_transaction;
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKFamilyMemberCollection *_familyCollection;
    unsigned long long _historyType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PKContactAvatarManager *contactAvatarManager; // @synthesize contactAvatarManager=_contactAvatarManager;
@property(readonly, nonatomic) unsigned long long historyType; // @synthesize historyType=_historyType;
@property(readonly, nonatomic) PKFamilyMemberCollection *familyCollection; // @synthesize familyCollection=_familyCollection;
@property(readonly, nonatomic) PKTransactionSourceCollection *transactionSourceCollection; // @synthesize transactionSourceCollection=_transactionSourceCollection;
@property(readonly, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)_showMapsDetailsViewController;
- (void)_showContactDetailsViewController;
- (void)_handlePhoneButtonTapped:(id)arg1;
- (void)_handleMessageButtonTapped:(id)arg1;
- (void)_handleInfoButtonTapped:(id)arg1;
- (id)_barButtonItems;
- (CDStruct_8f3a66c8)pkui_navigationStatusBarStyleDescriptor;
- (void)_updateNavigationBarIconWithLogoURL:(id)arg1;
- (void)_updateHeaderCellWithAnimationProgress:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)updateContent;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_updateNavigationBarIconForNavigationBarAppeared:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)updateGroups:(id)arg1 headerGroup:(id)arg2;
- (id)initWithTransactionGroups:(id)arg1 headerGroup:(id)arg2 groupPresenter:(id)arg3 regionUpdater:(id)arg4 tokens:(id)arg5 transactionSourceCollection:(id)arg6 familyCollection:(id)arg7 account:(id)arg8 accountUserCollection:(id)arg9;
- (id)initWithInstallmentPlan:(id)arg1 transactionSourceCollection:(id)arg2 familyCollection:(id)arg3 account:(id)arg4 accountUserCollection:(id)arg5;
- (void)updateGroup:(id)arg1;
- (id)initWithTransactionGroup:(id)arg1 transactionSourceCollection:(id)arg2 familyCollection:(id)arg3 account:(id)arg4 accountUserCollection:(id)arg5 fetcher:(id)arg6 transactionHistory:(id)arg7;
- (id)initWithFetcher:(id)arg1 transactionSourceCollection:(id)arg2 familyCollection:(id)arg3 account:(id)arg4 accountUserCollection:(id)arg5 featuredTransaction:(id)arg6 selectedTransactions:(id)arg7 transactionHistory:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

