//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCloudSyncZone, NSArray, NSDictionary, NSSet;

@interface HDCloudSyncCloudState : NSObject <NSCopying>
{
    int _minimumSupportedProtocolVersion;
    NSDictionary *_zonesByIdentifier;
    NSArray *_targets;
    HDCloudSyncZone *_primaryPushZone;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int minimumSupportedProtocolVersion; // @synthesize minimumSupportedProtocolVersion=_minimumSupportedProtocolVersion;
@property(readonly, nonatomic) HDCloudSyncZone *primaryPushZone; // @synthesize primaryPushZone=_primaryPushZone;
@property(readonly, copy, nonatomic) NSArray *targets; // @synthesize targets=_targets;
@property(readonly, copy, nonatomic) NSDictionary *zonesByIdentifier; // @synthesize zonesByIdentifier=_zonesByIdentifier;
- (id)zonesForContainerID:(id)arg1;
- (id)zoneForRecordID:(id)arg1 containerIdentifier:(id)arg2;
- (id)unifiedSyncZoneForContainerID:(id)arg1;
- (id)masterZoneForContainerID:(id)arg1;
@property(readonly, nonatomic) NSSet *pullZones;
@property(readonly, nonatomic) NSSet *seizedZones;
- (id)_storeDescriptionForTarget:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)detailedDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)cloudStateByReplacingTargets:(id)arg1;
- (id)cloudStateWithTargets:(id)arg1;
- (id)cloudStateByRemovingZones:(id)arg1;
- (id)cloudStateByAddingZones:(id)arg1;
- (id)cloudStateByAddingZone:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *pullTargets;
@property(readonly, copy, nonatomic) NSArray *pushTargets;
- (id)initWithZonesByIdentifier:(id)arg1 targets:(id)arg2;
- (id)initWithZonesByIdentifier:(id)arg1;
- (id)initWithZones:(id)arg1 targets:(id)arg2;
- (id)initWithZones:(id)arg1;
- (id)init;

@end

