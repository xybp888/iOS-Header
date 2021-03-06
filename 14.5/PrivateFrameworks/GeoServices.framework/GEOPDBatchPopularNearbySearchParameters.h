//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDViewportInfo, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBatchPopularNearbySearchParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _requestLocalTimestamp;
    NSMutableArray *_suggestionEntryMetadatas;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _maxResults;
    struct {
        unsigned int has_requestLocalTimestamp:1;
        unsigned int has_maxResults:1;
        unsigned int read_unknownFields:1;
        unsigned int read_suggestionEntryMetadatas:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)suggestionEntryMetadataType;
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
- (id)suggestionEntryMetadataAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionEntryMetadatasCount;
- (void)addSuggestionEntryMetadata:(id)arg1;
- (void)clearSuggestionEntryMetadatas;
@property(retain, nonatomic) NSMutableArray *suggestionEntryMetadatas;
@property(nonatomic) _Bool hasRequestLocalTimestamp;
@property(nonatomic) double requestLocalTimestamp;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property(readonly, nonatomic) _Bool hasViewportInfo;
@property(nonatomic) _Bool hasMaxResults;
@property(nonatomic) unsigned int maxResults;
- (id)initWithData:(id)arg1;
- (id)init;

@end

