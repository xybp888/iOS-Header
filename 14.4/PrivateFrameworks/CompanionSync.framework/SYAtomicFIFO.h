//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SYAtomicFIFO : NSObject
{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_store;
}

- (void).cxx_destruct;
@property(readonly) id tail;
@property(readonly) id head;
- (void)removeAllObjects;
- (id)dequeueUntil:(CDUnknownBlockType)arg1;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end

