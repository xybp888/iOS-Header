//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AFCoreAnalyticsLoggingService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedLoggingService;
- (void).cxx_destruct;
- (void)logToCoreAnalyticsCrossDeviceRequestEvent:(id)arg1;
- (id)_init;
- (id)init;

@end

