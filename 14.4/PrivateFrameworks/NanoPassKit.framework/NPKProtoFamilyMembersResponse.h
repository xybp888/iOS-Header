//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoFamilyMembersResponse : PBCodable <NSCopying>
{
    NSMutableArray *_familyMembers;
    _Bool _success;
    CDStruct_f2ecb737 _has;
}

+ (Class)familyMembersType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *familyMembers; // @synthesize familyMembers=_familyMembers;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)familyMembersAtIndex:(unsigned long long)arg1;
- (unsigned long long)familyMembersCount;
- (void)addFamilyMembers:(id)arg1;
- (void)clearFamilyMembers;
@property(nonatomic) _Bool hasSuccess;

@end

