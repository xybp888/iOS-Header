//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@protocol NCNotificationListCoalescingControlsHandlerDelegate;

@protocol NCNotificationListCoalescingControlsHandler <NSObject>
@property(nonatomic) __weak id <NCNotificationListCoalescingControlsHandlerDelegate> handlerDelegate;
- (_Bool)shouldReceiveTouchAtPointInWindowSpace:(struct CGPoint)arg1;
- (_Bool)dismissModalFullScreenIfNeeded;
- (void)resetClearButtonStateAnimated:(_Bool)arg1;
@end

