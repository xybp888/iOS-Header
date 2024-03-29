//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOSharedNavRouteInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_82f37d05 _coordinates;
    CDStruct_9f2792e4 _trafficColorOffsets;
    CDStruct_9f2792e4 _trafficColors;
    NSMutableArray *_chargingStations;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_coordinates:1;
        unsigned int read_trafficColorOffsets:1;
        unsigned int read_trafficColors:1;
        unsigned int read_chargingStations:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)chargingStationsType;
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
- (id)chargingStationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)chargingStationsCount;
- (void)addChargingStations:(id)arg1;
- (void)clearChargingStations;
@property(retain, nonatomic) NSMutableArray *chargingStations;
- (void)setTrafficColorOffsets:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned long long)arg1;
- (void)addTrafficColorOffset:(unsigned int)arg1;
- (void)clearTrafficColorOffsets;
@property(readonly, nonatomic) unsigned int *trafficColorOffsets;
@property(readonly, nonatomic) unsigned long long trafficColorOffsetsCount;
- (void)setTrafficColors:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)trafficColorAtIndex:(unsigned long long)arg1;
- (void)addTrafficColor:(unsigned int)arg1;
- (void)clearTrafficColors;
@property(readonly, nonatomic) unsigned int *trafficColors;
@property(readonly, nonatomic) unsigned long long trafficColorsCount;
- (void)setCoordinates:(double *)arg1 count:(unsigned long long)arg2;
- (double)coordinatesAtIndex:(unsigned long long)arg1;
- (void)addCoordinates:(double)arg1;
- (void)clearCoordinates;
@property(readonly, nonatomic) double *coordinates;
@property(readonly, nonatomic) unsigned long long coordinatesCount;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

