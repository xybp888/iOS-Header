//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray;
@protocol VenueCardItem, VenueCardStackObserver, VenuesStackDataSource;

@protocol VenueCardStack
@property(nonatomic) __weak id <VenuesStackDataSource> dataSource;
@property(readonly, nonatomic) NSArray *allItems;
- (void)removeStackObserver:(id <VenueCardStackObserver>)arg1;
- (void)addStackObserver:(id <VenueCardStackObserver>)arg1;
- (_Bool)canPushVenueCardItem:(id <VenueCardItem>)arg1;
- (void)clearStack;
- (void)popVenueCard:(void (^)(id <VenueCardItem>, id <VenueCardItem>, VenueMapSearchState *))arg1;
- (unsigned long long)pushVenueCardItem:(id <VenueCardItem>)arg1 withSource:(unsigned long long)arg2 savePlaceCardSelectionState:(_Bool)arg3;
- (unsigned long long)pushVenueCardItem:(id <VenueCardItem>)arg1 withSource:(unsigned long long)arg2;
@end

