//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFMeasurementUnit : NSObject
{
}

+ (id)unitFromString:(id)arg1;
+ (id)unitFromString:(id)arg1 unitType:(id)arg2 caseSensitive:(_Bool)arg3;
+ (id)defaultUnitForUnitType:(id)arg1;
+ (_Bool)usesMetricSystemForUnitType:(id)arg1;
+ (id)availableUnitsForUnitType:(id)arg1 cacheResult:(_Bool)arg2;
+ (id)availableUnitsForUnitType:(id)arg1;
+ (id)unitTypeMap;
+ (id)unitTypeForUnitClass:(Class)arg1;
+ (id)localizedStringForUnitType:(id)arg1;
+ (Class)unitClassForUnitType:(id)arg1;
+ (id)availableUnitTypes;

@end

