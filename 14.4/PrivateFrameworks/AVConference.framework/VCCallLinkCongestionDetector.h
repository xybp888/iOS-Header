//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCCallLinkCongestionDetector : NSObject
{
    _Bool isLinkCongested;
    double rttThreshold;
    double lossRateThreshold;
}

@property(nonatomic) _Bool isLinkCongested; // @synthesize isLinkCongested;
- (void)addNewRTT:(double)arg1 packetLossRate:(double)arg2 timestamp:(double)arg3;
- (id)initWithRTTThreshold:(double)arg1 lossRateThreshold:(double)arg2;

@end

