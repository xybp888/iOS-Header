//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>

@class MTAlarm, MTScheduledObject, MTTimer, NSArray;

@protocol MTNotificationCenter <NSObject>
- (void)dismissNotificationsForTimer:(MTTimer *)arg1;
- (void)postNotificationForScheduledTimer:(MTScheduledObject *)arg1 completionBlock:(void (^)(void))arg2;
- (void)dismissNotificationsForAlarm:(MTAlarm *)arg1;
- (void)postNotificationForScheduledAlarm:(MTScheduledObject *)arg1 completionBlock:(void (^)(void))arg2;

@optional
- (void)removeAllDeliveredNotifications;
- (void)dismissNotificationsWithIdentifiers:(NSArray *)arg1;
- (void)dismissNotificationsForAlarm:(MTAlarm *)arg1 includeSnooze:(_Bool)arg2;
- (void)dismissNotificationsForAlarm:(MTAlarm *)arg1 dismissAction:(unsigned long long)arg2;
- (void)dismissRelatedNotificationsForScheduledAlarm:(MTScheduledObject *)arg1;
@end

