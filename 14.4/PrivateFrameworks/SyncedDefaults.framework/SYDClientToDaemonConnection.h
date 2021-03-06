//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SyncedDefaults/SYDRemotePreferencesSource.h>

#import <SyncedDefaults/SYDClientProtocol-Protocol.h>

@class NSCache, NSObject, NSString, NSXPCConnection, SYDStoreConfiguration;
@protocol OS_dispatch_queue;

@interface SYDClientToDaemonConnection : SYDRemotePreferencesSource <SYDClientProtocol>
{
    _Bool _didLogFaultForEntitlements;
    int _daemonWakeNotifyToken;
    SYDStoreConfiguration *_storeConfiguration;
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_analyticsQueue;
    NSCache *_cachedObjects;
    unsigned long long _syncingWithCloudCounter;
}

+ (id)daemonProtocolInterface;
+ (void)processAccountChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)shouldSyncOnFirstInitializationOverride;
+ (void)setShouldSyncOnFirstInitializationOverride:(id)arg1;
+ (_Bool)hasInitializedStoreWithIdentifier:(id)arg1;
+ (void)setHasInitializedStoreWithIdentifier:(id)arg1;
+ (id)disgustingUglyHardcodedKnownStoreIdentifierForApplicationIdentifier:(id)arg1;
+ (id)defaultStoreIdentifierForCurrentProcessWithApplicationIdentifier:(id)arg1;
- (void).cxx_destruct;
@property unsigned long long syncingWithCloudCounter; // @synthesize syncingWithCloudCounter=_syncingWithCloudCounter;
@property(retain, nonatomic) NSCache *cachedObjects; // @synthesize cachedObjects=_cachedObjects;
@property(nonatomic) _Bool didLogFaultForEntitlements; // @synthesize didLogFaultForEntitlements=_didLogFaultForEntitlements;
@property(nonatomic) int daemonWakeNotifyToken; // @synthesize daemonWakeNotifyToken=_daemonWakeNotifyToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue; // @synthesize analyticsQueue=_analyticsQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) SYDStoreConfiguration *storeConfiguration; // @synthesize storeConfiguration=_storeConfiguration;
- (id)asyncDaemonWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousDaemonWithErrorHandler:(CDUnknownBlockType)arg1;
- (long long)maximumTotalDataLength;
- (long long)maximumDataLengthPerKey;
- (long long)maximumKeyLength;
- (long long)maximumKeyCount;
- (long long)generationCount;
- (void)setDefaultsConfiguration:(id)arg1;
- (void)ping;
- (void)unregisterForSynchronizedDefaults;
- (void)updateConfiguration;
- (void)discardExternalChangesForChangeCount:(long long)arg1;
- (id)copyExternalChangesWithChangeCount:(long long *)arg1;
- (unsigned char)hasExternalChanges;
- (void)storeDidChangeWithConfiguration:(id)arg1 changeDictionary:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)logFaultIfNecessaryForError:(id)arg1;
- (void)performInitialSyncIfNecessary;
- (void)daemonDidWake;
- (void)registerForDaemonDidWakeNotifications;
- (void)registerForSynchronizedDefaults;
- (void)synchronizationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)scheduleRemoteSynchronization;
- (void)processChangeDictionary:(id)arg1;
- (unsigned char)synchronizeForced:(unsigned char)arg1;
- (unsigned char)synchronize;
- (id)changeToken;
- (void)setChangeToken:(id)arg1;
- (struct __CFDictionary *)copyDictionary;
- (struct __CFArray *)copyKeyList;
- (id)dictionaryRepresentation;
- (void *)getValueForKey:(struct __CFString *)arg1;
- (void)setValue:(void *)arg1 forKey:(struct __CFString *)arg2;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) _Bool isSyncingWithCloud;
@property(readonly, nonatomic) long long storeType;
@property(readonly, nonatomic) NSString *storeIdentifier;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithStoreConfiguration:(id)arg1;
- (id)initWithStoreIdentifier:(id)arg1 type:(long long)arg2;

@end

