//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSAssertionSyncManagerDataSource-Protocol.h>
#import <DoNotDisturbServer/DNDSAssertionSyncManagerDelegate-Protocol.h>
#import <DoNotDisturbServer/DNDSEventBehaviorResolverDataSource-Protocol.h>
#import <DoNotDisturbServer/DNDSLegacyAssertionSyncManagerDataSource-Protocol.h>
#import <DoNotDisturbServer/DNDSLifetimeMonitorDataSource-Protocol.h>
#import <DoNotDisturbServer/DNDSLifetimeMonitorDelegate-Protocol.h>
#import <DoNotDisturbServer/DNDSPairedDeviceStateMonitorDelegate-Protocol.h>
#import <DoNotDisturbServer/DNDSRemoteServiceProviderDelegate-Protocol.h>
#import <DoNotDisturbServer/DNDSScheduleLifetimeMonitorDataSource-Protocol.h>
#import <DoNotDisturbServer/DNDSScheduleManagerDataSource-Protocol.h>
#import <DoNotDisturbServer/DNDSSettingsManagerDelegate-Protocol.h>
#import <DoNotDisturbServer/DNDSSettingsSyncManagerDataSource-Protocol.h>
#import <DoNotDisturbServer/DNDSSettingsSyncManagerDelegate-Protocol.h>

@class DNDSCalendarEventLifetimeMonitor, DNDSClientDetailsProvider, DNDSEventBehaviorResolver, DNDSMetricsManager, DNDSModeAssertionManager, DNDSPairedDeviceStateMonitor, DNDSRemoteServiceProvider, DNDSScheduleLifetimeMonitor, DNDSScheduleManager, DNDSSettingsManager, DNDSStateProvider, IDSService, NSArray, NSString;
@protocol DNDSAssertionSyncManager, DNDSSettingsSyncManager, OS_dispatch_queue;

@interface DNDSServer : NSObject <DNDSEventBehaviorResolverDataSource, DNDSLifetimeMonitorDataSource, DNDSScheduleLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate, DNDSRemoteServiceProviderDelegate, DNDSAssertionSyncManagerDataSource, DNDSAssertionSyncManagerDelegate, DNDSLegacyAssertionSyncManagerDataSource, DNDSSettingsSyncManagerDataSource, DNDSSettingsSyncManagerDelegate, DNDSScheduleManagerDataSource, DNDSSettingsManagerDelegate, DNDSPairedDeviceStateMonitorDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    DNDSClientDetailsProvider *_clientDetailsProvider;
    DNDSModeAssertionManager *_modeAssertionManager;
    DNDSCalendarEventLifetimeMonitor *_calendarEventLifetimeMonitor;
    DNDSScheduleLifetimeMonitor *_scheduleLifetimeMonitor;
    NSArray *_lifetimeMonitors;
    DNDSScheduleManager *_scheduleManager;
    DNDSStateProvider *_stateProvider;
    DNDSEventBehaviorResolver *_eventBehaviorResolver;
    DNDSRemoteServiceProvider *_serviceProvider;
    id <DNDSAssertionSyncManager> _assertionSyncManager;
    id <DNDSSettingsSyncManager> _settingsSyncManager;
    DNDSSettingsManager *_settingsManager;
    IDSService *_idsService;
    DNDSPairedDeviceStateMonitor *_pairedDeviceStateMonitor;
    DNDSMetricsManager *_metricsManager;
    unsigned long long _lockState;
    unsigned long long _lostModeState;
}

