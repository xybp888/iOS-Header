//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, PBUnknownFields;

@interface GEOElevationSegmentDescription : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_formattedDescription;
    unsigned int _endOffsetM;
    unsigned int _startOffsetM;
    struct {
        unsigned int has_endOffsetM:1;
        unsigned int has_startOffsetM:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
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
@property(retain, nonatomic) GEOFormattedString *formattedDescription;
@property(readonly, nonatomic) _Bool hasFormattedDescription;
@property(nonatomic) _Bool hasEndOffsetM;
@property(nonatomic) unsigned int endOffsetM;
@property(nonatomic) _Bool hasStartOffsetM;
@property(nonatomic) unsigned int startOffsetM;

@end

