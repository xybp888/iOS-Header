//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CPAnalytics/CPAnalyticsDestination-Protocol.h>

@class NSMapTable, NSString;

@interface CPAnalyticsMetricsDestination : NSObject <CPAnalyticsDestination>
{
    NSMapTable *_eventRoutes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMapTable *eventRoutes; // @synthesize eventRoutes=_eventRoutes;
- (void)_sendCoreAnalyticsEvent:(id)arg1 eventPayload:(id)arg2;
- (id)_buildCustomCoreAnalyticsPayloadForEvent:(id)arg1 withPropertiesToInclude:(id)arg2;
- (void)_sendCoreAnalyticsEventWithCustomConfig:(id)arg1 eventRoute:(id)arg2;
- (void)processEvent:(id)arg1;
- (id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

