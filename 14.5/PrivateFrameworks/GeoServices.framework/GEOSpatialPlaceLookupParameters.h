//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOMapRegion, GEOPOICategoryFilter, NSArray;

@interface GEOSpatialPlaceLookupParameters : NSObject
{
    CDStruct_2c43369c _coordinate;
    double _radius;
    NSArray *_categories;
    int _maxResultCount;
    GEOMapRegion *_mapRegion;
    GEOPOICategoryFilter *_poiCategoryFilter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GEOPOICategoryFilter *poiCategoryFilter; // @synthesize poiCategoryFilter=_poiCategoryFilter;
@property(readonly, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(readonly, nonatomic) int maxResultCount; // @synthesize maxResultCount=_maxResultCount;
@property(readonly, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
- (id)initWithMapRegion:(id)arg1 poiCategoryFilter:(id)arg2;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 poiCategoryFilter:(id)arg3;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 categories:(id)arg3 maxResultCount:(int)arg4;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 categories:(id)arg3;
- (id)init;

@end

