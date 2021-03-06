//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBHTableViewController.h>

#import <SpringBoardHome/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoardHome/SBHLibraryChildViewController-Protocol.h>
#import <SpringBoardHome/SBHSearchResultsUpdating-Protocol.h>
#import <SpringBoardHome/SBHTableViewIconLibraryObserver-Protocol.h>
#import <SpringBoardHome/SBIconObserver-Protocol.h>
#import <SpringBoardHome/SBIconViewObserver-Protocol.h>
#import <SpringBoardHome/UIGestureRecognizerDelegate-Protocol.h>
#import <SpringBoardHome/UITableViewDelegatePrivate-Protocol.h>
#import <SpringBoardHome/UITableViewDragDelegate-Protocol.h>

@class NSHashTable, NSMapTable, NSSet, NSString, SBFolderIconImageCache, SBHAppLibrarySettings, SBHIconImageCache, SBHIconLibraryQuery, SBHIconModel, SBHIconTableViewDiffableDataSource, SBHLibraryCategoryMap, SBHLibrarySearchController, SBHTableViewIconLibrary, SBIconView, SBRootFolder, UIView, _UILegibilitySettings;
@protocol SBHIconLibraryTableViewControllerObserver, SBIconListLayoutProvider, SBIconViewProviding;

@interface SBHIconLibraryTableViewController : SBHTableViewController <SBIconObserver, SBIconViewObserver, PTSettingsKeyObserver, UITableViewDelegatePrivate, UITableViewDragDelegate, UIGestureRecognizerDelegate, SBHTableViewIconLibraryObserver, SBHLibraryChildViewController, SBHSearchResultsUpdating>
{
    _Bool _showHeaders;
    _Bool _needsLowQualityAlphaFade;
    NSHashTable *_grabbedIconViews;
    NSHashTable *_observedIcons;
    NSMapTable *_dragSessionsForIconView;
    SBHAppLibrarySettings *_settings;
    _Bool _hasAppeared;
    SBIconView *_cachedHiddenIconView;
    _UILegibilitySettings *_legibilitySettings;
    SBHIconTableViewDiffableDataSource *_dataSource;
    SBHIconImageCache *_iconImageCache;
    id <SBIconListLayoutProvider> _listLayoutProvider;
    SBHLibrarySearchController *_searchController;
    id <SBIconViewProviding> _iconViewProvider;
    id <SBHIconLibraryTableViewControllerObserver> _observer;
    SBHIconModel *_iconModel;
    SBRootFolder *_rootFolder;
    SBHLibraryCategoryMap *_libraryCategoryMap;
    UIView *_headerBlurView;
    SBHTableViewIconLibrary *_library;
    SBHIconLibraryQuery *_currentQuery;
}

+ (Class)tableViewClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) SBHIconLibraryQuery *currentQuery; // @synthesize currentQuery=_currentQuery;
@property(readonly, nonatomic) SBHTableViewIconLibrary *library; // @synthesize library=_library;
@property(retain, nonatomic) UIView *headerBlurView; // @synthesize headerBlurView=_headerBlurView;
@property(retain, nonatomic) SBHLibraryCategoryMap *libraryCategoryMap; // @synthesize libraryCategoryMap=_libraryCategoryMap;
@property(retain, nonatomic) SBRootFolder *rootFolder; // @synthesize rootFolder=_rootFolder;
@property(retain, nonatomic) SBHIconModel *iconModel; // @synthesize iconModel=_iconModel;
@property(nonatomic) __weak id <SBHIconLibraryTableViewControllerObserver> observer; // @synthesize observer=_observer;
@property(retain, nonatomic) id <SBIconViewProviding> iconViewProvider; // @synthesize iconViewProvider=_iconViewProvider;
@property(nonatomic) __weak SBHLibrarySearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) id <SBIconListLayoutProvider> listLayoutProvider; // @synthesize listLayoutProvider=_listLayoutProvider;
@property(retain, nonatomic) SBHIconImageCache *iconImageCache; // @synthesize iconImageCache=_iconImageCache;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
- (id)_createIconView;
- (id)_iconViewAtIndexPath:(id)arg1;
- (id)_iconViewForIcon:(id)arg1;
- (void)_notifyDelegatesOfAppLaunchFromSearchController:(id)arg1;
- (void)_handleDidTapEmptyResultsArea:(id)arg1;
- (void)_logLaunchOfIcon:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)_shouldShowNoResultsViewForQueryResult:(id)arg1;
- (void)_configureCell:(id)arg1 forIcon:(id)arg2;
- (_Bool)_isIndexPathVisible:(id)arg1;
- (_Bool)_isViewControllerVisible;
- (id)_visibleIndexPaths;
- (id)_visibleSectionIndicies;
- (id)_visibleIcons;
- (void)_reloadRowsAtIndexPaths:(id)arg1;
- (void)_reloadVisibleCells;
- (void)_updateShowHeadersFromQueryResult:(id)arg1;
- (void)iconLibrary:(id)arg1 hasUpdatedQueryResult:(id)arg2;
- (void)_reloadAppIcons:(_Bool)arg1;
- (CDUnknownBlockType)_iconFilter;
- (void)_resetDragSession:(id)arg1;
- (void)_mapIconView:(id)arg1 forDragSession:(id)arg2;
- (id)_dragSessionForIconView:(id)arg1;
- (id)_iconViewForDragSession:(id)arg1;
- (id)_processDragItemsForIconView:(id)arg1 session:(id)arg2;
- (_Bool)tableView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2;
- (id)tableView:(id)arg1 dragPreviewParametersForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 dragSessionDidEnd:(id)arg2;
- (void)tableView:(id)arg1 dragSessionWillBegin:(id)arg2;
- (id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (void)_setupObservedIcons;
- (void)_teardownObservedIcons;
- (void)_stopObservingIcon:(id)arg1;
- (_Bool)_startObservingIcon:(id)arg1;
- (void)_unobserveIcon:(id)arg1;
- (_Bool)_observeIcon:(id)arg1;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (void)iconViewDidEndDrag:(id)arg1;
- (void)iconViewWillBeginDrag:(id)arg1;
- (id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;
- (void)enumerateDisplayedIconViewsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;
- (_Bool)isDisplayingIconView:(id)arg1;
- (_Bool)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;
- (_Bool)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;
- (_Bool)isDisplayingIcon:(id)arg1;
- (id)firstIconViewForIcon:(id)arg1;
- (id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;
- (id)iconViewForIcon:(id)arg1 location:(id)arg2;
@property(readonly, copy, nonatomic) NSSet *presentedIconLocations;
- (_Bool)isPresentingIconLocation:(id)arg1;
- (id)_indexPathForDefaultSearchResult;
- (_Bool)searchControllerShouldReturn:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handleAlphaFadeForCellAtIndexPath:(id)arg1;
- (void)_handleLowQualityAlphaFade;
- (void)_handleClippingScrollViewDidScroll:(id)arg1;
- (id)_findHiddenIconView;
- (void)_updateHiddenIconViewForScrolling:(_Bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (struct CGRect)tableView:(id)arg1 frameForSectionIndexGivenProposedFrame:(struct CGRect)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_refreshIconIfVisible:(id)arg1;
- (void)_refreshLibrary:(id)arg1;
- (void)_refreshLibraryForSearchUpdate:(_Bool)arg1;
- (void)_iconModelWillReload:(id)arg1;
@property(readonly, nonatomic) SBHIconTableViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)_updateTableViewSeparatorsForTraitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) SBFolderIconImageCache *folderIconImageCache;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

