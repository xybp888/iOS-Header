//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCNetworkOperation.h>

@class FCCKContentDatabase, NSArray, NSDictionary;

@interface FCCKContentFetchOperation : FCNetworkOperation
{
    _Bool _getPermanentAssetURLs;
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSDictionary *_recordIDsToETags;
    NSArray *_desiredKeys;
    CDUnknownBlockType _perRecordCompletionBlock;
    CDUnknownBlockType _fetchRecordsCompletionBlock;
    NSArray *_requestUUIDs;
    long long _networkEventType;
    NSDictionary *_resultRecordsByRecordID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *resultRecordsByRecordID; // @synthesize resultRecordsByRecordID=_resultRecordsByRecordID;
@property(nonatomic) long long networkEventType; // @synthesize networkEventType=_networkEventType;
@property(copy, nonatomic) NSArray *requestUUIDs; // @synthesize requestUUIDs=_requestUUIDs;
@property(copy, nonatomic) CDUnknownBlockType fetchRecordsCompletionBlock; // @synthesize fetchRecordsCompletionBlock=_fetchRecordsCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perRecordCompletionBlock; // @synthesize perRecordCompletionBlock=_perRecordCompletionBlock;
@property(nonatomic) _Bool getPermanentAssetURLs; // @synthesize getPermanentAssetURLs=_getPermanentAssetURLs;
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(retain, nonatomic) NSDictionary *recordIDsToETags; // @synthesize recordIDsToETags=_recordIDsToETags;
@property(copy, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(retain, nonatomic) FCCKContentDatabase *database; // @synthesize database=_database;
- (id)_operationForRecordID:(id)arg1;
- (id)throttleGroup;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)init;

@end

