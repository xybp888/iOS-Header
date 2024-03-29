//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/_HDDemoDataModuleDelegate-Protocol.h>

@class HKQuantity, NSArray, NSOperationQueue, NSString;

@interface _HDDataFaker : NSObject <_HDDemoDataModuleDelegate>
{
    long long _activityType;
    HKQuantity *_speed;
    CDUnknownBlockType _objectHandler;
    NSOperationQueue *_operationQueue;
    NSArray *_modules;
}

+ (_Bool)_isSupportedActivityType:(long long)arg1;
- (void).cxx_destruct;
- (void)demoDataModule:(id)arg1 didProduceDataObject:(id)arg2;
@property(readonly, nonatomic) HKQuantity *speed;
@property(readonly, nonatomic) long long activityType;
- (id)_generateSamplesForPeriodIncludeLessFrequentSamples:(_Bool)arg1;
- (void)generateDataForMinutes:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stop;
- (void)start;
- (id)initWithActivityType:(long long)arg1 speed:(id)arg2 objectHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

