//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoStandaloneRequestHeader, NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowHandleDigitalIssuanceAmountRequest : PBRequest <NSCopying>
{
    NSString *_amount;
    NPKProtoStandaloneRequestHeader *_requestHeader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader; // @synthesize requestHeader=_requestHeader;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasAmount;

@end

