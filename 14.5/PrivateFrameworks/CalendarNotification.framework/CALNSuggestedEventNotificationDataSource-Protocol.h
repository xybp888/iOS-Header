//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarNotification/NSObject-Protocol.h>

@class CALNSuggestedEventNotificationInfo, NSArray, NSString;

@protocol CALNSuggestedEventNotificationDataSource <NSObject>
- (void)clearSuggestedEventNotificationWithSourceClientIdentifier:(NSString *)arg1;
- (void)deleteCanceledSuggestedEventWithSourceClientIdentifier:(NSString *)arg1;
- (void)ignoreSuggestedEventWithSourceClientIdentifier:(NSString *)arg1;
- (void)confirmSuggestedEventWithSourceClientIdentifier:(NSString *)arg1;
- (CALNSuggestedEventNotificationInfo *)fetchSuggestedEventNotificationWithObjectID:(NSString *)arg1;
- (NSArray *)fetchSuggestedEventNotificationsWithSourceClientIdentifier:(NSString *)arg1;
- (NSArray *)fetchSuggestedEventNotificationObjectIDs;
- (NSArray *)fetchSuggestedEventNotifications;
@end

