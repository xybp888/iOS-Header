//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPQuaternion;

@interface CLPIndoorCMAttitude : PBCodable <NSCopying>
{
    double _timestamp;
    float _magneticAccuracy;
    int _magneticCalibration;
    CLPQuaternion *_quaternion;
    struct {
        unsigned int timestamp:1;
        unsigned int magneticAccuracy:1;
        unsigned int magneticCalibration:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) float magneticAccuracy; // @synthesize magneticAccuracy=_magneticAccuracy;
@property(retain, nonatomic) CLPQuaternion *quaternion; // @synthesize quaternion=_quaternion;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsMagneticCalibration:(id)arg1;
- (id)magneticCalibrationAsString:(int)arg1;
@property(nonatomic) _Bool hasMagneticCalibration;
@property(nonatomic) int magneticCalibration; // @synthesize magneticCalibration=_magneticCalibration;
@property(nonatomic) _Bool hasMagneticAccuracy;
@property(readonly, nonatomic) _Bool hasQuaternion;
@property(nonatomic) _Bool hasTimestamp;

@end

