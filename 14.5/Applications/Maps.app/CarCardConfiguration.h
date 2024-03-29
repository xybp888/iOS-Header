//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CarCard-Protocol.h"
#import "NSCopying-Protocol.h"

@class CarCardContainerView, CarCardView, NSArray, NSDictionary, NSString, UILayoutGuide, UIView, UIViewController;
@protocol CarCardContent;

__attribute__((visibility("hidden")))
@interface CarCardConfiguration : NSObject <CarCard, NSCopying>
{
    CDStruct_de0926f2 _lastLayout;
    _Bool _lastStaysOnTop;
    unsigned long long _invalidationState;
    _Bool _ignoreContainerBoundsChanges;
    _Bool _staysOnTop;
    _Bool _hidden;
    _Bool _transitioning;
    UIViewController<CarCardContent> *_content;
    NSString *_title;
    long long _titleNumberOfLines;
    unsigned long long _accessory;
    UIView *_accessoryView;
    CDUnknownBlockType _selectionHandler;
    NSString *_key;
    CarCardView *_cardView;
    CarCardContainerView *_containerView;
    NSArray *_showingConstraints;
    NSArray *_hidingConstraints;
    NSArray *_viewportConstraints;
    NSArray *_mapInsetsConstraints;
    NSArray *_collisionConstraints;
    NSDictionary *_collisionLayoutGuides;
    UILayoutGuide *_contentLayoutGuide;
    UIViewController<CarCardContent> *_previousContent;
    CDStruct_de0926f2 _layout;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController<CarCardContent> *previousContent; // @synthesize previousContent=_previousContent;
@property(readonly, nonatomic) unsigned long long invalidationState; // @synthesize invalidationState=_invalidationState;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(readonly, nonatomic) UILayoutGuide *contentLayoutGuide; // @synthesize contentLayoutGuide=_contentLayoutGuide;
@property(readonly, nonatomic) NSDictionary *collisionLayoutGuides; // @synthesize collisionLayoutGuides=_collisionLayoutGuides;
@property(readonly, nonatomic) NSArray *collisionConstraints; // @synthesize collisionConstraints=_collisionConstraints;
@property(readonly, nonatomic) NSArray *mapInsetsConstraints; // @synthesize mapInsetsConstraints=_mapInsetsConstraints;
@property(readonly, nonatomic) NSArray *viewportConstraints; // @synthesize viewportConstraints=_viewportConstraints;
@property(readonly, nonatomic) NSArray *hidingConstraints; // @synthesize hidingConstraints=_hidingConstraints;
@property(readonly, nonatomic) NSArray *showingConstraints; // @synthesize showingConstraints=_showingConstraints;
@property(readonly, nonatomic) CarCardContainerView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) CarCardView *cardView; // @synthesize cardView=_cardView;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) unsigned long long accessory; // @synthesize accessory=_accessory;
@property(nonatomic) long long titleNumberOfLines; // @synthesize titleNumberOfLines=_titleNumberOfLines;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool staysOnTop; // @synthesize staysOnTop=_staysOnTop;
@property(nonatomic) CDStruct_de0926f2 layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UIViewController<CarCardContent> *content; // @synthesize content=_content;
- (void)_stopIgnoringContainerBoundsChanges;
- (void)_startIgnoringContainerBoundsChanges;
- (void)_updateAvailableCardSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_setShowContainerVisualisation:(_Bool)arg1;
@property(readonly, nonatomic) unsigned long long effectiveEdgesAffectingMapInsets;
@property(readonly, nonatomic) struct UIEdgeInsets effectiveMargins;
@property(readonly, nonatomic) unsigned long long effectiveCornerPosition;
@property(readonly, nonatomic) unsigned long long effectiveEdgePosition;
- (void)updateVisibility;
- (struct CGRect)collisionLayoutGuideFrameForEdge:(unsigned long long)arg1;
- (id)_collisionLayoutGuidesForHost:(id)arg1;
- (id)_collisionConstraintsForHost:(id)arg1;
- (id)_mapInsetsConstraintsForHost:(id)arg1;
- (id)_viewportConstraintsForHost:(id)arg1;
- (id)_hidingLayoutConstraintsForHost:(id)arg1;
- (id)_showingLayoutConstraintsForHost:(id)arg1;
- (id)_sharedLayoutConstraintsForHost:(id)arg1;
- (void)_updateCardContainerPriorities;
- (id)_cardToContainerLayoutConstraints;
- (void)_prepareConstraintsForHost:(id)arg1;
- (void)_resetConstraints;
- (void)_applyToCardView;
- (void)layoutInHost:(id)arg1;
@property(readonly, nonatomic) unsigned long long focusSortValue;
- (void)reset;
- (void)clear;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

