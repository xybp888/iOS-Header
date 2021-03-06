//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOFlyoverRegionVersions : PBCodable <NSCopying>
{
    struct GEOFlyoverRegion *_regions;
    unsigned long long _regionsCount;
    unsigned long long _regionsSpace;
}

+ (_Bool)isValid:(id)arg1;
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
- (void)setRegions:(struct GEOFlyoverRegion *)arg1 count:(unsigned long long)arg2;
- (struct GEOFlyoverRegion)regionAtIndex:(unsigned long long)arg1;
- (void)addRegion:(struct GEOFlyoverRegion)arg1;
- (void)clearRegions;
@property(readonly, nonatomic) struct GEOFlyoverRegion *regions;
@property(readonly, nonatomic) unsigned long long regionsCount;
- (void)dealloc;

@end

