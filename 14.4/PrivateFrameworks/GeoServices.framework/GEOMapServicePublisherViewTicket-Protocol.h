//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapServiceCancellableTicket-Protocol.h>

@class GEOMapServiceTraits;

@protocol GEOMapServicePublisherViewTicket <GEOMapServiceCancellableTicket>
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)cancel;
- (void)submitWithHandler:(void (^)(GEOPublisherViewResult *, NSArray *, GEOPublisherResult *, NSError *))arg1 networkActivity:(void (^)(_Bool))arg2;
@end

