//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FCNotificationsConfiguration : NSObject
{
    NSArray *_preSubscribedNotificationsChannelIDs;
    NSArray *_recommendedNotificationChannelIDs;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *recommendedNotificationChannelIDs; // @synthesize recommendedNotificationChannelIDs=_recommendedNotificationChannelIDs;
@property(readonly, copy, nonatomic) NSArray *preSubscribedNotificationsChannelIDs; // @synthesize preSubscribedNotificationsChannelIDs=_preSubscribedNotificationsChannelIDs;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPresubscribedChannelIDs:(id)arg1 recommendedNotificationChannelIDs:(id)arg2;

@end

