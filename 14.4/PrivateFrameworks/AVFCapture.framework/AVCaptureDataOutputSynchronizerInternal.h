//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference, NSArray;

__attribute__((visibility("hidden")))
@interface AVCaptureDataOutputSynchronizerInternal : NSObject
{
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
    NSArray *dataOutputs;
    struct OpaqueFigSimpleMutex *dataOutputsStorageMutex;
    NSArray *dataOutputsStorage;
    int masterSynchronizedDataQueueMaxDepth;
    _Bool synchronizingVideoAndDepth;
    _Bool synchronizingVideoAndVisionData;
}

@end

