//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@interface PKProtobufPaymentSetupFeature : PBCodable <NSCopying>
{
    unsigned long long _state;
    unsigned long long _type;
    struct {
        unsigned int state:1;
        unsigned int type:1;
    } _has;
}

@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasState;
@property(nonatomic) _Bool hasType;

@end

