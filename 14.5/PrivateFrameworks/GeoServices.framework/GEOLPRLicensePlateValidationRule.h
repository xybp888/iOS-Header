//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEOLPRLicensePlateValidationRule : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_impliedPowerTypeKeys;
    NSMutableArray *_impliedVehicleTypeKeys;
    NSString *_regularExpression;
    NSString *_validCharacters;
    NSMutableArray *_validationRanges;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _maxLength;
    unsigned int _minLength;
    struct {
        unsigned int has_maxLength:1;
        unsigned int has_minLength:1;
        unsigned int read_impliedPowerTypeKeys:1;
        unsigned int read_impliedVehicleTypeKeys:1;
        unsigned int read_regularExpression:1;
        unsigned int read_validCharacters:1;
        unsigned int read_validationRanges:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)impliedVehicleTypeKeyType;
+ (Class)impliedPowerTypeKeyType;
+ (Class)validationRangesType;
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
- (id)impliedVehicleTypeKeyAtIndex:(unsigned long long)arg1;
- (unsigned long long)impliedVehicleTypeKeysCount;
- (void)addImpliedVehicleTypeKey:(id)arg1;
- (void)clearImpliedVehicleTypeKeys;
@property(retain, nonatomic) NSMutableArray *impliedVehicleTypeKeys;
- (id)impliedPowerTypeKeyAtIndex:(unsigned long long)arg1;
- (unsigned long long)impliedPowerTypeKeysCount;
- (void)addImpliedPowerTypeKey:(id)arg1;
- (void)clearImpliedPowerTypeKeys;
@property(retain, nonatomic) NSMutableArray *impliedPowerTypeKeys;
- (id)validationRangesAtIndex:(unsigned long long)arg1;
- (unsigned long long)validationRangesCount;
- (void)addValidationRanges:(id)arg1;
- (void)clearValidationRanges;
@property(retain, nonatomic) NSMutableArray *validationRanges;
@property(retain, nonatomic) NSString *validCharacters;
@property(readonly, nonatomic) _Bool hasValidCharacters;
@property(nonatomic) _Bool hasMaxLength;
@property(nonatomic) unsigned int maxLength;
@property(nonatomic) _Bool hasMinLength;
@property(nonatomic) unsigned int minLength;
@property(retain, nonatomic) NSString *regularExpression;
@property(readonly, nonatomic) _Bool hasRegularExpression;
- (id)initWithData:(id)arg1;
- (id)init;

@end

