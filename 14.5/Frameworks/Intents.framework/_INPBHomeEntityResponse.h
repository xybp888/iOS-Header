//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBHomeEntityResponse-Protocol.h>

@class NSArray, NSString, _INPBHomeEntity;

@interface _INPBHomeEntityResponse : PBCodable <_INPBHomeEntityResponse, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBHomeEntity *_entity;
    NSArray *_taskResponses;
}

+ (_Bool)supportsSecureCoding;
+ (Class)taskResponsesType;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *taskResponses; // @synthesize taskResponses=_taskResponses;
@property(retain, nonatomic) _INPBHomeEntity *entity; // @synthesize entity=_entity;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)taskResponsesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long taskResponsesCount;
- (void)addTaskResponses:(id)arg1;
- (void)clearTaskResponses;
@property(readonly, nonatomic) _Bool hasEntity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

