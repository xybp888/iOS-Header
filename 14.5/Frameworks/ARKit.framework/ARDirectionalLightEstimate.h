//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/ARLightEstimate.h>

@class MISSING_TYPE, NSData;

@interface ARDirectionalLightEstimate : ARLightEstimate
{
    NSData *_sphericalHarmonicsCoefficients;
    double _primaryLightIntensity;
    MISSING_TYPE *_primaryLightDirection;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double primaryLightIntensity; // @synthesize primaryLightIntensity=_primaryLightIntensity;
@property(readonly, nonatomic) MISSING_TYPE *primaryLightDirection; // @synthesize primaryLightDirection=_primaryLightDirection;
@property(readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients; // @synthesize sphericalHarmonicsCoefficients=_sphericalHarmonicsCoefficients;

@end

