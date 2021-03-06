//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MessageProtection/NSCopying-Protocol.h>

@class NGMPBP256Key, NSData;

__attribute__((visibility("hidden")))
@interface NGMPBDevicePreKey : PBCodable <NSCopying>
{
    double _timestamp;
    NGMPBP256Key *_dhKey;
    NSData *_prekeySignature;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *prekeySignature; // @synthesize prekeySignature=_prekeySignature;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NGMPBP256Key *dhKey; // @synthesize dhKey=_dhKey;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDhKey;

@end

