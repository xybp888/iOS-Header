//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, RTLearnedPlaceTypeInferencePlaceStats;

@interface RTPlaceStatsAndType : NSObject
{
    RTLearnedPlaceTypeInferencePlaceStats *_placeStats;
    unsigned long long _type;
    NSUUID *_placeIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *placeIdentifier; // @synthesize placeIdentifier=_placeIdentifier;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) RTLearnedPlaceTypeInferencePlaceStats *placeStats; // @synthesize placeStats=_placeStats;
- (id)initWithPlaceStats:(id)arg1 type:(unsigned long long)arg2 placeIdentifier:(id)arg3;

@end

