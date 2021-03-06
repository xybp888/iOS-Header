//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@class MPSImageScale;
@protocol MPSHandle, MPSImageTransformProvider;

@interface MPSNNScale : MPSCNNKernel
{
    id <MPSImageTransformProvider> _transformProvider;
    CDStruct_da2e99ad _destSize;
    MPSImageScale *_filter;
    id <MPSHandle> _handle;
}

+ (const struct MPSLibraryInfo *)libraryInfo:(struct MPSDevice *)arg1;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(CDStruct_d6af7fc0 *)arg4;
- (void)setEdgeMode:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 transformProvider:(id)arg2 handle:(id)arg3 outputSize:(CDStruct_14f26992)arg4 scaleClass:(Class)arg5;
- (id)initWithDevice:(id)arg1;

@end

