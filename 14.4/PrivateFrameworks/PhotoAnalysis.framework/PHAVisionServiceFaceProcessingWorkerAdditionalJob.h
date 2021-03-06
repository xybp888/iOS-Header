//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/PHAWorkerJob.h>

@class PHAVisionServiceFaceProcessingWorker;

@interface PHAVisionServiceFaceProcessingWorkerAdditionalJob : PHAWorkerJob
{
    PHAVisionServiceFaceProcessingWorker *_faceProcessingWorker;
    unsigned long long _jobScenario;
    _Bool _isFinished;
}

- (void).cxx_destruct;
- (_Bool)stopProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (_Bool)startProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (_Bool)finished;
- (void)markAsFinished;
- (_Bool)stopJob:(id *)arg1;
- (_Bool)startJob:(id *)arg1;
- (unsigned long long)jobScenario;
- (id)photoLibrary;
- (id)faceProcessingWorker;
- (id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2;

@end

