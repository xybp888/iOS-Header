//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface TUDelegateController : NSObject
{
    struct os_unfair_lock_s _delegateLock;
    NSMapTable *_delegateToQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct os_unfair_lock_s delegateLock; // @synthesize delegateLock=_delegateLock;
@property(readonly, nonatomic) NSMapTable *delegateToQueue; // @synthesize delegateToQueue=_delegateToQueue;
- (void)enumerateDelegatesUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)init;

@end

