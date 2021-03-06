//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemModule.h>

#import <HomeUI/HFHomeObserver-Protocol.h>

@class HFStaticItem, HFStaticItemProvider, HMHome, HUAvailableRelatedTriggerItemProvider, HUAvailableTriggerItemActivationRequest, NSArray, NSMutableArray, NSSet, NSString;
@protocol HFItemSectionAccessoryButtonHeaderDelegate, HUAvailableRelatedTriggerItemModuleContextProviding;

@interface HUAvailableRelatedTriggerItemModule : HFItemModule <HFHomeObserver>
{
    _Bool _enableNaturalLighting;
    _Bool _automationItemIsLoading;
    NSSet *_itemProviders;
    HFStaticItem *_addAutomationItem;
    NSArray *_relatedItems;
    HMHome *_home;
    id <HFItemSectionAccessoryButtonHeaderDelegate> _editButtonHeaderDelegate;
    id <HUAvailableRelatedTriggerItemModuleContextProviding> _context;
    HFStaticItem *_naturalLightingItem;
    NSString *_sectionHeaderEditButtonTitleKey;
    HUAvailableRelatedTriggerItemProvider *_availableTriggerItemProvider;
    HFStaticItemProvider *_staticItemProvider;
    NSMutableArray *_previouslySortedItems;
    NSArray *_alarmCharacteristics;
    NSArray *_actionBuilderFactories;
    NSArray *_eventOptionsItems;
    HUAvailableTriggerItemActivationRequest *_activeRequest;
    NSMutableArray *_waitingRequests;
}

+ (_Bool)_itemClassSupportsEvents:(id)arg1;
+ (CDUnknownBlockType)sortComparator;
+ (_Bool)shouldShowRecommendation:(id)arg1;
+ (id)defaultContext;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *waitingRequests; // @synthesize waitingRequests=_waitingRequests;
@property(retain, nonatomic) HUAvailableTriggerItemActivationRequest *activeRequest; // @synthesize activeRequest=_activeRequest;
@property(retain, nonatomic) NSArray *eventOptionsItems; // @synthesize eventOptionsItems=_eventOptionsItems;
@property(retain, nonatomic) NSArray *actionBuilderFactories; // @synthesize actionBuilderFactories=_actionBuilderFactories;
@property(retain, nonatomic) NSArray *alarmCharacteristics; // @synthesize alarmCharacteristics=_alarmCharacteristics;
@property(retain, nonatomic) NSMutableArray *previouslySortedItems; // @synthesize previouslySortedItems=_previouslySortedItems;
@property(retain, nonatomic) HFStaticItemProvider *staticItemProvider; // @synthesize staticItemProvider=_staticItemProvider;
@property(retain, nonatomic) HUAvailableRelatedTriggerItemProvider *availableTriggerItemProvider; // @synthesize availableTriggerItemProvider=_availableTriggerItemProvider;
@property(retain, nonatomic) NSString *sectionHeaderEditButtonTitleKey; // @synthesize sectionHeaderEditButtonTitleKey=_sectionHeaderEditButtonTitleKey;
@property(nonatomic) _Bool automationItemIsLoading; // @synthesize automationItemIsLoading=_automationItemIsLoading;
@property(nonatomic) _Bool enableNaturalLighting; // @synthesize enableNaturalLighting=_enableNaturalLighting;
@property(retain, nonatomic) HFStaticItem *naturalLightingItem; // @synthesize naturalLightingItem=_naturalLightingItem;
@property(readonly, nonatomic) id <HUAvailableRelatedTriggerItemModuleContextProviding> context; // @synthesize context=_context;
@property(nonatomic) __weak id <HFItemSectionAccessoryButtonHeaderDelegate> editButtonHeaderDelegate; // @synthesize editButtonHeaderDelegate=_editButtonHeaderDelegate;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSArray *relatedItems; // @synthesize relatedItems=_relatedItems;
@property(retain, nonatomic) HFStaticItem *addAutomationItem; // @synthesize addAutomationItem=_addAutomationItem;
- (void)_updateRelatedItems:(id)arg1;
- (id)_buildItemProviders;
- (id)_accessoryCategoryUserFrieindlyDescription;
- (void)didActivateItem:(id)arg1 active:(_Bool)arg2 error:(id)arg3;
- (id)_activateItem:(id)arg1 active:(_Bool)arg2;
- (void)_performRequest:(id)arg1;
- (_Bool)shouldHideAutomationsModule;
- (_Bool)_editingAvailableWithDisplayedItems:(id)arg1;
- (_Bool)relatedItemsCanBeAutomated;
- (id)progressivelySortItems:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)itemProviders;
- (id)serviceTypes;
- (id)serviceTypesSupportingAutomation;
- (id)itemsToHideInSet:(id)arg1;
- (void)_finishCommitWithItems:(id)arg1 updatesDelayReason:(id)arg2;
- (id)activateAllSelectedItems;
- (id)activateItem:(id)arg1 active:(_Bool)arg2;
- (void)home:(id)arg1 didRemoveTrigger:(id)arg2;
- (void)home:(id)arg1 didAddTrigger:(id)arg2;
- (void)initialSetup;
- (id)initWithItems:(id)arg1 itemUpdater:(id)arg2 home:(id)arg3 context:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

