//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEOWiFiHarvestLabel : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_comment;
    NSString *_internalIdentifier;
    NSString *_venueCategory;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _networkType;
    int _originator;
    struct {
        unsigned int has_networkType:1;
        unsigned int has_originator:1;
        unsigned int read_comment:1;
        unsigned int read_internalIdentifier:1;
        unsigned int read_venueCategory:1;
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
@property(retain, nonatomic) NSString *internalIdentifier;
@property(readonly, nonatomic) _Bool hasInternalIdentifier;
- (int)StringAsNetworkType:(id)arg1;
- (id)networkTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasNetworkType;
@property(nonatomic) int networkType;
@property(retain, nonatomic) NSString *comment;
@property(readonly, nonatomic) _Bool hasComment;
@property(retain, nonatomic) NSString *venueCategory;
@property(readonly, nonatomic) _Bool hasVenueCategory;
- (int)StringAsOriginator:(id)arg1;
- (id)originatorAsString:(int)arg1;
@property(nonatomic) _Bool hasOriginator;
@property(nonatomic) int originator;
- (id)initWithData:(id)arg1;
- (id)init;

@end

