//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NRPBMutableDeviceCollection : PBCodable <NSCopying>
{
    NSMutableArray *_devices;
    NSMutableArray *_pairingIDs;
}

+ (Class)devicesType;
+ (Class)pairingIDsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *devices; // @synthesize devices=_devices;
@property(retain, nonatomic) NSMutableArray *pairingIDs; // @synthesize pairingIDs=_pairingIDs;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)devicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)devicesCount;
- (void)addDevices:(id)arg1;
- (void)clearDevices;
- (id)pairingIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pairingIDsCount;
- (void)addPairingIDs:(id)arg1;
- (void)clearPairingIDs;

@end

