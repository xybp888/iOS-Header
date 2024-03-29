//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIContextMenuInteractionDelegate-Protocol.h"

@class CLLocation, GEOPlaceActionDetails, MKMapItem, NSArray, NSString, SearchResult, UIAction, UIAlertController, UIContextMenuInteraction, UIGestureRecognizer, UIMenuElement, UIView, UIViewController, VKLabelMarker;
@protocol OS_dispatch_group, PersonalizedItem, QuickActionMenuPresenterDelegate;

__attribute__((visibility("hidden")))
@interface QuickActionMenuPresenter : NSObject <UIContextMenuInteractionDelegate>
{
    VKLabelMarker *_labelMarker;
    SearchResult *_searchResult;
    MKMapItem *_resolvedMapItem;
    UIAlertController *_alertController;
    UIGestureRecognizer *_orbGesture;
    unsigned long long _resetCounter;
    struct CGPoint _gestureLocationInMap;
    UIView *_gestureSourceView;
    struct CGRect _gestureSourceRect;
    int _uiTarget;
    GEOPlaceActionDetails *_actionDetails;
    UIView *_gestureView;
    UIAction *_directionsAction;
    UIAction *_callAction;
    UIAction *_webAction;
    UIAction *_removeDroppedPinAction;
    UIAction *_dropPinAction;
    UIMenuElement *_shareAction;
    UIMenuElement *_sendMyLocationAction;
    UIAction *_transitLineViewOnMapAction;
    UIAction *_transitLineDirectionsAction;
    _Bool _haveNearestStation;
    NSObject<OS_dispatch_group> *_resolveGroup;
    _Bool _waitingResolution;
    UIContextMenuInteraction *_contextMenuInteraction;
    NSArray *_actions;
    _Bool _actionsDisplayed;
    _Bool _parkedCar;
    _Bool _enabled;
    id <QuickActionMenuPresenterDelegate> _delegate;
    id <PersonalizedItem> _place;
    CLLocation *_lastValidLocation;
    UIViewController *_presentingViewController;
    UIViewController *_containerViewController;
    struct CGPoint _location;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(readonly, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) CLLocation *lastValidLocation; // @synthesize lastValidLocation=_lastValidLocation;
@property(retain, nonatomic) id <PersonalizedItem> place; // @synthesize place=_place;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) VKLabelMarker *labelMarker; // @synthesize labelMarker=_labelMarker;
@property(retain, nonatomic) MKMapItem *resolvedMapItem; // @synthesize resolvedMapItem=_resolvedMapItem;
@property(retain, nonatomic) SearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(nonatomic) __weak id <QuickActionMenuPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resolveNearestTransitStation;
- (struct CLLocationCoordinate2D)coordinate;
- (_Bool)_shouldBeginOrbGestureAtLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (void)updateForPlace:(id)arg1;
- (void)updateForLabelMarker:(id)arg1;
- (void)updateForParkedCar:(id)arg1;
- (void)updateForSearchResult:(id)arg1;
- (void)_updateSearchResultWithMapItemIfNeeded:(id)arg1;
- (void)reset;
- (void)handleTapPreview;
- (void)performAction:(id)arg1;
- (id)_predicateToRemoveAction:(id)arg1;
- (void)updateActionEnableStates;
- (_Bool)_nearestStationEnabled;
- (_Bool)_directionsEnabled;
- (_Bool)_webEnabled;
- (_Bool)_callEnabled;
- (id)transitLineViewOnMapAction;
- (id)transitLineDirectionsAction;
- (id)sendMyLocationAction;
- (id)shareAction;
- (id)removeDroppedPinAction;
- (id)dropPinAction;
- (id)webAction;
- (id)callAction;
- (id)directionsAction;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (id)previewViewController;
- (_Bool)_contextMenuInteractionShouldBegin:(id)arg1;
- (void)_prepareData;
- (void)_prepareActions;
- (void)cancelPresentationGesture;
- (id)initWithView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

