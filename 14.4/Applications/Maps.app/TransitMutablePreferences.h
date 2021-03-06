//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TransitPreferences.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface TransitMutablePreferences : TransitPreferences
{
}

- (void)setMode:(long long)arg1 disabled:(_Bool)arg2;
- (void)toggleModeEnabled:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) long long disabledModes; // @dynamic disabledModes;
@property(nonatomic) _Bool showICFares; // @dynamic showICFares;
@property(nonatomic) int sortOption; // @dynamic sortOption;
@property(retain, nonatomic) NSNumber *surchargeOption; // @dynamic surchargeOption;

@end

