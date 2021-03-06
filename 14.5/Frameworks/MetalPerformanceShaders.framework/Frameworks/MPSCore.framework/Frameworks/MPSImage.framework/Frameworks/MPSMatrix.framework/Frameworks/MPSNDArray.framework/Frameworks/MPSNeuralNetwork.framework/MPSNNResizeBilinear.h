//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSNNResizeBilinear : MPSCNNKernel
{
    unsigned long long _resizeWidth;
    unsigned long long _resizeHeight;
    _Bool _alignCorners;
}

+ (const struct MPSLibraryInfo *)libraryInfo:(struct MPSDevice *)arg1;
@property(readonly, nonatomic) _Bool alignCorners; // @synthesize alignCorners=_alignCorners;
@property(readonly, nonatomic) unsigned long long resizeHeight; // @synthesize resizeHeight=_resizeHeight;
@property(readonly, nonatomic) unsigned long long resizeWidth; // @synthesize resizeWidth=_resizeWidth;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 resizeWidth:(unsigned long long)arg2 resizeHeight:(unsigned long long)arg3 alignCorners:(_Bool)arg4;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(CDStruct_d6af7fc0 *)arg4;

@end

