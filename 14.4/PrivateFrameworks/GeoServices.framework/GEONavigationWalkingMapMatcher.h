//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEONavigationMapMatcher.h>

@interface GEONavigationWalkingMapMatcher : GEONavigationMapMatcher
{
    unsigned long long _numProgressionsOffRoute;
}

- (id)_routeMatcherForRoute:(id)arg1;
- (int)transportType;
- (id)matchLocation:(id)arg1 transportType:(int)arg2;

@end

