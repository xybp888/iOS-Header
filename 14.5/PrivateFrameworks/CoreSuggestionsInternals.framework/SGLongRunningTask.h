//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, SGLongRunningTaskManager;

@interface SGLongRunningTask : NSObject
{
    SGLongRunningTaskManager *_manager;
    NSDate *_deadline;
    _Atomic _Bool _deferRequested;
}

- (void).cxx_destruct;
- (void)markFinished;
- (void)requestDefer;
- (_Bool)shouldDefer;
- (id)init;
- (id)initWithDeadline:(id)arg1 manager:(id)arg2;

@end

