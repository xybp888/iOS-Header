//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProgress.h>

@class NSObject;
@protocol OS_dispatch_source;

@interface WFAutoIncrementingProgress : NSProgress
{
    double _duration;
    unsigned long long _increments;
    NSObject<OS_dispatch_source> *_progressTimer;
    NSObject<OS_dispatch_source> *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(readonly, nonatomic) unsigned long long increments; // @synthesize increments=_increments;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (void)finish;
- (void)cancel;
- (void)start;
- (id)initWithParent:(id)arg1 pendingUnitCount:(unsigned long long)arg2 duration:(double)arg3;

@end

