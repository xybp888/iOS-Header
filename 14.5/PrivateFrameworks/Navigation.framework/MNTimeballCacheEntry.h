//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNJSONOutput-Protocol.h>

@class MNPlannedDestination, MNRouteUpdate, NSDate, NSString;

@interface MNTimeballCacheEntry : NSObject <MNJSONOutput>
{
    MNRouteUpdate *_routeUpdate;
    MNPlannedDestination *_destination;
    NSDate *_lastUpdate;
    NSDate *_nextUpdate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *nextUpdate; // @synthesize nextUpdate=_nextUpdate;
@property(retain, nonatomic) NSDate *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(retain, nonatomic) MNPlannedDestination *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) MNRouteUpdate *routeUpdate; // @synthesize routeUpdate=_routeUpdate;
@property(readonly, copy) NSString *description;
- (id)jsonDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

