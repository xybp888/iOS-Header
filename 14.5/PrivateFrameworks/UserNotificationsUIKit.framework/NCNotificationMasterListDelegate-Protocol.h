//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationListComponentDelegate-Protocol.h>

@class NCNotificationMasterList, NCNotificationRequest, NSArray, UIScrollView;

@protocol NCNotificationMasterListDelegate <NCNotificationListComponentDelegate>
- (_Bool)notificationMasterList:(NCNotificationMasterList *)arg1 shouldFilterNotificationRequest:(NCNotificationRequest *)arg2;
- (_Bool)notificationMasterList:(NCNotificationMasterList *)arg1 shouldDelayDeliveryOfNotificationRequest:(NCNotificationRequest *)arg2;
- (void)notificationMasterList:(NCNotificationMasterList *)arg1 scrollViewWillEndDragging:(UIScrollView *)arg2 withVelocity:(struct CGPoint)arg3 targetContentOffset:(inout struct CGPoint *)arg4;
- (void)notificationMasterList:(NCNotificationMasterList *)arg1 scrollViewDidScroll:(UIScrollView *)arg2;
- (void)notificationMasterList:(NCNotificationMasterList *)arg1 scrollViewWillBeginDragging:(UIScrollView *)arg2;
- (void)notificationMasterList:(NCNotificationMasterList *)arg1 requestsClearingFromIncomingSectionNotificationRequests:(NSArray *)arg2;
- (void)notificationMasterListDidScrollToRevealNotificationHistory:(NCNotificationMasterList *)arg1;
- (_Bool)notificationMasterListShouldAllowNotificationHistoryReveal:(NCNotificationMasterList *)arg1;
@end

