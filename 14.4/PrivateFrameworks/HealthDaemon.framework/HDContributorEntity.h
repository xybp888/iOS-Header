//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDContributorEntity : HDHealthEntity
{
}

+ (id)propertyForSyncAnchor;
+ (id)propertyForSyncProvenance;
+ (id)_contributorReferenceForEntityMatchingPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)_nextSyncAnchorInDatabase:(id)arg1 error:(id *)arg2;
+ (id)_predicateForContributorReference:(id)arg1;
+ (id)_predicateForNonDeletedContributor;
+ (id)_predicateForContributorWithUUID:(id)arg1;
+ (id)noneContributorUUID;
+ (id)externalReferenceForContributorReference:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)contributorForReference:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)primaryUserContributorInDatabase:(id)arg1 error:(id *)arg2;
+ (id)primaryUserContributorInProfile:(id)arg1 error:(id *)arg2;
+ (id)contributorEntityForNoContributorWithProfile:(id)arg1 error:(id *)arg2;
+ (id)contributorEntityWithUUID:(id)arg1 profile:(id)arg2 includeDeleted:(_Bool)arg3 error:(id *)arg4;
+ (_Bool)deleteContributorWithUUID:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)_insertWithUUID:(id)arg1 appleID:(id)arg2 callerID:(id)arg3 deleted:(_Bool)arg4 modificationDate:(double)arg5 syncAnchor:(unsigned long long)arg6 syncProvenance:(long long)arg7 primaryUser:(_Bool)arg8 database:(id)arg9 error:(id *)arg10;
+ (id)insertPrimaryUserWithAppleID:(id)arg1 callerID:(id)arg2 database:(id)arg3 error:(id *)arg4;
+ (id)insertWithUUID:(id)arg1 appleID:(id)arg2 callerID:(id)arg3 primaryUser:(_Bool)arg4 syncProvenance:(long long)arg5 transaction:(id)arg6 error:(id *)arg7;
+ (id)insertWithUUID:(id)arg1 appleID:(id)arg2 callerID:(id)arg3 primaryUser:(_Bool)arg4 profile:(id)arg5 error:(id *)arg6;
+ (id)insertOrLookupContributorEntityForNoContributorWithTransaction:(id)arg1 error:(id *)arg2;
+ (long long)protectionClass;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)databaseTable;
- (_Bool)deletedInProfile:(id)arg1 error:(id *)arg2;
- (id)syncAnchorInProfile:(id)arg1 error:(id *)arg2;
- (id)modificationDateInProfile:(id)arg1 error:(id *)arg2;
- (_Bool)updateCallerID:(id)arg1 profile:(id)arg2 error:(id *)arg3;
- (id)callerIDInProfile:(id)arg1 error:(id *)arg2;
- (_Bool)updateAppleID:(id)arg1 profile:(id)arg2 error:(id *)arg3;
- (id)appleIDInProfile:(id)arg1 error:(id *)arg2;

@end

