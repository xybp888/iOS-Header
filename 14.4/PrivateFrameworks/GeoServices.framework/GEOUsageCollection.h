//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOUsageCollection : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    struct GEOTileUsage *_tileUsages;
    unsigned long long _tileUsagesCount;
    unsigned long long _tileUsagesSpace;
    struct GEOSessionID _sessionID;
    NSString *_countryCode;
    NSString *_hwMachine;
    long long _requestErrorCode;
    NSString *_requestErrorDescription;
    NSString *_requestErrorDomain;
    double _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _cellWifi;
    int _geoService;
    int _placeRequestType;
    int _requestDataSize;
    int _responseDataSize;
    int _responseTime;
    _Bool _sessionIDIsPersistent;
    struct {
        unsigned int has_sessionID:1;
        unsigned int has_requestErrorCode:1;
        unsigned int has_timestamp:1;
        unsigned int has_cellWifi:1;
        unsigned int has_geoService:1;
        unsigned int has_placeRequestType:1;
        unsigned int has_requestDataSize:1;
        unsigned int has_responseDataSize:1;
        unsigned int has_responseTime:1;
        unsigned int has_sessionIDIsPersistent:1;
        unsigned int read_tileUsages:1;
        unsigned int read_countryCode:1;
        unsigned int read_hwMachine:1;
        unsigned int read_requestErrorDescription:1;
        unsigned int read_requestErrorDomain:1;
        unsigned int wrote_anyField:1;
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
@property(retain, nonatomic) NSString *requestErrorDescription;
@property(readonly, nonatomic) _Bool hasRequestErrorDescription;
@property(nonatomic) _Bool hasRequestErrorCode;
@property(nonatomic) long long requestErrorCode;
@property(retain, nonatomic) NSString *requestErrorDomain;
@property(readonly, nonatomic) _Bool hasRequestErrorDomain;
- (int)StringAsPlaceRequestType:(id)arg1;
- (id)placeRequestTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPlaceRequestType;
@property(nonatomic) int placeRequestType;
@property(nonatomic) _Bool hasSessionIDIsPersistent;
@property(nonatomic) _Bool sessionIDIsPersistent;
@property(retain, nonatomic) NSString *hwMachine;
@property(readonly, nonatomic) _Bool hasHwMachine;
- (void)setTileUsages:(struct GEOTileUsage *)arg1 count:(unsigned long long)arg2;
- (struct GEOTileUsage)tileUsageAtIndex:(unsigned long long)arg1;
- (void)addTileUsage:(struct GEOTileUsage)arg1;
- (void)clearTileUsages;
@property(readonly, nonatomic) struct GEOTileUsage *tileUsages;
@property(readonly, nonatomic) unsigned long long tileUsagesCount;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) double timestamp;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) struct GEOSessionID sessionID;
@property(retain, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) _Bool hasCountryCode;
- (int)StringAsCellWifi:(id)arg1;
- (id)cellWifiAsString:(int)arg1;
@property(nonatomic) _Bool hasCellWifi;
@property(nonatomic) int cellWifi;
@property(nonatomic) _Bool hasResponseTime;
@property(nonatomic) int responseTime;
@property(nonatomic) _Bool hasResponseDataSize;
@property(nonatomic) int responseDataSize;
@property(nonatomic) _Bool hasRequestDataSize;
@property(nonatomic) int requestDataSize;
- (int)StringAsGeoService:(id)arg1;
- (id)geoServiceAsString:(int)arg1;
@property(nonatomic) _Bool hasGeoService;
@property(nonatomic) int geoService;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

