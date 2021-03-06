//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDLibnetcoreNetworkdStatsReport : PBCodable <NSCopying>
{
    unsigned long long _fallbackConnectionCount;
    unsigned long long _totalConnectionCount;
    unsigned long long _totalSuccessfulConnectionCount;
    struct {
        unsigned int fallbackConnectionCount:1;
        unsigned int totalConnectionCount:1;
        unsigned int totalSuccessfulConnectionCount:1;
    } _has;
}

@property(nonatomic) unsigned long long fallbackConnectionCount; // @synthesize fallbackConnectionCount=_fallbackConnectionCount;
@property(nonatomic) unsigned long long totalSuccessfulConnectionCount; // @synthesize totalSuccessfulConnectionCount=_totalSuccessfulConnectionCount;
@property(nonatomic) unsigned long long totalConnectionCount; // @synthesize totalConnectionCount=_totalConnectionCount;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasFallbackConnectionCount;
@property(nonatomic) _Bool hasTotalSuccessfulConnectionCount;
@property(nonatomic) _Bool hasTotalConnectionCount;

@end

