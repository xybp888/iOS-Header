//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "BookmarkFavoritesViewControllerDelegate-Protocol.h"
#import "BookmarksTableViewControllerDelegate-Protocol.h"
#import "HistoryTableViewControllerDelegate-Protocol.h"
#import "ReadingListViewControllerDelegate-Protocol.h"
#import "UINavigationBarDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "_SFBookmarkInfoViewControllerDelegate-Protocol.h"
#import "_SFNavigationIntentHandling-Protocol.h"

@class BookmarkFavoritesViewController, NSArray, NSMutableDictionary, NSObject, NSString, NSTimer, UIBarButtonItem, UISegmentedControl, WebBookmarkCollection, WebBookmarkReadonlyCollection, _UINavigationBarPalette;
@protocol BookmarksNavigationControllerDelegate, LinkPreviewProvider, OS_dispatch_queue, _SFNavigationIntentHandling;

@interface BookmarksNavigationController : UINavigationController <BookmarkFavoritesViewControllerDelegate, BookmarksTableViewControllerDelegate, HistoryTableViewControllerDelegate, ReadingListViewControllerDelegate, _SFBookmarkInfoViewControllerDelegate, UINavigationBarDelegate, UINavigationControllerDelegate, _SFNavigationIntentHandling>
{
    WebBookmarkCollection *_bookmarkCollection;
    WebBookmarkReadonlyCollection *_readonlyCollection;
    NSObject<OS_dispatch_queue> *_readonlyCollectionQueue;
    NSTimer *_bookmarkSyncTimer;
    _Bool _hasScheduledBookmarkSyncTimer;
    _Bool _allowsEditing;
    _Bool _isEditing;
    _Bool _needsReloadSavedState;
    _Bool _contentDirtyFlag;
    UIBarButtonItem *_createFolderButtonItem;
    UIBarButtonItem *_editButtonItem;
    UIBarButtonItem *_editingDoneButtonItem;
    UIBarButtonItem *_flexibleSpaceItem;
    _Bool _showCollections;
    UISegmentedControl *_collectionSegmentedControl;
    _Bool _showOnlyFavorites;
    NSArray *_topLevelCollections;
    NSString *_currentCollection;
    NSMutableDictionary *_savedCollectionState;
    _UINavigationBarPalette *_palette;
    UIBarButtonItem *_doneButtonItem;
    _Bool _adjustedForSidebar;
    _Bool _hasTranslucentAppearance;
    _Bool _isShowingPopover;
    _Bool _contentBorrowed;
    _Bool _doneButtonHidden;
    id <BookmarksNavigationControllerDelegate> _bookmarksNavigationControllerDelegate;
    id <LinkPreviewProvider> _linkPreviewProvider;
    id <_SFNavigationIntentHandling> _navigationIntentHandler;
    struct UIEdgeInsets _contentInset;
    struct UIEdgeInsets _tableSeparatorInset;
}

