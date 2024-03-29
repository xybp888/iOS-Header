//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@class MPSCNNLoss, MPSImage, MPSMatrix, NSData, NSObject;
@protocol OS_dispatch_semaphore;

@interface MPSCNNYOLOLoss : MPSCNNKernel
{
    MPSCNNLoss *_lossXY;
    MPSCNNLoss *_lossWH;
    MPSCNNLoss *_lossConfidence;
    MPSCNNLoss *_lossClasses;
    int _reductionType;
    _Bool _reduceAcrossBatch;
    _Bool _rescore;
    float _scaleXY;
    float _scaleWH;
    float _scaleNoObject;
    float _scaleObject;
    float _scaleClass;
    float _minIOUForObjectPresence;
    float _maxIOUForObjectAbsence;
    float _countOfPresentObjects;
    NSObject<OS_dispatch_semaphore> *_encodingSemaphore;
    NSData *_anchorBoxes;
    unsigned long long _numberOfAnchorBoxes;
    MPSMatrix *_reductionBuffer;
    MPSImage *_firstLossTexture;
}

+ (const struct MPSLibraryInfo *)libraryInfo:(struct MPSDevice *)arg1;
@property(nonatomic) unsigned long long numberOfAnchorBoxes; // @synthesize numberOfAnchorBoxes=_numberOfAnchorBoxes;
@property(retain, nonatomic) NSData *anchorBoxes; // @synthesize anchorBoxes=_anchorBoxes;
@property(nonatomic) float maxIOUForObjectAbsence; // @synthesize maxIOUForObjectAbsence=_maxIOUForObjectAbsence;
@property(nonatomic) float minIOUForObjectPresence; // @synthesize minIOUForObjectPresence=_minIOUForObjectPresence;
@property(nonatomic) float scaleClass; // @synthesize scaleClass=_scaleClass;
@property(nonatomic) float scaleObject; // @synthesize scaleObject=_scaleObject;
@property(nonatomic) float scaleNoObject; // @synthesize scaleNoObject=_scaleNoObject;
@property(nonatomic) float scaleWH; // @synthesize scaleWH=_scaleWH;
@property(nonatomic) float scaleXY; // @synthesize scaleXY=_scaleXY;
@property(nonatomic) _Bool reduceAcrossBatch; // @synthesize reduceAcrossBatch=_reduceAcrossBatch;
@property(nonatomic) int reductionType; // @synthesize reductionType=_reductionType;
@property(readonly, retain, nonatomic) MPSCNNLoss *lossClasses; // @synthesize lossClasses=_lossClasses;
@property(readonly, retain, nonatomic) MPSCNNLoss *lossConfidence; // @synthesize lossConfidence=_lossConfidence;
@property(readonly, retain, nonatomic) MPSCNNLoss *lossWH; // @synthesize lossWH=_lossWH;
@property(readonly, retain, nonatomic) MPSCNNLoss *lossXY; // @synthesize lossXY=_lossXY;
- (unsigned long long)maxBatchSize;
- (float)countPresetobjectsSourceImages:(id)arg1 labels:(id)arg2;
- (id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 labels:(id)arg3;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 labels:(id)arg3 destinationImages:(id)arg4;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 destinationImage:(id)arg4;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3;
- (id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2;
- (id)debugDescription;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 lossDescriptor:(id)arg2;
- (void)initializeSupportFiltersWithDevice:(id)arg1 lossDescriptor:(id)arg2;
- (id)initWithDevice:(id)arg1;

@end

