//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class MapsSyncManagedCollectionPlaceItem, MapsSyncManagedFavoriteItem, MapsSyncManagedHistoryPlaceItem, NSData;

__attribute__((visibility("hidden")))
@interface MapsSyncManagedMixinMapItem : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, retain) MapsSyncManagedCollectionPlaceItem *collectionPlaceItem; // @dynamic collectionPlaceItem;
@property(nonatomic, retain) MapsSyncManagedFavoriteItem *favoriteItem; // @dynamic favoriteItem;
@property(nonatomic, retain) MapsSyncManagedHistoryPlaceItem *historyPlaceItem; // @dynamic historyPlaceItem;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(nonatomic, copy) NSData *mapItemStorage; // @dynamic mapItemStorage;

@end

