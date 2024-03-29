//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, TSUProgressStage;

@interface TSUProgressContext : NSObject
{
    TSUProgressStage *m_currentStage;
    NSDate *m_lastReportTime;
    double m_lastProgressReport;
    double m_lastOverallProgress;
}

- (double)overallProgress;
- (double)currentPosition;
- (void)setMessage:(id)arg1;
- (void)setPercentageProgressFromTCProgressContext:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)advanceProgress:(double)arg1;
- (void)endStage;
- (void)nextSubStageWillTakeThisManyOfMySteps:(double)arg1;
- (void)createStageWithSteps:(double)arg1;
- (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2;
- (void)removeProgressObserver:(id)arg1;
- (id)addProgressObserverBlock:(CDUnknownBlockType)arg1;
- (void)addProgressObserver:(id)arg1 selector:(SEL)arg2;
- (void)reset;
- (void)reportProgress:(double)arg1 overallProgress:(double)arg2;
- (id)currentStage;
- (void)dealloc;
- (id)init;

@end

