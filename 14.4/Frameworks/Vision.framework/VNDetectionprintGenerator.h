//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNEspressoModelFileBasedDetector.h>

__attribute__((visibility("hidden")))
@interface VNDetectionprintGenerator : VNEspressoModelFileBasedDetector
{
}

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
- (id)supportedImageSizeSetForProcessingOptions:(id)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (id)_analyzePixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 error:(id *)arg3;
- (id)_detectionprintTensorForOutputBuffer:(const CDStruct_cf098810 *)arg1 requestRevision:(unsigned long long)arg2 error:(id *)arg3;

@end

