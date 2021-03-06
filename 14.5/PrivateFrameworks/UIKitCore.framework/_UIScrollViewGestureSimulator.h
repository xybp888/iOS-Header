//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray, NSThread, NSTimer;

__attribute__((visibility("hidden")))
@interface _UIScrollViewGestureSimulator : NSObject
{
    struct __CFRunLoopSource *_mainThreadRunLoopSource;
    NSMutableArray *_simulatedGestures;
    NSThread *_workThread;
    CADisplayLink *_displayLink;
    NSTimer *_timer;
    _Bool _hasSimulatedGestures;
    double _lastWakeUpTime;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_update;
- (void)_setHasSimulatedGestures:(id)arg1;
- (void)_signalMainThreadIfNecessary;
- (void)_displayLinkDidFire:(id)arg1;
- (void)_threadMain;
- (void)simulateGestureWithDuration:(double)arg1 begin:(CDUnknownBlockType)arg2 update:(CDUnknownBlockType)arg3 end:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

@end

