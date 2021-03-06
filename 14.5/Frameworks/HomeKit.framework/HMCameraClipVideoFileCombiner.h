//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>

@class NSArray, NSString;
@protocol OS_dispatch_queue;

@interface HMCameraClipVideoFileCombiner : NSObject <HMFLogging>
{
    NSArray *_videoFileURLs;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, copy) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, copy) NSArray *videoFileURLs; // @synthesize videoFileURLs=_videoFileURLs;
- (void)writeSamplesFromOutputs:(id)arg1 toInput:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)combineToOutputFileURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithVideoFileURLs:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

