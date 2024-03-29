//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMIBoundingBoxExtractorConfiguration;

@interface HMIBoundingBoxExtractor : HMFObject
{
    HMIBoundingBoxExtractorConfiguration *_config;
}

+ (id)mergedBoxes:(id)arg1 overlapThreshold:(float)arg2 minSize:(float)arg3 maxSize:(float)arg4 imageSize:(struct CGSize)arg5;
+ (id)squaredBoxes:(id)arg1;
+ (id)scaledBoxes:(id)arg1 scale:(float)arg2;
+ (struct CGRect)squaredBox:(struct CGRect)arg1;
+ (id)validBoxes:(id)arg1 minSize:(float)arg2 maxSize:(float)arg3 imageSize:(struct CGSize)arg4;
+ (_Bool)isValidBox:(struct CGRect)arg1 minSize:(float)arg2 maxSize:(float)arg3 imageSize:(struct CGSize)arg4;
+ (id)rawBoxesInFloodFillImage:(id)arg1;
- (void).cxx_destruct;
@property(readonly) HMIBoundingBoxExtractorConfiguration *config; // @synthesize config=_config;
- (id)boxesInFloodFillImage:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (id)init;

@end

