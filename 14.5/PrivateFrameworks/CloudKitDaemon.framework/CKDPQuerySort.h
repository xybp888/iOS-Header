//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPLocationCoordinate, CKDPRecordFieldIdentifier;

__attribute__((visibility("hidden")))
@interface CKDPQuerySort : PBCodable <NSCopying>
{
    CKDPLocationCoordinate *_coordinate;
    CKDPRecordFieldIdentifier *_fieldName;
    int _order;
    struct {
        unsigned int order:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKDPLocationCoordinate *coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *fieldName; // @synthesize fieldName=_fieldName;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasCoordinate;
- (int)StringAsOrder:(id)arg1;
- (id)orderAsString:(int)arg1;
@property(nonatomic) _Bool hasOrder;
@property(nonatomic) int order; // @synthesize order=_order;
@property(readonly, nonatomic) _Bool hasFieldName;

@end

