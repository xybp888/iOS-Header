//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDAccessorySettingsBackingStoreTransactionReceiverDelegate-Protocol.h>
#import <HomeKitDaemon/HMDAccessorySettingsMessageController-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDAccessorySettingGroup, HMFTimer, NSArray, NSMapTable, NSMutableArray, NSMutableSet, NSObject, NSString, NSUUID;
@protocol HMDAccessorySettingsControllerDataSource, HMDAccessorySettingsControllerDelegate, HMDAccessorySettingsControllerDependencyFactory, HMDAccessorySettingsMessageHandler, HMDBackingStoreObjectProtocol, OS_dispatch_queue;

@interface HMDAccessorySettingsController : HMFObject <HMFLogging, HMFTimerDelegate, HMDAccessorySettingsBackingStoreTransactionReceiverDelegate, HMDAccessorySettingsMessageController, NSSecureCoding>
{
    struct os_unfair_lock_s _lock;
    _Bool _isSettingOwner;
    _Bool _isMigrationOwner;
    _Bool _didInitiateSettingsCreationForOlderSoftwareCounterpart;
    NSMapTable *_groupsMap;
    NSMapTable *_settingsMap;
    HMDAccessorySettingGroup *_rootGroup;
    id <HMDBackingStoreObjectProtocol> _transactionReceiver;
    id <HMDAccessorySettingsControllerDependencyFactory> _factory;
    NSMutableArray *_allChildrenIdentifiers;
    id <HMDAccessorySettingsControllerDataSource> _dataSource;
    id <HMDAccessorySettingsControllerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_parentUUID;
    NSString *_codingKey;
    NSMutableSet *_dependantControllers;
    HMDAccessorySettingsController *_ownerController;
    HMFTimer *_fixupSettingsTimer;
    HMFTimer *_auditSettingsTimer;
    NSMutableSet *_constraintItemsMarkedForRemoval;
    id <HMDAccessorySettingsMessageHandler> _messageHandler;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) id <HMDAccessorySettingsMessageHandler> messageHandler; // @synthesize messageHandler=_messageHandler;
