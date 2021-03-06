//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaVoiceSettings : PBCodable
{
    int _voiceGender;
    int _voiceAccent;
    struct {
        unsigned int voiceGender:1;
        unsigned int voiceAccent:1;
    } _has;
}

@property(nonatomic) int voiceAccent; // @synthesize voiceAccent=_voiceAccent;
@property(nonatomic) int voiceGender; // @synthesize voiceGender=_voiceGender;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasVoiceAccent;
@property(nonatomic) _Bool hasVoiceGender;

@end

