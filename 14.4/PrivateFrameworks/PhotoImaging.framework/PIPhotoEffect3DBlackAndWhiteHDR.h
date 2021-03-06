//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PIPhotoEffect3DBlackAndWhiteHDR : CIFilter
{
    float _inputThreshold;
    CIImage *_inputImage;
    CIImage *_inputDepthMap;
}

+ (id)kernelBlackAndWhite;
- (void).cxx_destruct;
@property float inputThreshold; // @synthesize inputThreshold=_inputThreshold;
@property(retain) CIImage *inputDepthMap; // @synthesize inputDepthMap=_inputDepthMap;
@property(retain) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (id)outputImage;
- (id)photoEffectName;

@end

