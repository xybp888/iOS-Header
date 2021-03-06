//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPVideoGlobalAnalyzer : NSObject
{
}

- (int)setActivityLevel:(id)arg1;
- (float)assetActivityLevelFromAnalysisResults:(id)arg1;
- (_Bool)isJunkTimeRange:(CDStruct_e83c9415)arg1 basedOnResults:(id)arg2;
- (float)cameraActivityfromQuality:(float)arg1;
- (float)subjectActivityInTimeRange:(CDStruct_e83c9415)arg1 fromResults:(id)arg2;
- (float)scaleForTimeRange:(CDStruct_e83c9415)arg1 basedOnFace:(id)arg2;
- (float)assetJunkScoreFromAnalysis:(id)arg1;
- (_Bool)hasMeaningfulSceneSegment:(id)arg1 withFpsRate:(float)arg2;
- (float)assetCameraMotionScoreFromAnalysis:(id)arg1;
- (float)assetVoiceScoreFromAnalysis:(id)arg1;
- (float)assetExpressionScoreFromAnalysis:(id)arg1;
- (float)assetActionScoreFromAnalysis:(id)arg1;
- (float)assetQualityScoreFromAnalysis:(id)arg1 withFpsRate:(float)arg2;
- (int)generateLivePhotoRecommendationForResults:(id)arg1 andPrivateResults:(id)arg2 usingFaceAction:(_Bool)arg3;
- (float)analyzeOverallQuality:(id)arg1 withFpsRate:(float)arg2;

@end

