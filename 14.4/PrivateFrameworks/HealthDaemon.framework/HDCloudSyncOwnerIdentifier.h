//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSString, NSUUID;

@interface HDCloudSyncOwnerIdentifier : NSObject <NSCopying>
{
    NSString *_deviceIdentifier;
    NSUUID *_databaseIdentifier;
    NSString *_ownerDifferentiator;
    NSString *_ownerIdentifierString;
}

+ (_Bool)_rollOwnerDifferentiatorForProfile:(id)arg1 reason:(id)arg2 error:(id *)arg3;
+ (_Bool)rollOwnerDifferentiatorAfterCloudSyncDisableForProfile:(id)arg1 error:(id *)arg2;
+ (_Bool)rollOwnerDifferentiatorForProfile:(id)arg1 reason:(id)arg2 error:(id *)arg3;
+ (_Bool)_canRollOwnerIdentifierForProfile:(id)arg1;
+ (id)_databaseUUIDForProfile:(id)arg1 error:(id *)arg2;
+ (id)ownerIdentifierForSyncContainer:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)deviceIDForContainer:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)unitTest_ownerIdentifierWithDatabaseIdentifer:(id)arg1 deviceIdentifier:(id)arg2 ownerDifferentiator:(id)arg3;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *cloudKitIdentifier;
@property(readonly, nonatomic) NSString *string;
- (id)initWithDatabaseIdentifer:(id)arg1 deviceIdentifier:(id)arg2 ownerDifferentiator:(id)arg3;

@end

