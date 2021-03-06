//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSError;
@protocol FPCollectionDataSource;

@protocol FPCollectionDataSourceDelegate
- (_Bool)dataSourceShouldAlwaysReplaceContents:(id <FPCollectionDataSource>)arg1;
- (void)dataSource:(id <FPCollectionDataSource>)arg1 wasInvalidatedWithError:(NSError *)arg2;
- (void)dataSource:(id <FPCollectionDataSource>)arg1 receivedUpdatedItems:(NSArray *)arg2 deletedItems:(NSArray *)arg3 hasMoreChanges:(_Bool)arg4;
- (void)dataSource:(id <FPCollectionDataSource>)arg1 replaceContentsWithItems:(NSArray *)arg2 hasMoreChanges:(_Bool)arg3;
@end

