//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NotificationRelay : NSObject
{
    _Bool _refreshManagers;
}

+ (id)sharedRelay;
@property(nonatomic) _Bool refreshManagers; // @synthesize refreshManagers=_refreshManagers;
- (void)refreshManagersForPreferences:(_Bool)arg1 localNotifications:(_Bool)arg2;
- (void)relayFrameworkNotification:(id)arg1;
- (id)init;

@end

