//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsServer/NSObject-Protocol.h>

@class NSString, UNSNotificationTopicRepository;

@protocol UNSNotificationTopicRepositoryObserver <NSObject>
- (void)topicRepository:(UNSNotificationTopicRepository *)arg1 didChangeTopicsForBundleIdentifier:(NSString *)arg2;
@end

