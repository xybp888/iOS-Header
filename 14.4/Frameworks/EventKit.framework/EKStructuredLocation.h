//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKObject.h>

#import <EventKit/NSCopying-Protocol.h>

@class CLLocation, EKPredictedLocationOfInterest, NSData, NSString;

@interface EKStructuredLocation : EKObject <NSCopying>
{
    _Bool _imprecise;
    EKPredictedLocationOfInterest *_predictedLOI;
}

+ (id)displayLabelForContact:(id)arg1 unlocalizedLabel:(id)arg2;
+ (id)locationWithGEOMapItem:(id)arg1;
+ (id)locationWithMapItem:(id)arg1;
+ (id)locationWithPlacemark:(id)arg1;
+ (id)_stringByStrippingControlCharactersFromString:(id)arg1;
+ (id)locationWithTitle:(id)arg1;
+ (id)knownSingleValueKeysForComparison;
+ (id)knownIdentityKeysForComparison;
+ (Class)frozenClass;
- (void).cxx_destruct;
@property(retain, nonatomic) EKPredictedLocationOfInterest *predictedLOI; // @synthesize predictedLOI=_predictedLOI;
@property(nonatomic, getter=isImprecise) _Bool imprecise; // @synthesize imprecise=_imprecise;
- (id)semanticIdentifier;
@property(copy, nonatomic) NSString *derivedFrom;
@property(readonly, nonatomic, getter=isPrediction) _Bool prediction;
- (void)updateFromMapItem:(id)arg1;
- (id)geoURLString;
- (id)calLocation;
@property(retain, nonatomic) NSString *routing;
- (id)description;
- (_Bool)isEqualToLocation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_reset;
@property(copy, nonatomic) NSData *mapKitHandle;
@property(copy, nonatomic) NSString *contactLabel;
@property(nonatomic) double radius;
- (void)setRadiusRaw:(id)arg1;
- (id)radiusRaw;
- (id)cacheKey;
@property(retain, nonatomic) CLLocation *geoLocation;
- (void)_clearGeoLocationCache;
- (void)setLongitude:(id)arg1;
- (id)longitude;
- (void)setLatitude:(id)arg1;
- (id)latitude;
- (void)setReferenceFrame:(id)arg1;
- (id)referenceFrame;
@property(retain, nonatomic) NSString *address;
@property(retain, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool hasKnownSpatialData;
@property(readonly, nonatomic) _Bool isStructured;

@end

