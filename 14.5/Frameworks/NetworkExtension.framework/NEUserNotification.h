//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface NEUserNotification : NSObject
{
    _Bool _isAlert;
    id _notification;
    id _notificationSource;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _callback;
}

+ (void)promptForLocalAuthenticationWithReason:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (_Bool)shouldPromptForLocalAuthentication;
+ (Class)getUIDeviceClass;
+ (id)createLAContext;
+ (void)cancelCurrentNotificationWithDefaultResponse:(_Bool)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)executeOnMainLoop:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain) id notificationSource; // @synthesize notificationSource=_notificationSource;
@property(retain) id notification; // @synthesize notification=_notification;
@property _Bool isAlert; // @synthesize isAlert=_isAlert;
- (id)initAndShowLocalNetworkAlertWithAppName:(id)arg1 reasonString:(id)arg2 callbackQueue:(id)arg3 callbackHandler:(CDUnknownBlockType)arg4;
- (id)initAndShowAddConfigurationsForApp:(id)arg1 warningHeader:(id)arg2 warning:(id)arg3 callbackQueue:(id)arg4 callbackHandler:(CDUnknownBlockType)arg5;
- (void)cancel;
- (_Bool)postNotificationWithCallbackQueue:(id)arg1 callbackHandler:(CDUnknownBlockType)arg2;
- (id)initAndShowAuthenticationWithHeader:(id)arg1 options:(id)arg2 flags:(unsigned long long)arg3 callbackQueue:(id)arg4 callbackHandler:(CDUnknownBlockType)arg5;
- (id)initAndShowAlertWithHeader:(id)arg1 message:(id)arg2 alternateMessage:(id)arg3 defaultMessage:(id)arg4 noBoldDefault:(_Bool)arg5 callbackQueue:(id)arg6 callbackHandler:(CDUnknownBlockType)arg7;

@end

