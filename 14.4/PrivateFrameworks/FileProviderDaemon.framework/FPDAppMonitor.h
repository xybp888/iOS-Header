//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FPAppRegistry, FPDServer, NSDictionary;
@protocol OS_dispatch_queue;

@interface FPDAppMonitor : NSObject
{
    NSDictionary *_defaultProviderByAppBundleID;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _didChangeProvidersToken;
    int _didChangeDefaultProviderToken;
    _Bool _monitoring;
    FPAppRegistry *_appRegistry;
    FPDServer *_server;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak FPDServer *server; // @synthesize server=_server;
@property(readonly, copy, nonatomic) FPAppRegistry *appRegistry; // @synthesize appRegistry=_appRegistry;
@property(getter=isMonitoring) _Bool monitoring; // @synthesize monitoring=_monitoring;
- (void)_updateDefaultProviderByAppBundleID;
- (id)_updateDefaultProviderDomainID;
- (void)_didChangeDefaultSaveLocationInUserDefaults;
- (void)_didChangeListOfProviders;
- (void)_didChangeLocale:(id)arg1;
- (void)_didUnregisterApps:(id)arg1;
- (void)_didRegisterApps:(id)arg1;
- (int)_registerForNotification:(const char *)arg1 handler:(CDUnknownBlockType)arg2;
- (id)_appMetadataIfMonitoringIsNeeded:(id)arg1;
- (void)_populateListOfMonitoredApps;
- (void)dumpStateTo:(id)arg1;
- (void)stopMonitoring;
- (void)startMonitoring;
- (id)initWithServer:(id)arg1;

@end

