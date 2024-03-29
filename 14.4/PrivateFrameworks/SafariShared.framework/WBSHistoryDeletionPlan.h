//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableSet, NSSet;
@protocol WBSHistoryStore;

@interface WBSHistoryDeletionPlan : NSObject
{
    id <WBSHistoryStore> _store;
    NSSet *_excludedItems;
    NSSet *_excludedVisits;
    NSMutableSet *_discoveredItemsToDelete;
    _Bool _wasPrepared;
    NSSet *_triggeringItems;
    NSSet *_triggeringVisits;
    NSSet *_discoveredVisitsToDelete;
    NSMapTable *_updatedLastVisitsByItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool wasPrepared; // @synthesize wasPrepared=_wasPrepared;
@property(readonly, nonatomic) NSMapTable *updatedLastVisitsByItem; // @synthesize updatedLastVisitsByItem=_updatedLastVisitsByItem;
@property(readonly, nonatomic) NSSet *discoveredVisitsToDelete; // @synthesize discoveredVisitsToDelete=_discoveredVisitsToDelete;
@property(readonly, nonatomic) NSSet *discoveredItemsToDelete; // @synthesize discoveredItemsToDelete=_discoveredItemsToDelete;
@property(readonly, nonatomic) NSSet *triggeringVisits; // @synthesize triggeringVisits=_triggeringVisits;
@property(readonly, nonatomic) NSSet *triggeringItems; // @synthesize triggeringItems=_triggeringItems;
- (id)_extraVisitsToDeleteWhenDeletingItems:(id)arg1 visits:(id)arg2 relatedVisitKey:(id)arg3 relatedVisitsQueryFactory:(CDUnknownBlockType)arg4;
- (id)_extraVisitsToDeleteWhenDeletingItems:(id)arg1 visits:(id)arg2;
- (void)_prepareWithTriggeringItems:(id)arg1 triggeringVisits:(id)arg2;
@property(readonly, nonatomic) NSMapTable *allVisitsToDeleteByItemExcludingItemsBeingDeleted;
@property(readonly, nonatomic) NSSet *allVisitsToDeleteExcludingVisitsFromItemsBeingDeleted;
@property(readonly, nonatomic) NSSet *allItemsToDelete;
- (id)initWithSQLiteStore:(id)arg1 triggeringVisits:(id)arg2 updatedLastVisitsByItem:(id)arg3;
- (id)initWithSQLiteStore:(id)arg1 discoveredItemsToDelete:(id)arg2;
- (id)initWithSQLiteStore:(id)arg1 triggeringVisits:(id)arg2 excludingItems:(id)arg3 visits:(id)arg4;
- (id)initWithSQLiteStore:(id)arg1 triggeringItems:(id)arg2 excludingItems:(id)arg3 visits:(id)arg4 reason:(long long)arg5;

@end

