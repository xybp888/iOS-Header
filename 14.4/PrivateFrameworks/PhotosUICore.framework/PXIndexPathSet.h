//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/NSMutableCopying-Protocol.h>

@class NSMutableDictionary;

@interface PXIndexPathSet : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableDictionary *__sectionIndexesByDataSourceIdentifier;
    NSMutableDictionary *__indexesForSectionsWithItemsByDataSourceIdentifier;
    NSMutableDictionary *__itemIndexesBySectionByDataSourceIdentifier;
    NSMutableDictionary *__indexesForItemsWithSubitemsBySectionByDataSourceIdentifier;
    NSMutableDictionary *__subitemIndexesByItemBySectionByDataSourceIdentifier;
}

+ (id)indexPathSet;
+ (id)indexPathSetWithSubitemIndexes:(id)arg1 dataSourceIdentifier:(unsigned long long)arg2 section:(long long)arg3 item:(long long)arg4;
+ (id)indexPathSetWithItemIndexPaths:(id)arg1 dataSourceIdentifier:(unsigned long long)arg2;
+ (id)indexPathSetWithItemIndexes:(id)arg1 dataSourceIdentifier:(unsigned long long)arg2 section:(long long)arg3;
+ (id)indexPathSetWithSectionIndexes:(id)arg1 dataSourceIdentifier:(unsigned long long)arg2;
+ (id)indexPathSetWithIndexPath:(struct PXSimpleIndexPath)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *_subitemIndexesByItemBySectionByDataSourceIdentifier; // @synthesize _subitemIndexesByItemBySectionByDataSourceIdentifier=__subitemIndexesByItemBySectionByDataSourceIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *_indexesForItemsWithSubitemsBySectionByDataSourceIdentifier; // @synthesize _indexesForItemsWithSubitemsBySectionByDataSourceIdentifier=__indexesForItemsWithSubitemsBySectionByDataSourceIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *_itemIndexesBySectionByDataSourceIdentifier; // @synthesize _itemIndexesBySectionByDataSourceIdentifier=__itemIndexesBySectionByDataSourceIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *_indexesForSectionsWithItemsByDataSourceIdentifier; // @synthesize _indexesForSectionsWithItemsByDataSourceIdentifier=__indexesForSectionsWithItemsByDataSourceIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *_sectionIndexesByDataSourceIdentifier; // @synthesize _sectionIndexesByDataSourceIdentifier=__sectionIndexesByDataSourceIdentifier;
- (id)description;
- (id)indexPathSetByReplacingDataSourceIdentifier:(unsigned long long)arg1 withDataSourceIdentifier:(unsigned long long)arg2;
- (struct PXSimpleIndexPath)indexPathLessThanIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)indexPathGreaterThanIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)lastItemIndexPathForDataSourceIdentifier:(unsigned long long)arg1;
- (struct PXSimpleIndexPath)firstItemIndexPathForDataSourceIdentifier:(unsigned long long)arg1;
- (void)enumerateDataSourceIdentifiers:(CDUnknownBlockType)arg1;
- (void)enumerateAllIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSubitemIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateItemIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSectionIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (id)subitemIndexSetForDataSourceIdentifier:(unsigned long long)arg1 section:(long long)arg2 item:(long long)arg3;
- (id)itemsWithSubitemsForDataSourceIdentifier:(unsigned long long)arg1 section:(long long)arg2;
- (id)itemIndexSetForDataSourceIdentifier:(unsigned long long)arg1 section:(long long)arg2;
- (id)sectionsWithItemsForDataSourceIdentifier:(unsigned long long)arg1;
- (id)sectionIndexSetForDataSourceIdentifier:(unsigned long long)arg1;
- (void)enumerateSubitemIndexSetsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateItemIndexSetsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSectionIndexSetsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) struct PXSimpleIndexPath anySubitemIndexPath;
@property(readonly, nonatomic) struct PXSimpleIndexPath anyItemIndexPath;
@property(readonly, nonatomic) struct PXSimpleIndexPath anySectionIndexPath;
@property(readonly, nonatomic) long long subitemCount;
@property(readonly, nonatomic) long long itemCount;
@property(readonly, nonatomic) long long sectionCount;
@property(readonly, nonatomic) long long count;
- (_Bool)isSubsetOfSet:(id)arg1;
- (_Bool)isSupersetOfSet:(id)arg1;
- (_Bool)intersectsSet:(id)arg1;
- (_Bool)containsIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

