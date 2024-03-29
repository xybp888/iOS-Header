//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, NSMutableArray, PBDataReader;

@interface GEODirectionsFeedbackLogMessage : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    struct GEONavigationAudioFeedback _navigationAudioFeedback;
    NSMutableArray *_directionsFeedbacks;
    double _durationOfTrip;
    GEOLocation *_finalLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _arrivedAtDestination;
    CDStruct_8bb9be38 _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)directionsFeedbackType;
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
@property(nonatomic) _Bool hasDurationOfTrip;
@property(nonatomic) double durationOfTrip;
@property(nonatomic) _Bool hasNavigationAudioFeedback;
@property(nonatomic) struct GEONavigationAudioFeedback navigationAudioFeedback;
@property(nonatomic) _Bool hasArrivedAtDestination;
@property(nonatomic) _Bool arrivedAtDestination;
@property(retain, nonatomic) GEOLocation *finalLocation;
@property(readonly, nonatomic) _Bool hasFinalLocation;
- (id)directionsFeedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsFeedbacksCount;
- (void)addDirectionsFeedback:(id)arg1;
- (void)clearDirectionsFeedbacks;
@property(retain, nonatomic) NSMutableArray *directionsFeedbacks;
- (id)initWithData:(id)arg1;
- (id)init;

@end

