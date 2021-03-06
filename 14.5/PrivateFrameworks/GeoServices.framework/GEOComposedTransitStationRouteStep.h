//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOComposedTransitRouteStep.h>

@class GEOPBTransitAccessPoint, GEOTransitEnterExitInfo, GEOTransitTransferInfo, NSString;

@interface GEOComposedTransitStationRouteStep : GEOComposedTransitRouteStep
{
    unsigned int _expectedTime;
    _Bool _isArrivalUncertain;
    GEOTransitTransferInfo *_transitTransfer;
    GEOTransitEnterExitInfo *_enterExitInfo;
    GEOPBTransitAccessPoint *_accessPoint;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int expectedTime; // @synthesize expectedTime=_expectedTime;
@property(readonly, nonatomic) _Bool isArrivalUncertain; // @synthesize isArrivalUncertain=_isArrivalUncertain;
@property(readonly, nonatomic) GEOTransitTransferInfo *transitTransfer; // @synthesize transitTransfer=_transitTransfer;
@property(readonly, nonatomic) GEOPBTransitAccessPoint *accessPoint; // @synthesize accessPoint=_accessPoint;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (CDStruct_39925896)endGeoCoordinate;
- (CDStruct_39925896)startGeoCoordinate;
@property(readonly, nonatomic) _Bool hasDisplayStop;
@property(readonly, nonatomic) _Bool displayStop;
@property(readonly, nonatomic) NSString *exitSign;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 step:(id)arg3 stepIndex:(unsigned long long)arg4 duration:(unsigned int)arg5 pointRange:(struct _NSRange)arg6;

@end

