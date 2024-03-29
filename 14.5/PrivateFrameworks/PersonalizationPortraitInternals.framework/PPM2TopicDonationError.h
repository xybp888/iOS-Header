//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPM2TopicDonationError : PBCodable <NSCopying>
{
    long long _code;
    NSString *_activeTreatments;
    int _reason;
    int _source;
    struct {
        unsigned int code:1;
        unsigned int reason:1;
        unsigned int source:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) long long code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *activeTreatments; // @synthesize activeTreatments=_activeTreatments;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCode;
- (int)StringAsSource:(id)arg1;
- (id)sourceAsString:(int)arg1;
@property(nonatomic) _Bool hasSource;
@property(nonatomic) int source; // @synthesize source=_source;
@property(readonly, nonatomic) _Bool hasActiveTreatments;
- (int)StringAsReason:(id)arg1;
- (id)reasonAsString:(int)arg1;
@property(nonatomic) _Bool hasReason;
@property(nonatomic) int reason; // @synthesize reason=_reason;

@end

