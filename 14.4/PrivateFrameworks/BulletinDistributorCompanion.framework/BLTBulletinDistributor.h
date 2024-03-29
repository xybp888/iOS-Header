//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BBObserverDelegate-Protocol.h>
#import <BulletinDistributorCompanion/BLTBulletinDistributorSubscriberDeviceDelegate-Protocol.h>
#import <BulletinDistributorCompanion/BLTCompanionServer-Protocol.h>
#import <BulletinDistributorCompanion/NSXPCListenerDelegate-Protocol.h>

@class BBObserver, BLTBulletinFetcher, BLTClientReplyTimeoutManager, BLTGizmoLegacyMap, BLTHashCache, BLTPingSubscriberManager, BLTRemoteGizmoClient, BLTSectionConfiguration, BLTSettingSync, BLTSimpleCache, BLTUserNotificationList, BLTWatchKitAppList, NSDate, NSMutableDictionary, NSMutableSet, NSString;

@interface BLTBulletinDistributor : NSObject <BLTBulletinDistributorSubscriberDeviceDelegate, BBObserverDelegate, BLTCompanionServer, NSXPCListenerDelegate>
{
    unsigned long long _stateHandler;
    _Bool _standaloneTestModeEnabled;
    BLTRemoteGizmoClient *_gizmoConnection;
    BBObserver *_bbObserver;
    NSMutableDictionary *_bulletins;
    NSMutableSet *_noticesFeed;
    NSMutableSet *_lockScreenFeed;
    BLTHashCache *_attachmentHashCache;
    BLTHashCache *_iconHashCache;
    BLTWatchKitAppList *_watchKitAppList;
    BLTSettingSync *_settingSync;
    NSDate *_startupTime;
    NSMutableDictionary *_pendingBulletinUpdates;
    NSMutableSet *_bulletinIDsWaitingOnGizmoAdd;
    BLTClientReplyTimeoutManager *_clientReplyTimeoutManager;
    BLTSectionConfiguration *_sectionConfiguration;
    BLTUserNotificationList *_userNotificationList;
    BLTBulletinFetcher *_bulletinFetcher;
    BLTPingSubscriberManager *_pingSubscriberManager;
    BLTGizmoLegacyMap *_gizmoLegacyMap;
    BLTSimpleCache *_mruCacheOfSectionIDs;
}

