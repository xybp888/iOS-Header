//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSArray;

@interface GEORouteRestrictionZoneInfo : NSObject <NSSecureCoding>
{
    NSArray *_zoneIDs;
    int _restrictionZoneImpact;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) int restrictionZoneImpact; // @synthesize restrictionZoneImpact=_restrictionZoneImpact;
@property(readonly, nonatomic) NSArray *zoneIDs; // @synthesize zoneIDs=_zoneIDs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeoRoute:(id)arg1;
- (id)initWithGeoWaypointRoute:(id)arg1;
- (id)init;

@end

