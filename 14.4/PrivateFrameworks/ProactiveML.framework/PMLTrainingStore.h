//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _PASSqliteDatabase;

@interface PMLTrainingStore : NSObject
{
    NSString *_dbPath;
    _PASSqliteDatabase *_db;
    id _lockStateNotificationToken;
    _Bool _allowSkipSchema;
    CDUnknownBlockType _sourceRecoverer;
    unsigned long long _maxTimesAccessed;
}

+ (id)inMemoryStoreForTesting;
+ (void)setLastUsedTimestampLimit:(double)arg1;
+ (double)lastUsedTimestampLimit;
+ (id)getSchema:(unsigned long long *)arg1;
+ (_Bool)_runQueries:(id)arg1 andUpdateVersionTo:(unsigned int)arg2 inTransactionOnDb:(id)arg3 forStore:(id)arg4;
+ (long long)migrate:(id)arg1 to:(id)arg2 forStore:(id)arg3;
+ (long long)_migrate:(id)arg1 forStore:(id)arg2;
+ (id)_sessionDataToBatchWithNumberOfColumns:(unsigned long long)arg1 rowsData:(id)arg2 labelsData:(id)arg3;
- (void).cxx_destruct;
- (void)closeDbForTesting;
- (unsigned long long)numberOfRowsInTable:(id)arg1;
- (void)loadSessionsForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 withSkew:(double)arg3 andLimit:(int)arg4 block:(CDUnknownBlockType)arg5;
- (void)storeSession:(id)arg1 label:(long long)arg2 model:(id)arg3;
- (void)storeSession:(id)arg1 source:(id)arg2 label:(long long)arg3 model:(id)arg4;
- (_Bool)createSnapshot:(id)arg1;
- (id)dbForTesting;
- (void)logDbNotOpenEvent;
- (id)recoverSourceFromData:(id)arg1;
- (void)setSourceRecoverer:(CDUnknownBlockType)arg1;
- (void)setMaxTimesAccessed:(unsigned long long)arg1;
- (id)getSchema:(unsigned long long *)arg1;
- (_Bool)isDbOpen;
- (void)updateLastTrainingFeaturizationForModel:(id)arg1 andData:(id)arg2;
- (id)lastTrainingFeaturizationForModelName:(id)arg1 andLocale:(id)arg2;
- (void)updateSessionsAndLabelForModel:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)migrateTo:(id)arg1;
- (void)vacuumDb;
- (void)dealloc;
- (_Bool)_truncateDbIfCorrupted;
- (long long)_unsafeOpenDbIfUnlocked;
- (long long)_openDbIfUnlocked;
- (void)_unregisterUnlockHandler;
- (void)_registerUnlockHandler;
- (unsigned long long)sessionDescriptorIdFor:(id)arg1;
- (void)enumerateSessionDescriptorsUsingBlock:(CDUnknownBlockType)arg1;
- (id)sessionStatsForSessionDescriptor:(id)arg1;
- (id)sessionStats;
- (void)deleteSessionsWithBundleId:(id)arg1 domainId:(id)arg2;
- (void)deleteSessionsWithBundleId:(id)arg1 itemId:(id)arg2;
- (void)deleteSessionsWithBundleId:(id)arg1;
- (void)limitSessionsWithSessionDescriptor:(id)arg1 withLabel:(id)arg2 limit:(unsigned long long)arg3;
- (void)limitSessionsByMaxTimesAccessed;
- (void)limitSessionsByLastUsedTTL:(double)arg1;
- (void)limitSessionsForEachLabelWithSessionDescriptor:(id)arg1 totalSessionLimit:(unsigned long long)arg2;
- (void)loadSessionsForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(_Bool)arg4 block:(CDUnknownBlockType)arg5;
- (void)_loadDataForModel:(id)arg1 privacyBudgetRefreshPeriod:(double)arg2 labelAndStartRows:(id)arg3 batchSize:(unsigned long long)arg4 supportPerLabel:(unsigned long long)arg5 block:(CDUnknownBlockType)arg6;
- (void)_loadBatchForModel:(id)arg1 privacyBudgetRefreshPeriod:(double)arg2 labels:(id)arg3 batchSize:(unsigned long long)arg4 block:(CDUnknownBlockType)arg5;
- (void)_loadDataForModel:(id)arg1 positiveRowId:(unsigned long long)arg2 negativeRowId:(unsigned long long)arg3 excludeItemIdsUsedWithin:(double)arg4 limit:(unsigned long long)arg5 onlyAppleInternal:(_Bool)arg6 positiveLabel:(unsigned long long)arg7 skew:(double)arg8 block:(CDUnknownBlockType)arg9;
- (void)_loadDataFromLabelAndTuples:(id)arg1 model:(id)arg2 numberOfRows:(unsigned long long)arg3 numberOfColumns:(unsigned long long)arg4 lastUsedMax:(double)arg5 block:(CDUnknownBlockType)arg6;
- (id)sessionDimensionsForModel:(id)arg1 startingRowId:(unsigned long long)arg2 onlyAppleInternal:(_Bool)arg3 labelFilter:(id)arg4;
- (void)loadSessionsForModel:(id)arg1 privacyBudgetRefreshPeriod:(double)arg2 labels:(id)arg3 batchSize:(unsigned long long)arg4 block:(CDUnknownBlockType)arg5;
- (void)loadDataForModel:(id)arg1 privacyBudgetRefreshPeriod:(double)arg2 labels:(id)arg3 batchSize:(unsigned long long)arg4 block:(CDUnknownBlockType)arg5;
- (void)loadSessionsForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(_Bool)arg4 positiveLabel:(unsigned long long)arg5 skew:(double)arg6 block:(CDUnknownBlockType)arg7;
- (void)loadDataForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(_Bool)arg4 positiveLabel:(unsigned long long)arg5 skew:(double)arg6 block:(CDUnknownBlockType)arg7;
- (void)storeSession:(id)arg1 source:(id)arg2 label:(long long)arg3 model:(id)arg4 bundleId:(id)arg5 domainId:(id)arg6 itemIds:(id)arg7 isAppleInternal:(_Bool)arg8;
- (void)storeSession:(id)arg1 label:(long long)arg2 model:(id)arg3 bundleId:(id)arg4 domainId:(id)arg5 itemIds:(id)arg6 isAppleInternal:(_Bool)arg7;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 allowSkipSchema:(_Bool)arg2;
- (id)init;

@end