@property(nonatomic) _Bool didInitiateSettingsCreationForOlderSoftwareCounterpart; // @synthesize didInitiateSettingsCreationForOlderSoftwareCounterpart=_didInitiateSettingsCreationForOlderSoftwareCounterpart;
@property(retain, nonatomic) NSMutableSet *constraintItemsMarkedForRemoval; // @synthesize constraintItemsMarkedForRemoval=_constraintItemsMarkedForRemoval;
@property(retain) HMFTimer *auditSettingsTimer; // @synthesize auditSettingsTimer=_auditSettingsTimer;
@property(retain) HMFTimer *fixupSettingsTimer; // @synthesize fixupSettingsTimer=_fixupSettingsTimer;
@property _Bool isMigrationOwner; // @synthesize isMigrationOwner=_isMigrationOwner;
@property __weak HMDAccessorySettingsController *ownerController; // @synthesize ownerController=_ownerController;
@property(readonly) NSMutableSet *dependantControllers; // @synthesize dependantControllers=_dependantControllers;
@property(readonly) NSString *codingKey; // @synthesize codingKey=_codingKey;
@property(readonly) NSUUID *parentUUID; // @synthesize parentUUID=_parentUUID;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) __weak id <HMDAccessorySettingsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) __weak id <HMDAccessorySettingsControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) NSMutableArray *allChildrenIdentifiers; // @synthesize allChildrenIdentifiers=_allChildrenIdentifiers;
@property(readonly) id <HMDAccessorySettingsControllerDependencyFactory> factory; // @synthesize factory=_factory;
@property(readonly) id <HMDBackingStoreObjectProtocol> transactionReceiver; // @synthesize transactionReceiver=_transactionReceiver;
- (void)didDetectCounterpartUsesSoftwareVersionBasedMigrationOwner;
- (void)updateSettingOwner:(_Bool)arg1;
- (void)auditOnFirstFetch;
- (void)removeAllDependants;
- (void)removeDependant:(id)arg1;
- (void)addDependant:(id)arg1;
- (id)modelObjectsForSettings;
- (void)configureIsSettingOwner:(_Bool)arg1 migrationOwner:(_Bool)arg2 home:(id)arg3;
- (void)configureIsSettingOwner:(_Bool)arg1 home:(id)arg2;
@property(readonly, copy) NSArray *childrenIdentifiers;
- (void)decodeWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)didBecomeIndependantOwner;
- (void)didChangeDependantSettings:(id)arg1 ownerSettingsKeyPaths:(id)arg2;
- (void)didUpdateSettingConstraints:(id)arg1;
- (void)didChangeSetting:(id)arg1;
- (void)_didRemoveSetting:(id)arg1;
- (void)_didAddSetting:(id)arg1;
- (void)_didRemoveGroup:(id)arg1;
- (void)_didAddGroup:(id)arg1;
- (void)handleRemovedSettingConstraintModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleUpdatedSettingConstraintModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleRemovedSettingModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addedSettingModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updatedSetting:(id)arg1 model:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleUpdatedSettingModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleRemovedGroupModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleUpdatedGroupModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_replaceConstraintsOnMessageToChildWithAdditions:(id)arg1 removedChildConstraints:(id)arg2 settingKeyPath:(id)arg3 senderProductClass:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_replaceConstraintsOnSetting:(id)arg1 additions:(id)arg2 removals:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)onMessageReplaceConstraintsWithAdditions:(id)arg1 constraintIdsToRemove:(id)arg2 settingIdentifier:(id)arg3 senderProductClass:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_cacheConstraintAdditions:(id)arg1 removals:(id)arg2 setting:(id)arg3;
- (void)onMessageUpdateConstraints:(id)arg1 settingIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onMessageRemoveConstraint:(id)arg1 settingIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onMessageAddConstraint:(id)arg1 settingIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateValue:(id)arg1 forSetting:(id)arg2 senderVersion:(id)arg3 senderProductClass:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_onMessageUpdateValue:(id)arg1 settingKeyPath:(id)arg2 senderVersion:(id)arg3 senderProductClass:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)onMessageUpdateValue:(id)arg1 settingIdentifier:(id)arg2 senderVersion:(id)arg3 senderProductClass:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)groupForKeyPath:(id)arg1;
- (id)settingForKeyPath:(id)arg1;
- (_Bool)haveGroupWithUUID:(id)arg1;
- (void)owner:(id)arg1 didUpdateSettings:(id)arg2;
- (void)scheduleDependantFixup;
- (void)_performDependantFixup;
- (void)_removeDependant:(id)arg1;
- (id)mergeWithSettingsMetadata:(id)arg1;
- (void)_migrateSettingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_createSettings;
- (void)timerDidFire:(id)arg1;
- (void)_reevaluateDependantSettings;
- (void)_performSettingsAudit;
- (void)scheduleAuditWithReason:(unsigned long long)arg1 from:(id)arg2;
- (void)_scheduleAuditWithReason:(unsigned long long)arg1;
- (void)settingsHierarchyDidChange;
- (id)_keyPathsForSettings;
@property(retain) HMDAccessorySettingGroup *rootGroup; // @synthesize rootGroup=_rootGroup;
@property(retain) NSMapTable *settingsMap; // @synthesize settingsMap=_settingsMap;
@property(retain) NSMapTable *groupsMap; // @synthesize groupsMap=_groupsMap;
- (_Bool)hasDependants;
- (_Bool)isProxy;
@property _Bool isSettingOwner; // @synthesize isSettingOwner=_isSettingOwner;
@property(readonly, copy) NSString *description;
- (id)logIdentifier;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3 parentUUID:(id)arg4 codingKey:(id)arg5;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3 parentUUID:(id)arg4 codingKey:(id)arg5 settingOwner:(_Bool)arg6 migrationOwner:(_Bool)arg7 factory:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

