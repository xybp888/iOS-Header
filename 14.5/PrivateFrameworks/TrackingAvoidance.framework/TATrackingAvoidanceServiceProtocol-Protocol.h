//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrackingAvoidance/NSObject-Protocol.h>

@protocol TAEventProtocol, TATrackingAvoidanceServiceObserver;

@protocol TATrackingAvoidanceServiceProtocol <NSObject>
- (void)ingestTAEvent:(id <TAEventProtocol>)arg1;
- (void)removeObserver:(id <TATrackingAvoidanceServiceObserver>)arg1;
- (void)addObserver:(id <TATrackingAvoidanceServiceObserver>)arg1;
@end

