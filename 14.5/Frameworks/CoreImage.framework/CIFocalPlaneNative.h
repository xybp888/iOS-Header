//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIFocalPlaneNative : CIFilter
{
    CIImage *inputImage;
    CIImage *inputMatteImage;
    CIImage *inputLensModelCalculatorImage;
    NSNumber *inputAlphaThreshold;
    NSNumber *inputAmplitude;
    NSNumber *inputExponent;
    NSNumber *inputGamma;
    NSNumber *inputMinFactor;
    NSNumber *inputMaxFactor;
}

+ (id)customAttributes;
- (id)outputImage;
- (id)_focalPlanePreProcessorKernelPow2;
- (id)_focalPlanePreProcessorKernel;

@end

