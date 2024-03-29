//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface HDBackgroundTaskScheduler : NSObject
{
    NSMutableDictionary *_clients;
    NSMutableDictionary *_tasksQueuedForDelivery;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

- (void).cxx_destruct;
- (void)_queue_deliverJob:(id)arg1 withName:(const char *)arg2;
- (id)_queue_taskWithName:(id)arg1 forClientNamed:(id)arg2;
- (void)_queue_removeTaskWithName:(id)arg1 forClientNamed:(id)arg2;
- (void)_queue_addTask:(id)arg1 withName:(id)arg2 forClientNamed:(id)arg3;
- (void)_queue_registerClientWithName:(id)arg1 taskHandler:(CDUnknownBlockType)arg2;
- (id)taskWithName:(id)arg1 forClientNamed:(id)arg2;
- (void)removeTaskWithName:(id)arg1 forClientNamed:(id)arg2;
- (void)addTask:(id)arg1 withName:(id)arg2 forClientNamed:(id)arg3;
- (void)unregisterClientWithName:(id)arg1;
- (void)registerClientWithName:(id)arg1 taskHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

