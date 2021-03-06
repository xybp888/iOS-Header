//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation;

@interface GEOLogMsgStateLookAroundView : PBCodable <NSCopying>
{
    GEOLocation *_location;
    double _zoomLevel;
    unsigned int _heading;
    unsigned int _numberPoisInView;
    _Bool _isLabelingShown;
    struct {
        unsigned int has_zoomLevel:1;
        unsigned int has_heading:1;
        unsigned int has_numberPoisInView:1;
        unsigned int has_isLabelingShown:1;
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
@property(nonatomic) _Bool hasIsLabelingShown;
@property(nonatomic) _Bool isLabelingShown;
@property(nonatomic) _Bool hasNumberPoisInView;
@property(nonatomic) unsigned int numberPoisInView;
@property(nonatomic) _Bool hasZoomLevel;
@property(nonatomic) double zoomLevel;
@property(nonatomic) _Bool hasHeading;
@property(nonatomic) unsigned int heading;
@property(retain, nonatomic) GEOLocation *location;
@property(readonly, nonatomic) _Bool hasLocation;

@end

