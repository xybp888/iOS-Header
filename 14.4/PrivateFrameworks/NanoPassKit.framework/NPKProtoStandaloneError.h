//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NPKProtoStandaloneError : PBCodable <NSCopying>
{
    long long _code;
    NSString *_domain;
    NSMutableArray *_userInfos;
}

+ (Class)userInfosType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *userInfos; // @synthesize userInfos=_userInfos;
@property(nonatomic) long long code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)userInfosAtIndex:(unsigned long long)arg1;
- (unsigned long long)userInfosCount;
- (void)addUserInfos:(id)arg1;
- (void)clearUserInfos;
@property(readonly, nonatomic) _Bool hasDomain;

@end

