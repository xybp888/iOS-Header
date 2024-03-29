//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSCore/MPSKernel.h>

@class MISSING_TYPE;

@interface MPSImageHistogram : MPSKernel
{
    unsigned long long histogramEntries;
    _Bool histogramAlpha;
    MISSING_TYPE *minPixelValue;
    MISSING_TYPE *maxPixelValue;
    _Bool useMinMaxHistogramKernel;
    CDStruct_1e3be3a8 _clipRectSource;
    _Bool _zeroHistogram;
    MISSING_TYPE *_minPixelThresholdValue;
    unsigned long long _histogramAtomicType;
}

+ (const struct MPSLibraryInfo *)libraryInfo:(struct MPSDevice *)arg1;
@property(nonatomic) MISSING_TYPE *minPixelThresholdValue; // @synthesize minPixelThresholdValue=_minPixelThresholdValue;
@property(nonatomic) _Bool zeroHistogram; // @synthesize zeroHistogram=_zeroHistogram;
@property(nonatomic) CDStruct_1e3be3a8 clipRectSource; // @synthesize clipRectSource=_clipRectSource;
- (void)useThreadgroupAtomics;
- (void)useGlobalAtomics;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 histogram:(id)arg3 histogramOffset:(unsigned long long)arg4;
- (unsigned long long)histogramSizeForSourceFormat:(unsigned long long)arg1;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 histogramInfo:(const CDStruct_5577c19c *)arg2;
@property(readonly, nonatomic) CDStruct_5577c19c histogramInfo;
- (id)initWithDevice:(id)arg1;

@end