- (void).cxx_destruct;
@property unsigned long long lostModeState; // @synthesize lostModeState=_lostModeState;
@property unsigned long long lockState; // @synthesize lockState=_lockState;
- (void)_queue_handlePairedDeviceAndSyncSettingsChange;
- (id)_updateModeAssertionManagerAndRefreshLifetimesAndStateWithHandler:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)_activeDateIntervalForModeAssertion:(id)arg1 currentlyActive:(_Bool)arg2;
- (id)_stateSystemSnapshot;
- (void)_queue_updateScheduleManagerLifetimeMonitorsAndStateForReason:(unsigned long long)arg1;
- (void)_queue_resume;
- (void)pairedDeviceStateMonitor:(id)arg1 pairingChangedFromDevice:(id)arg2 toDevice:(id)arg3;
- (void)settingsManager:(id)arg1 didReceiveUpdatedSyncSettings:(id)arg2;
- (void)settingsManager:(id)arg1 didReceiveUpdatedScheduleSettings:(id)arg2;
- (void)settingsManager:(id)arg1 didReceiveUpdatedPhoneCallBypassSettings:(id)arg2;
- (void)settingsManager:(id)arg1 didReceiveUpdatedBehaviorSettings:(id)arg2;
- (id)scheduleSettingsForScheduleManager:(id)arg1;
- (void)syncManager:(id)arg1 didReceiveUpdatedScheduleSettings:(id)arg2;
- (void)syncManager:(id)arg1 didReceiveUpdatedPhoneCallBypassSettings:(id)arg2;
- (id)scheduleSettingsForSyncManager:(id)arg1;
- (id)phoneCallBypassSettingsForSyncManager:(id)arg1;
- (id)currentStateForLegacyAssertionSyncManager:(id)arg1;
- (void)syncManager:(id)arg1 performModeAssertionUpdatesWithHandler:(CDUnknownBlockType)arg2;
- (id)currentlyActivePairedDeviceForSyncManager:(id)arg1;
- (_Bool)remoteServiceProvider:(id)arg1 setScheduleSettings:(id)arg2 withError:(id *)arg3;
- (id)remoteServiceProvider:(id)arg1 scheduleSettingsWithError:(id *)arg2;
- (_Bool)remoteServiceProvider:(id)arg1 setPhoneCallBypassSettings:(id)arg2 withError:(id *)arg3;
- (id)remoteServiceProvider:(id)arg1 phoneCallBypassSettingsWithError:(id *)arg2;
- (_Bool)remoteServiceProvider:(id)arg1 setBehaviorSettings:(id)arg2 withError:(id *)arg3;
- (id)remoteServiceProvider:(id)arg1 behaviorSettingsWithError:(id *)arg2;
- (id)remoteServiceProvider:(id)arg1 currentStateWithError:(id *)arg2;
- (id)remoteServiceProvider:(id)arg1 invalidateAllModeAssertionsTakenBeforeDate:(id)arg2 forReason:(unsigned long long)arg3 clientIdentifier:(id)arg4 error:(id *)arg5;
- (id)remoteServiceProvider:(id)arg1 latestInvalidationWithClientIdentifer:(id)arg2 error:(id *)arg3;
- (id)remoteServiceProvider:(id)arg1 invalidateModeAssertionForClientIdentifier:(id)arg2 reason:(unsigned long long)arg3 reasonOverride:(unsigned long long)arg4 details:(id)arg5 error:(id *)arg6;
- (id)remoteServiceProvider:(id)arg1 invalidateModeAssertionWithUUID:(id)arg2 reason:(unsigned long long)arg3 reasonOverride:(unsigned long long)arg4 error:(id *)arg5;
- (id)remoteServiceProvider:(id)arg1 takeModeAssertionWithDetails:(id)arg2 clientIdentifier:(id)arg3 error:(id *)arg4;
- (id)remoteServiceProvider:(id)arg1 assertionWithClientIdentifer:(id)arg2 error:(id *)arg3;
- (id)remoteServiceProvider:(id)arg1 resolveBehaviorForEventDetails:(id)arg2 clientDetails:(id)arg3 date:(id)arg4 error:(id *)arg5;
- (void)lifetimeMonitor:(id)arg1 lifetimeDidExpireForAssertionUUIDs:(id)arg2 expirationDate:(id)arg3;
- (void)activeAssertionsDidChangeForLifetimeMonitor:(id)arg1;
- (id)scheduleSettingsForScheduleLifetimeMonitor:(id)arg1;
- (id)lifetimeMonitor:(id)arg1 modeAssertionsWithLifetimeClass:(Class)arg2;
- (id)eventBehaviorResolver:(id)arg1 bypassSettingsForClientIdentifier:(id)arg2;
- (unsigned long long)currentUILockStateForEventBehaviorResolver:(id)arg1;
- (id)currentStateForEventBehaviorResolver:(id)arg1;
- (_Bool)_setLostModeState:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)setUILockState:(unsigned long long)arg1 error:(id *)arg2;
- (void)_handleSignificantTimeChange;
- (void)resume;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

