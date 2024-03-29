//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTransitIncident-Protocol.h>
#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOPBTransitIncident, NSArray, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTransitIncident : NSObject <GEOTransitIncident, NSSecureCoding>
{
    GEOPBTransitIncident *_incident;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSArray *affectedEntities;
@property(readonly, nonatomic, getter=isBlockingIncident) _Bool blockingIncident;
@property(readonly, nonatomic) NSDate *lastUpdated;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) int iconType;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) NSString *messageForNonRoutable;
@property(readonly, nonatomic) NSString *messageForRouteStepping;
@property(readonly, nonatomic) NSString *messageForRoutePlanning;
@property(readonly, nonatomic) NSString *fullDescription;
@property(readonly, nonatomic) NSString *summary;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) unsigned long long muid;
@property(readonly, copy) NSString *debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIncident:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

