//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNChangesNotifierProxy;

@interface CNChangesNotifier : NSObject
{
    CNChangesNotifierProxy *_notifierProxy;
}

+ (void)flushSharedNotifier;
+ (id)sharedNotifierWithNotificationWrapper:(id)arg1 schedulerProvider:(id)arg2 loggerProvider:(id)arg3;
+ (id)sharedNotifier;
- (void).cxx_destruct;
@property(retain, nonatomic) CNChangesNotifierProxy *notifierProxy; // @synthesize notifierProxy=_notifierProxy;
- (void)setExternalNotificationCoalescingDelay:(double)arg1;
- (void)setForwardsSelfGeneratedDistributedSaveNotifications:(_Bool)arg1;
- (_Bool)forwardsSelfGeneratedDistributedSaveNotifications;
- (void)waitForCurrentTasksToFinish;
- (void)didChangeMeContactSuccessfully:(_Bool)arg1 fromContactStore:(id)arg2 requestIdentifier:(id)arg3;
- (void)didSaveChangesSuccessfully:(_Bool)arg1 fromContactStore:(id)arg2 requestIdentifier:(id)arg3;
- (void)willSaveChanges;
- (void)dealloc;
- (id)initWithNotificationWrapper:(id)arg1 schedulerProvider:(id)arg2 loggerProvider:(id)arg3;

@end

