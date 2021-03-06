//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface AWDMMCSError : PBCodable <NSCopying>
{
    int _code;
    NSString *_domain;
    NSMutableArray *_underlyingErrors;
    struct {
        unsigned int code:1;
    } _has;
}

+ (Class)underlyingErrorsType;
@property(retain, nonatomic) NSMutableArray *underlyingErrors; // @synthesize underlyingErrors=_underlyingErrors;
@property(nonatomic) int code; // @synthesize code=_code;
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
- (id)underlyingErrorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)underlyingErrorsCount;
- (void)addUnderlyingErrors:(id)arg1;
- (void)clearUnderlyingErrors;
@property(nonatomic) _Bool hasCode;
@property(readonly, nonatomic) _Bool hasDomain;
- (void)dealloc;

@end

