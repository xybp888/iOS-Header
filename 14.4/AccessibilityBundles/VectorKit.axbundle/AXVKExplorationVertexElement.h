//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AXVKExplorationGraphElement.h"

@class NSMutableArray, VKMapView;

@interface AXVKExplorationVertexElement : AXVKExplorationGraphElement
{
    _Bool _isComputed;
    _Bool _isCurrent;
    _Bool _isDeadEnd;
    VKMapView *_mapView;
    NSMutableArray *_edges;
    NSMutableArray *_neighbors;
    NSMutableArray *_roads;
    CDStruct_2c43369c _coordinates;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *roads; // @synthesize roads=_roads;
@property(retain, nonatomic) NSMutableArray *neighbors; // @synthesize neighbors=_neighbors;
@property(retain, nonatomic) NSMutableArray *edges; // @synthesize edges=_edges;
@property(nonatomic) _Bool isDeadEnd; // @synthesize isDeadEnd=_isDeadEnd;
@property(nonatomic) _Bool isCurrent; // @synthesize isCurrent=_isCurrent;
@property(nonatomic) _Bool isComputed; // @synthesize isComputed=_isComputed;
@property(nonatomic) __weak VKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) CDStruct_2c43369c coordinates; // @synthesize coordinates=_coordinates;
- (id)description;
- (id)accessibilityLabel;
- (struct CGPoint)getScreenPoint;
- (id)connectingRoadWith:(id)arg1;
- (id)initWithCoordinates:(CDStruct_2c43369c)arg1 betweenRoads:(id)arg2;

@end

