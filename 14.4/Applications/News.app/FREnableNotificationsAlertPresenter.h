//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FREnableNotificationsAlertPresenter-Protocol.h"

@class UIWindow;

@interface FREnableNotificationsAlertPresenter : NSObject <FREnableNotificationsAlertPresenter>
{
    _Bool _presenting;
    UIWindow *_window;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
@property(readonly, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)presentEnableNotificationsAlertWithEnableNotificationsContext:(long long)arg1 channelID:(id)arg2 channelName:(id)arg3 window:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end

