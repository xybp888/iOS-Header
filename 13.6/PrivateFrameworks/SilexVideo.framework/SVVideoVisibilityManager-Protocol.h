//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/SVVisibilityReporting-Protocol.h>

@protocol SVVideo;

@protocol SVVideoVisibilityManager <SVVisibilityReporting>
- (void)stopMonitoringVideo:(id <SVVideo>)arg1;
- (void)startMonitoringVideo:(id <SVVideo>)arg1;
@end

