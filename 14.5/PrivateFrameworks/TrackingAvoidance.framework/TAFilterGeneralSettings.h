//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TAFilterGeneralSettings : NSObject
{
    _Bool _allowNavGeoHintAsPrivateVehicleHint;
    double _durationOfConsideration;
    double _thresholdOfLocationRelevance;
    double _thresholdOfSignificantDuration;
    double _thresholdOfSignificantDistance;
    double _capOfReasonableWalkingSpeed;
}

@property(readonly, nonatomic) _Bool allowNavGeoHintAsPrivateVehicleHint; // @synthesize allowNavGeoHintAsPrivateVehicleHint=_allowNavGeoHintAsPrivateVehicleHint;
@property(readonly, nonatomic) double capOfReasonableWalkingSpeed; // @synthesize capOfReasonableWalkingSpeed=_capOfReasonableWalkingSpeed;
@property(readonly, nonatomic) double thresholdOfSignificantDistance; // @synthesize thresholdOfSignificantDistance=_thresholdOfSignificantDistance;
@property(readonly, nonatomic) double thresholdOfSignificantDuration; // @synthesize thresholdOfSignificantDuration=_thresholdOfSignificantDuration;
@property(readonly, nonatomic) double thresholdOfLocationRelevance; // @synthesize thresholdOfLocationRelevance=_thresholdOfLocationRelevance;
@property(readonly, nonatomic) double durationOfConsideration; // @synthesize durationOfConsideration=_durationOfConsideration;
- (id)initWithDefaults;
- (id)initWithDurationOfConsiderationOrDefault:(id)arg1 thresholdOfLocationRelevanceOrDefault:(id)arg2 thresholdOfSignificantDurationOrDefault:(id)arg3 thresholdOfSignificantDistanceOrDefault:(id)arg4 capOfReasonableWalkingSpeedOrDefault:(id)arg5 allowNavGeoHintAsPrivateVehicleHint:(id)arg6;
- (id)initWithDurationOfConsideration:(double)arg1 thresholdOfLocationRelevance:(double)arg2 thresholdOfSignificantDuration:(double)arg3 thresholdOfSignificantDistance:(double)arg4 capOfReasonableWalkingSpeed:(double)arg5 allowNavGeoHintAsPrivateVehicleHint:(_Bool)arg6;

@end

