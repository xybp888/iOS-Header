//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCore/AVAssetWriterHelper.h>

__attribute__((visibility("hidden")))
@interface AVAssetWriterUnknownHelper : AVAssetWriterHelper
{
    short _alternateGroupID;
}

- (void)cancelWriting;
- (void)startWriting;
- (void)addInputGroup:(id)arg1;
- (_Bool)canAddInputGroup:(id)arg1;
- (_Bool)_canAddInputGroup:(id)arg1 exceptionReason:(id *)arg2;
- (void)addInput:(id)arg1;
- (_Bool)canAddInput:(id)arg1;
- (_Bool)_canAddInput:(id)arg1 exceptionReason:(id *)arg2;
- (void)setSinglePassMediaDataSize:(long long)arg1;
- (void)setSinglePassFileSize:(long long)arg1;
- (void)setProducesCombinableFragments:(_Bool)arg1;
- (void)setInitialMovieFragmentSequenceNumber:(long long)arg1;
- (void)setOutputFileTypeProfile:(id)arg1;
- (void)setInitialSegmentStartTime:(CDStruct_1b6d18a9)arg1;
- (void)setPreferredOutputSegmentInterval:(CDStruct_1b6d18a9)arg1;
- (void)setPreferredRate:(float)arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setPreferredTransform:(struct CGAffineTransform)arg1;
- (void)setMovieTimeScale:(int)arg1;
- (void)setMetadata:(id)arg1;
- (void)setDirectoryForTemporaryFiles:(id)arg1;
- (void)setShouldOptimizeForNetworkUse:(_Bool)arg1;
- (void)setOverallDurationHint:(CDStruct_1b6d18a9)arg1;
- (void)setMovieFragmentInterval:(CDStruct_1b6d18a9)arg1;
- (void)setDelegate:(id)arg1;
- (long long)status;
- (void)setDefaultPropertyValuesToConfigurationState:(id)arg1 outputURL:(id)arg2 fileType:(id)arg3;
- (id)initWithURL:(id)arg1 fileType:(id)arg2;
- (id)initWithConfigurationState:(id)arg1;

@end

