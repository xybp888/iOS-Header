//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DirectionsStepsListDelegate-Protocol.h"

@class NSArray, NSURL, TransitDirectionsClusteredVehiclesStepView, TransitDirectionsIncidentCell, TransitDirectionsListItem, TransitDirectionsStepsListDataSource;

@protocol TransitDirectionsStepsListDelegate <DirectionsStepsListDelegate>
- (void)transitDirectionsStepsListDataSource:(TransitDirectionsStepsListDataSource *)arg1 didTapIncidentsCell:(TransitDirectionsIncidentCell *)arg2 withIncidents:(NSArray *)arg3;
- (void)transitDirectionsStepsListDataSource:(TransitDirectionsStepsListDataSource *)arg1 didTapClusteredVehiclesCell:(TransitDirectionsClusteredVehiclesStepView *)arg2;

@optional
- (void)transitDirectionsStepsListDataSource:(TransitDirectionsStepsListDataSource *)arg1 didTapGetTicketsWithURL:(NSURL *)arg2;
- (void)transitDirectionsStepsListDataSource:(TransitDirectionsStepsListDataSource *)arg1 didTapGetTicketsForSegments:(NSArray *)arg2;
- (void)transitDirectionsStepsListDataSource:(TransitDirectionsStepsListDataSource *)arg1 didTapRowForItem:(TransitDirectionsListItem *)arg2;
- (void)transitDirectionsStepsListDataSource:(TransitDirectionsStepsListDataSource *)arg1 didSelectTrip:(TransitDirectionsListItem *)arg2;
@end