+ (id)sharedDistributor;
- (void).cxx_destruct;
@property(retain, nonatomic) BLTSimpleCache *mruCacheOfSectionIDs; // @synthesize mruCacheOfSectionIDs=_mruCacheOfSectionIDs;
@property(retain, nonatomic) BLTGizmoLegacyMap *gizmoLegacyMap; // @synthesize gizmoLegacyMap=_gizmoLegacyMap;
@property(retain, nonatomic) BLTPingSubscriberManager *pingSubscriberManager; // @synthesize pingSubscriberManager=_pingSubscriberManager;
@property(retain, nonatomic) BLTBulletinFetcher *bulletinFetcher; // @synthesize bulletinFetcher=_bulletinFetcher;
@property(retain, nonatomic) BLTUserNotificationList *userNotificationList; // @synthesize userNotificationList=_userNotificationList;
@property(retain, nonatomic) BLTSectionConfiguration *sectionConfiguration; // @synthesize sectionConfiguration=_sectionConfiguration;
@property(retain, nonatomic) BLTClientReplyTimeoutManager *clientReplyTimeoutManager; // @synthesize clientReplyTimeoutManager=_clientReplyTimeoutManager;
@property(retain, nonatomic) NSMutableSet *bulletinIDsWaitingOnGizmoAdd; // @synthesize bulletinIDsWaitingOnGizmoAdd=_bulletinIDsWaitingOnGizmoAdd;
@property(retain, nonatomic) NSMutableDictionary *pendingBulletinUpdates; // @synthesize pendingBulletinUpdates=_pendingBulletinUpdates;
@property(nonatomic) _Bool standaloneTestModeEnabled; // @synthesize standaloneTestModeEnabled=_standaloneTestModeEnabled;
@property(retain, nonatomic) NSDate *startupTime; // @synthesize startupTime=_startupTime;
@property(retain, nonatomic) BLTSettingSync *settingSync; // @synthesize settingSync=_settingSync;
@property(retain, nonatomic) BLTWatchKitAppList *watchKitAppList; // @synthesize watchKitAppList=_watchKitAppList;
@property(retain, nonatomic) BLTHashCache *iconHashCache; // @synthesize iconHashCache=_iconHashCache;
@property(retain, nonatomic) BLTHashCache *attachmentHashCache; // @synthesize attachmentHashCache=_attachmentHashCache;
@property(retain, nonatomic) NSMutableSet *lockScreenFeed; // @synthesize lockScreenFeed=_lockScreenFeed;
@property(retain, nonatomic) NSMutableSet *noticesFeed; // @synthesize noticesFeed=_noticesFeed;
@property(retain, nonatomic) NSMutableDictionary *bulletins; // @synthesize bulletins=_bulletins;
@property(retain, nonatomic) BBObserver *bbObserver; // @synthesize bbObserver=_bbObserver;
@property(retain, nonatomic) BLTRemoteGizmoClient *gizmoConnection; // @synthesize gizmoConnection=_gizmoConnection;
- (id)_stateDescription;
- (void)_addBulletin:(id)arg1 forFeed:(unsigned long long)arg2 playLightsAndSirens:(_Bool)arg3 attachment:(id)arg4 attachmentType:(long long)arg5 alwaysSend:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)willSendLightsAndSirensWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 inPhoneSection:(id)arg3 systemApp:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)shouldSuppressLightsAndSirensNow;
- (void)removeBulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3;
- (void)handleAction:(id)arg1;
- (void)_handleDidPlayLightsAndSirens:(_Bool)arg1 forBulletin:(id)arg2 inPhoneSection:(id)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5 fromGizmo:(_Bool)arg6 finalReply:(_Bool)arg7 replyToken:(id)arg8;
- (void)handleDidPlayLightsAndSirens:(_Bool)arg1 forBulletin:(id)arg2 inPhoneSection:(id)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5 replyToken:(id)arg6;
- (void)_handleDidPlayLightsAndSirens:(_Bool)arg1 forBulletin:(id)arg2 inPhoneSection:(id)arg3 finalReply:(_Bool)arg4 replyToken:(id)arg5;
- (void)_performRemoveBulletin:(id)arg1 forFeed:(unsigned long long)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)_performModifyBulletin:(id)arg1 forFeed:(unsigned long long)arg2;
- (void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(_Bool)arg4 attachment:(id)arg5 attachmentType:(long long)arg6 alwaysSend:(_Bool)arg7 withReply:(CDUnknownBlockType)arg8;
- (void)_subscriberWillAllowBulletin:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_replyTokenForSectionID:(id)arg1 publisherMatchID:(id)arg2;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(_Bool)arg4 withReply:(CDUnknownBlockType)arg5;
- (void)clearReplyBlockForReplyToken:(id)arg1;
- (void)setReplyBlock:(CDUnknownBlockType)arg1 forSection:(id)arg2 bulletin:(id)arg3 publicationDate:(id)arg4 replyToken:(id)arg5;
- (void)_cleanupForAddedBulletin:(id)arg1;
- (void)_removeTranscodedAttachmentIfNeededForBulletin:(id)arg1;
- (_Bool)_enqueuBulletinUpdate:(unsigned long long)arg1 bulletin:(id)arg2 feed:(unsigned long long)arg3;
- (void)_performNextPendingBulletinUpdateForBulletinID:(id)arg1;
- (void)_sendCurrentBulletinIdentifiers;
- (id)_obsoletionDateRelativeToNow;
- (void)_reloadBulletinsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_willNanoPresent:(unsigned long long)arg1 forBulletin:(id)arg2 feed:(unsigned long long)arg3;
- (unsigned long long)_nanoPresentableFeedFromPhoneFeed:(unsigned long long)arg1;
- (_Bool)_willNanoPresent:(unsigned long long)arg1;
- (id)_bulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3;
- (_Bool)_notifyGizmoOfBulletin:(id)arg1 forFeed:(unsigned long long)arg2 updateType:(unsigned long long)arg3 playLightsAndSirens:(_Bool)arg4 shouldSendReplyIfNeeded:(_Bool)arg5 attachment:(id)arg6 attachmentType:(long long)arg7 replyToken:(id)arg8;
- (void)_sendPBBulletin:(id)arg1 forBulletin:(id)arg2 feed:(unsigned long long)arg3 updateType:(unsigned long long)arg4 playLightsAndSirens:(_Bool)arg5 shouldSendReplyIfNeeded:(_Bool)arg6;
- (void)_handleAddBulletin:(id)arg1 feed:(unsigned long long)arg2 shouldPlayLightsAndSirens:(_Bool)arg3 performedWithSuccess:(_Bool)arg4 sendAttemptTime:(id)arg5 connectionStatus:(unsigned long long)arg6 isGizmoReady:(_Bool)arg7 shouldSendReplyIfNeeded:(_Bool)arg8 replyToken:(id)arg9;
- (void)_attachIconToBulletin:(id)arg1;
- (void)_attachAttachment:(id)arg1 attachmentType:(long long)arg2 toBulletin:(id)arg3;
- (void)_postWillSendBulletinToGizmoNotificationForBulletin:(id)arg1;
- (_Bool)_rememberBulletin:(id)arg1 forFeed:(unsigned long long)arg2 syncChangesToWatch:(_Bool)arg3;
- (void)_mapBulletin:(id)arg1;
- (void)_notifyGizmoOfCancelBulletin:(id)arg1 sectionID:(id)arg2 universalSectionID:(id)arg3 feed:(unsigned long long)arg4 withBulletinDate:(id)arg5;
- (void)_pingSubscriberWithBulletin:(id)arg1 ack:(CDUnknownBlockType)arg2;
- (void)_setupBBObserver;
- (void)_registerForPairedDeviceBuildChanges;
- (void)_handleAllSyncComplete;
- (void)_startBulletinListening;
- (void)_performSync;
- (void)_handleInitialSyncStateCompleteChanged:(id)arg1;
- (void)_handleSyncStateChanged:(id)arg1;
- (void)removeSectionID:(id)arg1;
- (id)overriddenSettings;
- (id)originalSettings;
- (id)settingOverrides;
- (void)disableStandaloneTestMode;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4;
@property(readonly, nonatomic) _Bool isStandaloneTestModeEnabled;
- (void)clearSectionInfoSentCache;
- (void)spoolSectionInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendAllSectionInfoWithSpool:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendSectionInfoWithSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isLocallyConnectedToRemote;
- (void)sendBulletinSummary:(id)arg1;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 subtype:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

