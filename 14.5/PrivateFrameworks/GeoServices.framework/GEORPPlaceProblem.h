//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEORPPlaceProblem : PBCodable <NSCopying>
{
    unsigned int _componentIndex;
    unsigned int _componentValueIndex;
    unsigned int _problematicDepartureSequenceIndex;
    struct {
        unsigned int has_componentIndex:1;
        unsigned int has_componentValueIndex:1;
        unsigned int has_problematicDepartureSequenceIndex:1;
    } _flags;
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
@property(nonatomic) _Bool hasProblematicDepartureSequenceIndex;
@property(nonatomic) unsigned int problematicDepartureSequenceIndex;
@property(nonatomic) _Bool hasComponentValueIndex;
@property(nonatomic) unsigned int componentValueIndex;
@property(nonatomic) _Bool hasComponentIndex;
@property(nonatomic) unsigned int componentIndex;

@end

