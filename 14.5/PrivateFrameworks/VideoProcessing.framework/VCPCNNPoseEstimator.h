//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPCNNPoseEstimator : NSObject
{
}

+ (id)estimator;
- (int)detectPoseForFace:(struct CGRect)arg1 inBuffer:(struct __CVBuffer *)arg2 yaw:(long long *)arg3;
- (int)computePoseScore:(float *)arg1;
- (float *)getInputBuffer;

@end

