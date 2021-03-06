//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion;

@interface GEOLogMsgStateMapView : PBCodable <NSCopying>
{
    GEOMapRegion *_mapRegion;
    double _zoomLevel;
    int _mapType;
    struct {
        unsigned int has_zoomLevel:1;
        unsigned int has_mapType:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
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
- (int)StringAsMapType:(id)arg1;
- (id)mapTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMapType;
@property(nonatomic) int mapType;
@property(nonatomic) _Bool hasZoomLevel;
@property(nonatomic) double zoomLevel;
@property(retain, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) _Bool hasMapRegion;

@end

