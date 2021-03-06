//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

#import <CloudKit/CKFetchRecordChangesOperationCallbacks-Protocol.h>

@class CKFetchRecordZoneChangesOperationInfo, CKRecordZoneID, CKServerChangeToken, NSArray, NSData, NSMutableDictionary;
@protocol CKFetchRecordChangesOperationCallbacks;

@interface CKFetchRecordChangesOperation : CKDatabaseOperation <CKFetchRecordChangesOperationCallbacks>
{
    _Bool _shouldFetchAssetContents;
    _Bool _fetchAllChanges;
    CDUnknownBlockType _recordChangedBlock;
    CDUnknownBlockType _recordWithIDWasDeletedBlock;
    CDUnknownBlockType _fetchRecordChangesCompletionBlock;
    CDUnknownBlockType _serverChangeTokenFetchedBlock;
    CDUnknownBlockType _changeTokensUpdatedBlock;
    CKRecordZoneID *_recordZoneID;
    CKServerChangeToken *_previousServerChangeToken;
    unsigned long long _resultsLimit;
    NSArray *_desiredKeys;
    CKServerChangeToken *_resultServerChangeToken;
    NSData *_resultClientChangeTokenData;
    long long _status;
    NSMutableDictionary *_recordErrors;
}

+ (SEL)daemonCallbackCompletionSelector;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (Class)operationInfoClass;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *recordErrors; // @synthesize recordErrors=_recordErrors;
@property(nonatomic) _Bool fetchAllChanges; // @synthesize fetchAllChanges=_fetchAllChanges;
@property(nonatomic) _Bool shouldFetchAssetContents; // @synthesize shouldFetchAssetContents=_shouldFetchAssetContents;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSData *resultClientChangeTokenData; // @synthesize resultClientChangeTokenData=_resultClientChangeTokenData;
@property(retain, nonatomic) CKServerChangeToken *resultServerChangeToken; // @synthesize resultServerChangeToken=_resultServerChangeToken;
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(copy, nonatomic) CKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
@property(copy, nonatomic) CKRecordZoneID *recordZoneID; // @synthesize recordZoneID=_recordZoneID;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)handleOperationDidCompleteWithServerChangeToken:(id)arg1 clientChangeTokenData:(id)arg2 recordChangesStatus:(long long)arg3 metrics:(id)arg4 error:(id)arg5;
- (void)handleChangeSetCompletionWithServerChangeToken:(id)arg1 clientChangeTokenData:(id)arg2 recordChangesStatus:(long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)handleDeleteForRecordID:(id)arg1;
- (void)handleChangeForRecordID:(id)arg1 record:(id)arg2 error:(id)arg3;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (long long)changeTypesFromSetCallbacks;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)relevantZoneIDs;
@property(readonly, nonatomic) _Bool moreComing;
@property(copy, nonatomic) CDUnknownBlockType changeTokensUpdatedBlock; // @synthesize changeTokensUpdatedBlock=_changeTokensUpdatedBlock;
@property(copy, nonatomic) CDUnknownBlockType serverChangeTokenFetchedBlock; // @synthesize serverChangeTokenFetchedBlock=_serverChangeTokenFetchedBlock;
@property(copy, nonatomic) CDUnknownBlockType fetchRecordChangesCompletionBlock; // @synthesize fetchRecordChangesCompletionBlock=_fetchRecordChangesCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType recordWithIDWasDeletedBlock; // @synthesize recordWithIDWasDeletedBlock=_recordWithIDWasDeletedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordChangedBlock; // @synthesize recordChangedBlock=_recordChangedBlock;
- (id)initWithRecordZoneID:(id)arg1 previousServerChangeToken:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) id <CKFetchRecordChangesOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(readonly, nonatomic) CKFetchRecordZoneChangesOperationInfo *operationInfo; // @dynamic operationInfo;

@end

