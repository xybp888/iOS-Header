//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKPlaceActionManagerProtocol-Protocol.h>

@class MKPlaceCardActionItem, NSString, TUCallProvider;

@interface MKPlaceActionManager : NSObject <MKPlaceActionManagerProtocol>
{
    MKPlaceCardActionItem *_favoriteActionItem;
    MKPlaceCardActionItem *_homeActionItem;
    MKPlaceCardActionItem *_collectionActionItem;
    MKPlaceCardActionItem *_callActionItem;
    MKPlaceCardActionItem *_websiteActionItem;
    MKPlaceCardActionItem *_brandStoreActionItem;
    TUCallProvider *_callProvider;
    _Bool _placeInBookmarks;
    _Bool _placeInShortcuts;
    _Bool _showContactActions;
    _Bool _isCurrentLocation;
    id _placeCardDelegate;
    id _transitCardDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id transitCardDelegate; // @synthesize transitCardDelegate=_transitCardDelegate;
@property(nonatomic) __weak id placeCardDelegate; // @synthesize placeCardDelegate=_placeCardDelegate;
@property(nonatomic) _Bool isCurrentLocation; // @synthesize isCurrentLocation=_isCurrentLocation;
@property(nonatomic) _Bool showContactActions; // @synthesize showContactActions=_showContactActions;
@property(nonatomic) _Bool placeInShortcuts; // @synthesize placeInShortcuts=_placeInShortcuts;
@property(nonatomic) _Bool placeInBookmarks; // @synthesize placeInBookmarks=_placeInBookmarks;
- (void)openURL:(id)arg1;
- (void)performAction:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_isCurrentLocationOrDroppedPin;
- (void)_canMakeCalls:(CDUnknownBlockType)arg1;
- (void)_launchMaps;
- (id)optIntoAddingContributionsAction;
- (id)reportAProblemAddPlaceFooterAction;
- (id)reportAProblemFooterAction;
- (id)shortPlacecardFooterActions;
- (id)createFooterActions;
- (void)addLayoutInfoIfNeeded:(id)arg1;
- (void)_enableStoreAction;
- (id)createRowActionsWithStyle:(unsigned long long)arg1;
- (id)createMenuActions;
- (id)addtoHomeItem;
- (id)collectionItemForFooter:(_Bool)arg1;
- (id)favoriteItemForFooter;
- (_Bool)_showHomeShortcutItem;
- (_Bool)_showCollectionItem;
- (_Bool)_showAddPlaceEdit;
- (_Bool)_showReportAnIssue;
- (_Bool)_showReportAProblem;
- (_Bool)_showMapItemIdentifier;
- (unsigned long long)options;
- (id)placeItem;
- (id)mapItem;
- (id)contact;
- (id)transitLineItem;
- (id)transitDelegate;
- (id)delegate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

