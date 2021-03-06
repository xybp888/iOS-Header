//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDCoreRoutineMagicalMomentsIndividualMoment : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _expertType;
    int _modelType;
    NSString *_suggestionId;
    struct {
        unsigned int timestamp:1;
        unsigned int expertType:1;
        unsigned int modelType:1;
    } _has;
}

@property(retain, nonatomic) NSString *suggestionId; // @synthesize suggestionId=_suggestionId;
@property(nonatomic) int expertType; // @synthesize expertType=_expertType;
@property(nonatomic) int modelType; // @synthesize modelType=_modelType;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSuggestionId;
@property(nonatomic) _Bool hasExpertType;
@property(nonatomic) _Bool hasModelType;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

