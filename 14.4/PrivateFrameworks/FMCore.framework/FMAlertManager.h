//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface FMAlertManager : NSObject
{
    NSMutableDictionary *_activeAlerts;
    NSMutableDictionary *_activeCFNotificationsByCategory;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *activeCFNotificationsByCategory; // @synthesize activeCFNotificationsByCategory=_activeCFNotificationsByCategory;
@property(retain, nonatomic) NSMutableDictionary *activeAlerts; // @synthesize activeAlerts=_activeAlerts;
- (id)_xpcTransactionNameFor:(id)arg1;
- (void)activateAlert:(id)arg1;
- (id)initSingleton;
- (id)init;

@end

