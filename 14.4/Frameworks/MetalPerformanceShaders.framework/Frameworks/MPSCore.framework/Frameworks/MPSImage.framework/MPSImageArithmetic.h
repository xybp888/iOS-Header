//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSImage/MPSBinaryImageKernel.h>

@interface MPSImageArithmetic : MPSBinaryImageKernel
{
    float _primaryScale;
    float _secondaryScale;
    float _bias;
    float _minimumValue;
    float _maximumValue;
    CDStruct_da2e99ad _primaryStrideInPixels;
    CDStruct_da2e99ad _secondaryStrideInPixels;
    int _arithmeticType;
}

+ (const struct MPSLibraryInfo *)libraryInfo:(struct MPSDevice *)arg1;
@property(nonatomic) float maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) float minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) CDStruct_14f26992 secondaryStrideInPixels; // @synthesize secondaryStrideInPixels=_secondaryStrideInPixels;
@property(nonatomic) CDStruct_14f26992 primaryStrideInPixels; // @synthesize primaryStrideInPixels=_primaryStrideInPixels;
@property(nonatomic) float bias; // @synthesize bias=_bias;
@property(nonatomic) float secondaryScale; // @synthesize secondaryScale=_secondaryScale;
@property(nonatomic) float primaryScale; // @synthesize primaryScale=_primaryScale;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 arithmeticType:(int)arg2;
- (id)initWithDevice:(id)arg1;
- (void)dealloc;

@end

