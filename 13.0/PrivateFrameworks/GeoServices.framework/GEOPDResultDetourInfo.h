//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOPDResultDetourInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _detourDistance;
    int _detourTime;
    unsigned int _distanceToPlace;
    unsigned int _timeToPlace;
    struct {
        unsigned int has_detourDistance:1;
        unsigned int has_detourTime:1;
        unsigned int has_distanceToPlace:1;
        unsigned int has_timeToPlace:1;
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
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDistanceToPlace;
@property(nonatomic) unsigned int distanceToPlace;
@property(nonatomic) _Bool hasDetourDistance;
@property(nonatomic) int detourDistance;
@property(nonatomic) _Bool hasTimeToPlace;
@property(nonatomic) unsigned int timeToPlace;
@property(nonatomic) _Bool hasDetourTime;
@property(nonatomic) int detourTime;

@end

