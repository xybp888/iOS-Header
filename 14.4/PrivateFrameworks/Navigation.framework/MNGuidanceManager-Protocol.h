//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class GEOComposedRoute, GEOComposedWaypoint, MNLocation;

@protocol MNGuidanceManager <NSObject>
- (void)stop;
- (void)updateDestination:(GEOComposedWaypoint *)arg1;
- (void)updateForReroute:(GEOComposedRoute *)arg1;
- (_Bool)repeatLastGuidanceAnnouncement:(MNLocation *)arg1;
- (double)timeUntilNextAnnouncement;
- (double)timeSinceLastAnnouncement;
- (void)updateGuidanceForLocation:(MNLocation *)arg1 navigatorState:(int)arg2;
@end

