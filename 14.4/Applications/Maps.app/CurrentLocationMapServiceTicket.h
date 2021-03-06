//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GEOMapServiceCancellableTicket-Protocol.h"
#import "GEOMapServiceCorrectableTicket-Protocol.h"

@class CLLocation, MKLocationManager, NSString;
@protocol GEOMapServiceCorrectableTicket><GEOMapServiceCancellableTicket, MKLocationManagerOperation;

__attribute__((visibility("hidden")))
@interface CurrentLocationMapServiceTicket : NSObject <GEOMapServiceCorrectableTicket, GEOMapServiceCancellableTicket>
{
    _Bool _cancelled;
    MKLocationManager *_locationManager;
    id <MKLocationManagerOperation> _locationFixOperation;
    id <GEOMapServiceCorrectableTicket><GEOMapServiceCancellableTicket> _revGeoTicket;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <GEOMapServiceCorrectableTicket><GEOMapServiceCancellableTicket> revGeoTicket; // @synthesize revGeoTicket=_revGeoTicket;
@property(retain, nonatomic) id <MKLocationManagerOperation> locationFixOperation; // @synthesize locationFixOperation=_locationFixOperation;
@property(readonly, nonatomic) MKLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic) CLLocation *currentLocation;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)cancel;
- (id)_revGeoTicketForCurrentLocation:(id)arg1 traits:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 networkActivityHandler:(CDUnknownBlockType)arg4;
- (void)submitWithTraits:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 networkActivityHandler:(CDUnknownBlockType)arg3;
- (id)initWithLocationManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

