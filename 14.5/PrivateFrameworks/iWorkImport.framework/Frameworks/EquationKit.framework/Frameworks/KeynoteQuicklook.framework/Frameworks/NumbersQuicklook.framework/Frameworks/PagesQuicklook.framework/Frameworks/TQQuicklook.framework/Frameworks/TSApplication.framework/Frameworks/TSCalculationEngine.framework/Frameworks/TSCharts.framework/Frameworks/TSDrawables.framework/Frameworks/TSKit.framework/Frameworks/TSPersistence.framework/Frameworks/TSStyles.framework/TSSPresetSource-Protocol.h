//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSSet, NSString, TSSTheme;

@protocol TSSPresetSource
+ (NSSet *)presetKinds;
+ (void)bootstrapPresetsOfKind:(NSString *)arg1 inTheme:(TSSTheme *)arg2 alternate:(unsigned long long)arg3;
@end

