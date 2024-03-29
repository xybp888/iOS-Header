//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AuxiliaryTask-Protocol.h"
#import "RoutePlanningSessionObserver-Protocol.h"
#import "VGVirtualGarageObserver-Protocol.h"

@class NSString, RoutePlanningSession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VehicleMonitoringTask : NSObject <VGVirtualGarageObserver, RoutePlanningSessionObserver, AuxiliaryTask>
{
    _Bool _isNavigating;
    _Bool _hasReportedBatteryState;
    _Bool _hasReportedRoutePlanningSession;
    NSObject<OS_dispatch_queue> *_queue;
    RoutePlanningSession *_routePlanningSession;
}

+ (long long)creationPreference;
- (void).cxx_destruct;
@property(retain, nonatomic) RoutePlanningSession *routePlanningSession; // @synthesize routePlanningSession=_routePlanningSession;
- (void)_checkBatteryStateWithGarage:(id)arg1;
- (void)_syncSelectedVehicleStateWithGarage:(id)arg1;
- (void)virtualGarageDidUpdate:(id)arg1;
- (void)_loadGarageWithCompletion:(CDUnknownBlockType)arg1;
- (void)routePlanningSession:(id)arg1 didUpdateRouteCollectionResult:(id)arg2 forTransportType:(long long)arg3;
- (void)routePlanningSession:(id)arg1 didReceiveUpdates:(id)arg2 forRoutesResult:(id)arg3;
- (void)routePlanningSession:(id)arg1 didFinishResolvingWaypointSet:(id)arg2;
- (void)routePlanningSession:(id)arg1 didChangeCurrentTransportType:(long long)arg2;
- (void)mapsSession:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)platformController:(id)arg1 didChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;
- (void)platformController:(id)arg1 willChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

