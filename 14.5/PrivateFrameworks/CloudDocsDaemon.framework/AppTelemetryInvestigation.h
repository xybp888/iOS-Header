//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudDocsDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface AppTelemetryInvestigation : PBCodable <NSCopying>
{
    long long _errorCode;
    NSString *_errorDescription;
    NSString *_errorDomain;
    NSString *_itemID;
    NSString *_lastStep;
    NSString *_operationType;
    NSString *_reason;
    NSData *_zoneName;
    _Bool _hasForegroundClients;
    _Bool _isPCSChained;
    _Bool _nonDiscretionary;
    _Bool _sharedZone;
    struct {
        unsigned int errorCode:1;
        unsigned int hasForegroundClients:1;
        unsigned int isPCSChained:1;
        unsigned int nonDiscretionary:1;
        unsigned int sharedZone:1;
    } _has;
}

- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsPCSChained;
@property(nonatomic) _Bool isPCSChained;
@property(nonatomic) _Bool hasHasForegroundClients;
@property(nonatomic) _Bool hasForegroundClients;
@property(nonatomic) _Bool hasNonDiscretionary;
@property(nonatomic) _Bool nonDiscretionary;
@property(retain, nonatomic) NSString *operationType;
@property(readonly, nonatomic) _Bool hasOperationType;
@property(retain, nonatomic) NSString *reason;
@property(readonly, nonatomic) _Bool hasReason;
@property(retain, nonatomic) NSString *itemID;
@property(readonly, nonatomic) _Bool hasItemID;
@property(retain, nonatomic) NSString *lastStep;
@property(readonly, nonatomic) _Bool hasLastStep;
@property(retain, nonatomic) NSString *errorDescription;
@property(readonly, nonatomic) _Bool hasErrorDescription;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) long long errorCode;
@property(retain, nonatomic) NSString *errorDomain;
@property(readonly, nonatomic) _Bool hasErrorDomain;
@property(nonatomic) _Bool hasSharedZone;
@property(nonatomic) _Bool sharedZone;
@property(retain, nonatomic) NSData *zoneName;
@property(readonly, nonatomic) _Bool hasZoneName;

@end

