//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class AWDHomeKitVendorInformation;

@interface AWDHomeKitAccessoryNetworkProtectionReport : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _status;
    AWDHomeKitVendorInformation *_vendorDetails;
    _Bool _hadViolationsInLast24h;
    struct {
        unsigned int timestamp:1;
        unsigned int status:1;
        unsigned int hadViolationsInLast24h:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hadViolationsInLast24h; // @synthesize hadViolationsInLast24h=_hadViolationsInLast24h;
@property(retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // @synthesize vendorDetails=_vendorDetails;
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
@property(nonatomic) _Bool hasHadViolationsInLast24h;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) _Bool hasVendorDetails;
@property(nonatomic) _Bool hasTimestamp;

@end

