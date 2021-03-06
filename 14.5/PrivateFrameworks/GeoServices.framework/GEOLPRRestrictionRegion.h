//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegionE7, NSMutableArray, NSString, PBDataReader;

@interface GEOLPRRestrictionRegion : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_convertRules;
    NSMutableArray *_definedPlateTypes;
    NSString *_identifier;
    GEOMapRegionE7 *_mapRegion;
    NSString *_name;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_convertRules:1;
        unsigned int read_definedPlateTypes:1;
        unsigned int read_identifier:1;
        unsigned int read_mapRegion:1;
        unsigned int read_name:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)convertRuleType;
+ (Class)definedPlateTypesType;
- (void).cxx_destruct;
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
- (id)convertRuleAtIndex:(unsigned long long)arg1;
- (unsigned long long)convertRulesCount;
- (void)addConvertRule:(id)arg1;
- (void)clearConvertRules;
@property(retain, nonatomic) NSMutableArray *convertRules;
- (id)definedPlateTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)definedPlateTypesCount;
- (void)addDefinedPlateTypes:(id)arg1;
- (void)clearDefinedPlateTypes;
@property(retain, nonatomic) NSMutableArray *definedPlateTypes;
@property(retain, nonatomic) GEOMapRegionE7 *mapRegion;
@property(readonly, nonatomic) _Bool hasMapRegion;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool hasName;
@property(retain, nonatomic) NSString *identifier;
- (id)initWithData:(id)arg1;
- (id)init;

@end