+ (void)test_setSavedStateCollection:(id)arg1;
+ (id)test_savedStateCollection;
- (void).cxx_destruct;
@property(nonatomic) _Bool doneButtonHidden; // @synthesize doneButtonHidden=_doneButtonHidden;
@property(retain, nonatomic) NSString *currentCollection; // @synthesize currentCollection=_currentCollection;
@property(nonatomic, getter=isContentBorrowed) _Bool contentBorrowed; // @synthesize contentBorrowed=_contentBorrowed;
@property(nonatomic) _Bool isShowingPopover; // @synthesize isShowingPopover=_isShowingPopover;
@property(nonatomic) _Bool hasTranslucentAppearance; // @synthesize hasTranslucentAppearance=_hasTranslucentAppearance;
@property(nonatomic) _Bool adjustedForSidebar; // @synthesize adjustedForSidebar=_adjustedForSidebar;
@property(nonatomic) struct UIEdgeInsets tableSeparatorInset; // @synthesize tableSeparatorInset=_tableSeparatorInset;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) __weak id <_SFNavigationIntentHandling> navigationIntentHandler; // @synthesize navigationIntentHandler=_navigationIntentHandler;
@property(nonatomic) __weak id <LinkPreviewProvider> linkPreviewProvider; // @synthesize linkPreviewProvider=_linkPreviewProvider;
@property(nonatomic) __weak id <BookmarksNavigationControllerDelegate> bookmarksNavigationControllerDelegate; // @synthesize bookmarksNavigationControllerDelegate=_bookmarksNavigationControllerDelegate;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
- (_Bool)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)arg1;
- (void)readingListViewControllerDidEndEditing:(id)arg1;
- (void)readingListViewControllerDidBeginEditing:(id)arg1;
- (void)readingListViewController:(id)arg1 setBookmark:(id)arg2 asRead:(_Bool)arg3;
- (void)readingListViewController:(id)arg1 updateUnreadFilterShowingAllBookmarks:(_Bool)arg2;
- (id)readingListViewControllerCurrentReadingListItem:(id)arg1;
- (void)historyTableViewControllerDidDismissPopover:(id)arg1;
- (void)historyTableViewControllerDidPresentPopover:(id)arg1;
- (void)historyTableViewControllerDidEndEditing:(id)arg1;
- (void)historyTableViewControllerDidBeginEditing:(id)arg1;
- (void)bookmarksTableViewControllerDidEndEditing:(id)arg1;
- (void)bookmarksTableViewControllerDidBeginEditing:(id)arg1;
- (struct UIEdgeInsets)contentInsetForBookmarksTableViewController:(id)arg1;
- (struct UIEdgeInsets)separatorInsetForBookmarksTableViewController:(id)arg1;
- (struct UIEdgeInsets)contentInsetForFavoritesViewController:(id)arg1;
- (void)bookmarkFavoritesViewController:(id)arg1 provideContextResponseWithBlock:(CDUnknownBlockType)arg2;
- (void)didTapOutsideBookmarkFavoritesViewController:(id)arg1;
- (void)bookmarkFavoritesViewControllerContentDidBecomeDirty:(id)arg1;
- (_Bool)bookmarkFavoritesViewControllerIsPresentedInsideBlankTab:(id)arg1;
- (long long)bookmarkFavoritesViewControllerFavoritesGridViewLayoutType:(id)arg1;
- (void)bookmarkFavoritesViewController:(id)arg1 editBookmark:(id)arg2;
- (void)setPinnedPaletteForPanelViewController:(id)arg1;
- (void)panelViewController:(id)arg1 updateToolbarItemsAnimated:(_Bool)arg2;
- (_Bool)panelViewControllerShouldTranslucentAppearance:(id)arg1;
- (void)dispatchNavigationIntent:(id)arg1;
- (void)handleNavigationIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)_setContentsDirty;
- (void)_clearBookmarkSyncTimer;
- (void)_bookmarkSyncTimerDidFire:(id)arg1;
- (void)_updateDoneButtonItemForViewController:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (_Bool)_createSavedPanelStateForTesting;
- (void)_restoreCurrentCollectionState;
- (void)_restorePanelState;
- (void)_savePanelState;
- (void)_loadSavedPanelState;
- (id)newRootViewControllerForCollection:(id)arg1;
- (id)newBookmarksTableViewControllerWithFolder:(id)arg1 skipOffset:(unsigned int)arg2;
- (void)_selectedCollectionChanged:(id)arg1;
- (struct CGSize)_segmentedControlItemOffsetForCollection:(id)arg1;
- (id)_segmentedControlItemForCollection:(id)arg1;
- (void)_doneButtonPressed;
- (void)_setupCollectionSegmentedControlIfNeeded;
- (void)_setupCollections;
- (_Bool)rebaseOnAncestorBookmark:(id)arg1 skipOffset:(unsigned int)arg2;
- (_Bool)rebaseOnDescendentBookmark:(id)arg1;
- (void)reloadBookmarksForFolder:(id)arg1;
- (void)_didPressNewFolderButton;
- (void)toggleEditBookmarks;
- (void)_didPressEditButton;
- (void)_didPressEditingDoneButton;
- (void)_setEditingFromToolbarButton:(_Bool)arg1;
- (void)_updateToolbarItemsForViewController:(id)arg1 animated:(_Bool)arg2;
- (id)_toolbarItemsForViewController:(id)arg1;
- (void)_createToolbarItemsIfNecessary;
- (_Bool)_shouldShowPaletteForViewController:(id)arg1;
- (void)bookmarkSourceContentsChanged:(id)arg1;
- (void)_updateClearHistoryButton;
- (id)_pathForBookmark:(id)arg1 startingFromAncestor:(id)arg2;
- (id)_lastExistingBookmarkWithUUIDs:(id)arg1;
- (void)_reloadSucceeded;
- (void)_reloadFailed;
- (void)reloadViewControllers;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setRootBookmark:(id)arg1 skipOffset:(unsigned int)arg2;
- (id)rootBookmark;
@property(readonly, nonatomic) BookmarkFavoritesViewController *topFavoritesViewController;
@property(readonly, nonatomic) BookmarkFavoritesViewController *rootFavoritesViewController;
- (id)topReadingListViewController;
- (id)topmostBookmarksTableViewController;
- (id)topBookmarksTableViewController;
- (id)topHistoryTableViewController;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)_isVisibleFolderID:(int)arg1;
- (void)_folderContentsDidChange:(id)arg1;
- (void)_webBookmarksDidReload:(id)arg1;
- (void)_applicationSuspended:(id)arg1;
- (void)_updateBookmarkCollection;
- (void)_bookmarkCollectionHasBecomeAvailable:(id)arg1;
- (id)_initWithBookmarksDelegate:(id)arg1 linkPreviewProvider:(id)arg2 topBookmark:(id)arg3 skipOffset:(unsigned int)arg4 showOnlyFavorites:(_Bool)arg5;
- (id)initWithBookmarksDelegate:(id)arg1 linkPreviewProvider:(id)arg2 topBookmark:(id)arg3 skipOffset:(unsigned int)arg4;
- (id)initWithBookmarksDelegate:(id)arg1 linkPreviewProvider:(id)arg2;
- (id)initShowingOnlyFavoritesWithBookmarksDelegate:(id)arg1 linkPreviewProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

