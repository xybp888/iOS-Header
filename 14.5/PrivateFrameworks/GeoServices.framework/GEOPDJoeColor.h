//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDJoeColor : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_backgroundColor;
    NSString *_primaryTextColor;
    NSString *_quaternaryTextColor;
    NSString *_secondaryTextColor;
    NSString *_tertiaryTextColor;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_backgroundColor:1;
        unsigned int read_primaryTextColor:1;
        unsigned int read_quaternaryTextColor:1;
        unsigned int read_secondaryTextColor:1;
        unsigned int read_tertiaryTextColor:1;
        unsigned int wrote_anyField:1;
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
@property(retain, nonatomic) NSString *quaternaryTextColor;
@property(readonly, nonatomic) _Bool hasQuaternaryTextColor;
@property(retain, nonatomic) NSString *tertiaryTextColor;
@property(readonly, nonatomic) _Bool hasTertiaryTextColor;
@property(retain, nonatomic) NSString *secondaryTextColor;
@property(readonly, nonatomic) _Bool hasSecondaryTextColor;
@property(retain, nonatomic) NSString *primaryTextColor;
@property(readonly, nonatomic) _Bool hasPrimaryTextColor;
@property(retain, nonatomic) NSString *backgroundColor;
@property(readonly, nonatomic) _Bool hasBackgroundColor;
- (id)initWithData:(id)arg1;
- (id)init;

@end

