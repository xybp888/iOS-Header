//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MLLayerPath, MLModelDescription, MLModelExecutionSchedule, MLModelInterface, MLModelMetadata, MLPredictionOptions, NSString;
@protocol MLBatchProvider, MLFeatureProvider;

@protocol MLModeling
@property(readonly) MLModelMetadata *metadata;
@property(readonly) MLModelInterface *interface;
@property(retain, nonatomic) MLModelDescription *modelDescription;
- (MLLayerPath *)modelPath;
- (void)setModelPath:(MLLayerPath *)arg1 modelName:(NSString *)arg2;
- (MLModelExecutionSchedule *)executionSchedule;
- (id <MLBatchProvider>)predictionsFromBatch:(id <MLBatchProvider>)arg1 options:(MLPredictionOptions *)arg2 error:(id *)arg3;
- (id <MLBatchProvider>)predictionsFromBatch:(id <MLBatchProvider>)arg1 error:(id *)arg2;
- (id <MLFeatureProvider>)predictionFromFeatures:(id <MLFeatureProvider>)arg1 options:(MLPredictionOptions *)arg2 error:(id *)arg3;
- (id <MLFeatureProvider>)predictionFromFeatures:(id <MLFeatureProvider>)arg1 error:(id *)arg2;
@end

