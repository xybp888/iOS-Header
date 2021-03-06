//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/BBObserverDelegate-Protocol.h>

@class BBDataProviderConnection, BBObserver, BBSettingsGateway, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UNSApplicationLauncher, UNSAttachmentsService, UNSDaemonLauncher, UNSNotificationCategoryRepository, UNSNotificationRepository, UNSNotificationTopicRepository;
@protocol OS_dispatch_queue;

@interface UNSDefaultDataProviderFactory : NSObject <BBObserverDelegate>
{
    NSMutableDictionary *_dataProvidersByBundleIdentifier;
    NSMutableDictionary *_descriptionsByBundleIdentifier;
    NSMutableSet *_authorizedBundleIdentifiers;
    NSMutableArray *_observers;
    UNSApplicationLauncher *_appLauncher;
    UNSDaemonLauncher *_daemonLauncher;
    UNSNotificationCategoryRepository *_categoryRepository;
    UNSNotificationRepository *_notificationRepository;
    UNSNotificationTopicRepository *_topicRepository;
    UNSAttachmentsService *_attachmentsService;
    BBDataProviderConnection *_dataProviderConnection;
    BBSettingsGateway *_settingsGateway;
    BBObserver *_settingsObserver;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)notificationSourcesDidInstall:(id)arg1;
- (void)_queue_setNotificationTopics:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_notificationSourceDidUninstall:(id)arg1;
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;
- (void)_queue_notificationSourceDidInstall:(id)arg1;
- (void)_queue_notificationSourcesDidInstall:(id)arg1;
- (void)_queue_createNewDefaultDataProviders;
- (void)_queue_removeDataProviderWithBundleIdentifier:(id)arg1;
- (void)_queue_createDataProviderWithBundleIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_queue_createDataProviderWithBundleIdentifier:(id)arg1;
- (id)_queue_dataProviderForBundleIdentifier:(id)arg1;
- (void)_queue_setCriticalAlertAuthorization:(_Bool)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_queue_updateSettingsWithAuthorizationStatus:(long long)arg1 options:(unsigned long long)arg2 topics:(id)arg3 forBundleIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_queue_authorizedBundleIdentifiersForBundleIdentifiers:(id)arg1;
- (id)_queue_sectionInfoForBundleIdentifier:(id)arg1;
- (id)_queue_effectiveSectionInfoForBundleIdentifier:(id)arg1;
- (void)_queue_setSectionInfo:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_queue_notificationSettingsForBundleIdentifier:(id)arg1;
- (void)_queue_removeObserver:(id)arg1;
- (void)_queue_addObserver:(id)arg1;
- (void)_queue_applicationDidDisableNotificationSettings:(id)arg1;
- (void)_queue_applicationDidEnableNotificationSettings:(id)arg1;
- (void)_queue_sectionInfoDidChange:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)authorizedBundleIdentifiersForBundleIdentifiers:(id)arg1;
- (void)setCriticalAlertAuthorization:(_Bool)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateAuthorizationWithOptions:(unsigned long long)arg1 topics:(id)arg2 forBundleIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)requestAuthorizationStatus:(long long)arg1 withOptions:(unsigned long long)arg2 topics:(id)arg3 forBundleIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)notificationSettingsForBundleIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithApplicationLauncher:(id)arg1 daemonLauncher:(id)arg2 categoryRepository:(id)arg3 notificationRepository:(id)arg4 attachmentsService:(id)arg5 topicRepository:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

