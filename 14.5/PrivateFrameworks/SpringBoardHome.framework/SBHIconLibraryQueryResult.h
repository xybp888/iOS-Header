//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSDiffableDataSourceSnapshot, NSSet, SBHIconLibraryQuery, SBHLocalizedIndexedCollation;

@interface SBHIconLibraryQueryResult : NSObject <NSCopying>
{
    NSDictionary *_iconForItemIdentifier;
    unsigned long long _totalNumberOfItems;
    unsigned long long _queryResultIdx;
    SBHIconLibraryQuery *_query;
    NSSet *_icons;
    SBHLocalizedIndexedCollation *_collation;
    NSDiffableDataSourceSnapshot *_snapshot;
    unsigned long long _sortMethodology;
}

+ (void)_hydrateSnapshot:(id)arg1 fromIcons:(id)arg2 query:(id)arg3 outCollation:(id *)arg4 outIconForItemIdentifier:(id *)arg5 outSortMethodology:(unsigned long long *)arg6 sortComparator:(CDUnknownBlockType)arg7;
+ (id)nullQueryResults;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long sortMethodology; // @synthesize sortMethodology=_sortMethodology;
@property(copy, nonatomic) NSDiffableDataSourceSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(retain, nonatomic) SBHLocalizedIndexedCollation *collation; // @synthesize collation=_collation;
@property(readonly, copy, nonatomic) NSSet *icons; // @synthesize icons=_icons;
@property(readonly, nonatomic) SBHIconLibraryQuery *query; // @synthesize query=_query;
- (id)iconsForSectionAtIndex:(unsigned long long)arg1;
- (id)titleForSectionAtIndex:(long long)arg1;
- (id)iconAtIndexPath:(id)arg1;
- (id)sectionIdentifierAtIndex:(unsigned long long)arg1;
- (id)indexPathForIcon:(id)arg1;
- (id)_firstExtantSectionWithCollationIndexGreaterThan:(long long)arg1;
- (long long)indexOfSectionForSectionIndexTitleAtIndex:(long long)arg1;
@property(readonly, copy, nonatomic) NSArray *sectionIndexTitles;
- (id)titleForSectionIdentifier:(id)arg1;
- (id)iconForItemIdentifier:(id)arg1;
- (id)sectionIdentifierForIcon:(id)arg1;
- (id)itemIdentifierForIcon:(id)arg1;
- (long long)indexOfSectionIdentifier:(id)arg1;
@property(readonly, nonatomic) unsigned long long totalNumberOfItems;
@property(readonly, nonatomic) NSArray *sectionIdentifiers;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic, getter=isNullQueryResult) _Bool nullQueryResult;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToQueryResult:(id)arg1;
- (id)initWithQuery:(id)arg1 icons:(id)arg2 sortComparator:(CDUnknownBlockType)arg3;
- (id)initWithQuery:(id)arg1 icons:(id)arg2 snapshot:(id)arg3 collation:(id)arg4 iconForitemIdentifier:(id)arg5 sortMethodology:(unsigned long long)arg6;

@end

