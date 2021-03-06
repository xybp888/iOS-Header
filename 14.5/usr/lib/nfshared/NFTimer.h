//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface NFTimer : NSObject
{
    NSObject<OS_dispatch_source> *_src;
    unsigned long long _popTimeInSeconds;
    _Bool _monotonic;
}

- (void).cxx_destruct;
- (id)description;
- (void)stopTimer;
- (void)startTimer:(double)arg1 leeway:(double)arg2;
- (void)startTimer:(double)arg1;
- (void)dealloc;
- (id)initSleepTimerWithCallback:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (id)initWithCallback:(CDUnknownBlockType)arg1 queue:(id)arg2;

@end

