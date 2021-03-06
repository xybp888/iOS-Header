//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MLBatchProviderUtils : NSObject
{
}

+ (id)featureDescriptionsByNameForBatch:(id)arg1 error:(id *)arg2;
+ (id)featureValueArrayForName:(id)arg1 batch:(id)arg2 error:(id *)arg3;
+ (id)dictionaryFromBatch:(id)arg1;
+ (id)dictionaryFromBatch:(id)arg1 featureNames:(id)arg2;
+ (id)featureProviderArrayFromBatch:(id)arg1;
+ (id)featureNamesInBatch:(id)arg1;
+ (_Bool)vectorizeFeaturesNamed:(id)arg1 fromBatch:(id)arg2 intoRowsOfDoubleMatrix:(id)arg3 error:(id *)arg4;
+ (id)batchWithSubsetOfFeaturesNamed:(id)arg1 fromBatch:(id)arg2;
+ (id)batchFromConcatinatingBatches:(id)arg1;
+ (id)lazyBatchWithFeaturesInBatch:(id)arg1 addedToBatch:(id)arg2 error:(id *)arg3;
+ (id)lazyBatchIndexIntoBatch:(id)arg1 indices:(id)arg2 error:(id *)arg3;
+ (id)lazyBatchWindowIntoBatch:(id)arg1 startIndex:(unsigned long long)arg2 windowLength:(unsigned long long)arg3 error:(id *)arg4;

@end

