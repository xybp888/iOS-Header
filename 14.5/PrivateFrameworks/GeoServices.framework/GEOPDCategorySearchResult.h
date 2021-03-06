//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion, GEOPDRelatedSearchSuggestion, GEOPDSCategorySearchResultSection, GEOPDSearchClientBehavior, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCategorySearchResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_browseCategorys;
    GEOPDSCategorySearchResultSection *_categorySearchResultSection;
    GEOPDRelatedSearchSuggestion *_defaultRelatedSearchSuggestion;
    GEOMapRegion *_displayMapRegion;
    NSMutableArray *_relatedEntitySections;
    NSMutableArray *_relatedSearchSuggestions;
    NSMutableArray *_resultDetourInfos;
    GEOPDSearchClientBehavior *_searchClientBehavior;
    NSMutableArray *_searchTierMetadatas;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _enablePartialClientization;
    _Bool _isChainResultSet;
    struct {
        unsigned int has_enablePartialClientization:1;
        unsigned int has_isChainResultSet:1;
        unsigned int read_unknownFields:1;
        unsigned int read_browseCategorys:1;
        unsigned int read_categorySearchResultSection:1;
        unsigned int read_defaultRelatedSearchSuggestion:1;
        unsigned int read_displayMapRegion:1;
        unsigned int read_relatedEntitySections:1;
        unsigned int read_relatedSearchSuggestions:1;
        unsigned int read_resultDetourInfos:1;
        unsigned int read_searchClientBehavior:1;
        unsigned int read_searchTierMetadatas:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)searchTierMetadataType;
+ (Class)relatedEntitySectionType;
+ (Class)browseCategoryType;
+ (Class)resultDetourInfoType;
+ (Class)relatedSearchSuggestionType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (id)searchTierMetadataAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchTierMetadatasCount;
- (void)addSearchTierMetadata:(id)arg1;
- (void)clearSearchTierMetadatas;
@property(retain, nonatomic) NSMutableArray *searchTierMetadatas;
- (id)relatedEntitySectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)relatedEntitySectionsCount;
- (void)addRelatedEntitySection:(id)arg1;
- (void)clearRelatedEntitySections;
@property(retain, nonatomic) NSMutableArray *relatedEntitySections;
@property(retain, nonatomic) GEOPDSCategorySearchResultSection *categorySearchResultSection;
@property(readonly, nonatomic) _Bool hasCategorySearchResultSection;
- (id)browseCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)browseCategorysCount;
- (void)addBrowseCategory:(id)arg1;
- (void)clearBrowseCategorys;
@property(retain, nonatomic) NSMutableArray *browseCategorys;
@property(nonatomic) _Bool hasEnablePartialClientization;
@property(nonatomic) _Bool enablePartialClientization;
@property(retain, nonatomic) GEOPDSearchClientBehavior *searchClientBehavior;
@property(readonly, nonatomic) _Bool hasSearchClientBehavior;
@property(retain, nonatomic) GEOPDRelatedSearchSuggestion *defaultRelatedSearchSuggestion;
@property(readonly, nonatomic) _Bool hasDefaultRelatedSearchSuggestion;
- (id)resultDetourInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultDetourInfosCount;
- (void)addResultDetourInfo:(id)arg1;
- (void)clearResultDetourInfos;
@property(retain, nonatomic) NSMutableArray *resultDetourInfos;
- (id)relatedSearchSuggestionAtIndex:(unsigned long long)arg1;
- (unsigned long long)relatedSearchSuggestionsCount;
- (void)addRelatedSearchSuggestion:(id)arg1;
- (void)clearRelatedSearchSuggestions;
@property(retain, nonatomic) NSMutableArray *relatedSearchSuggestions;
@property(nonatomic) _Bool hasIsChainResultSet;
@property(nonatomic) _Bool isChainResultSet;
@property(retain, nonatomic) GEOMapRegion *displayMapRegion;
@property(readonly, nonatomic) _Bool hasDisplayMapRegion;
- (id)initWithData:(id)arg1;
- (id)init;

@end

