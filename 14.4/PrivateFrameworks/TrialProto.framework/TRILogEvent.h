//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrialProto/NSCopying-Protocol.h>

@class NSString, TRIDenormalizedEvent, TRILogContext;

@interface TRILogEvent : PBCodable <NSCopying>
{
    TRILogContext *_context;
    TRIDenormalizedEvent *_denormalizedEvent;
    NSString *_logEventId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TRIDenormalizedEvent *denormalizedEvent; // @synthesize denormalizedEvent=_denormalizedEvent;
@property(retain, nonatomic) NSString *logEventId; // @synthesize logEventId=_logEventId;
@property(retain, nonatomic) TRILogContext *context; // @synthesize context=_context;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDenormalizedEvent;
@property(readonly, nonatomic) _Bool hasLogEventId;
@property(readonly, nonatomic) _Bool hasContext;

@end

