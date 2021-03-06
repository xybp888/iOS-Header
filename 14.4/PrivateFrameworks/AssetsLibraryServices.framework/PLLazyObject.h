//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLLazyObject : NSObject
{
    _Bool _shouldRetryBlockOnNil;
    struct os_unfair_lock_s _lock;
    CDUnknownBlockType _block;
    id _object;
}

- (void).cxx_destruct;
- (void)accessLazyObjectAtomically:(CDUnknownBlockType)arg1;
- (void)invalidateWithHandler:(CDUnknownBlockType)arg1;
- (void)invalidate;
@property(readonly) id objectValue;
- (id)initWithRetry:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithRetriableBlock:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithObject:(id)arg1;
- (id)init;

@end

