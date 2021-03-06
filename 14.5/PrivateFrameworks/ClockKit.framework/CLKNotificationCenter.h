//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CLKNotificationCenter : NSObject
{
    NSMutableDictionary *_registrationsByNotificationName;
    NSObject<OS_dispatch_queue> *_registrationQueue;
}

+ (id)defaultCenter;
- (void).cxx_destruct;
- (void)_handleNotification:(id)arg1;
- (void)_queue_unregisterObserver:(id)arg1 forNotificationName:(id)arg2 cleanupIfLastObserver:(_Bool)arg3;
- (void)_queue_registerObserver:(id)arg1 selector:(SEL)arg2 forNotificationName:(id)arg3;
- (void)_postNotificationName:(id)arg1;
- (void)removeObserver:(id)arg1 notificationName:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 notificationName:(id)arg3;
- (id)init;

@end

