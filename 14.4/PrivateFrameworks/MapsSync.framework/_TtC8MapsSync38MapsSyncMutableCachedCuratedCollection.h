//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSync/_TtC8MapsSync23MapsSyncMutableBaseItem.h>

@class MISSING_TYPE, NSData, NSDate, NSString;

@interface _TtC8MapsSync38MapsSyncMutableCachedCuratedCollection : _TtC8MapsSync23MapsSyncMutableBaseItem
{
    MISSING_TYPE *_proxy;
}

- (void).cxx_destruct;
@property(nonatomic) int resultProviderIdentifier;
@property(nonatomic, copy) NSString *titleLocale;
@property(nonatomic, copy) NSString *publisherAttribution;
@property(nonatomic) int placesCount;
@property(nonatomic, copy) NSDate *lastSignificantChangeDate;
@property(nonatomic, copy) NSDate *lastFetchedDate;
@property(nonatomic) _Bool isTombstone;
@property(nonatomic) unsigned long long curatedCollectionIdentifier;
@property(nonatomic, copy) NSString *title;
@property(nonatomic, copy) NSString *imageUrl;
@property(nonatomic, copy) NSData *image;
@property(nonatomic, copy) NSString *collectionDescription;
- (id)initWithProxyObject:(id)arg1;

@end

