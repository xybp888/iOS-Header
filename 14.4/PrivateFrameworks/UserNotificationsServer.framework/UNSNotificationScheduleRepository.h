//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UNSKeyedDictionaryRepository;
@protocol OS_dispatch_queue;

@interface UNSNotificationScheduleRepository : NSObject
{
    UNSKeyedDictionaryRepository *_repository;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_queue_performMigrationForBundleIdentifier:(id)arg1;
- (void)_queue_performMigration;
- (void)_queue_removeScheduleForBundleIdentifier:(id)arg1;
- (void)_queue_setSchedule:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_queue_scheduleForBundleIdentifier:(id)arg1;
- (void)performMigration;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)removeScheduleForBundleIdentifier:(id)arg1;
- (void)setSchedule:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)scheduleForBundleIdentifier:(id)arg1;
- (id)allBundleIdentifiers;
- (id)initWithDirectory:(id)arg1 librarian:(id)arg2;
- (id)_dateFormatter;

@end

