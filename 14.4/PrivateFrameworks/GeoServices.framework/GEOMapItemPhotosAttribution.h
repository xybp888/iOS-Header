//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapItemAttribution.h>

@class NSArray;

@interface GEOMapItemPhotosAttribution : GEOMapItemAttribution
{
}

@property(readonly, nonatomic) _Bool supportsReportingIssue;
@property(readonly, nonatomic) _Bool shouldSuppressPhotoAttribution;
@property(readonly, nonatomic) _Bool canShowPhotosLocally;
@property(readonly, nonatomic) _Bool canAddPhotosLocally;
- (id)urlsForPhotoWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *addPhotoURLs;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3;

@end

