//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/ISSettings.h>

__attribute__((visibility("hidden")))
@interface ISPerformanceDiagnosticsSettings : ISSettings
{
    _Bool _shouldTracePerformance;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) _Bool shouldTracePerformance; // @synthesize shouldTracePerformance=_shouldTracePerformance;
- (void)setDefaultValues;

@end

