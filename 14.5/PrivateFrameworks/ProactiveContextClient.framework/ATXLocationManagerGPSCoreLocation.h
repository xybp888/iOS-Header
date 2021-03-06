//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveContextClient/ATXLocationManagerGPS-Protocol.h>
#import <ProactiveContextClient/CLLocationManagerDelegate-Protocol.h>

@class CLLocation, CLLocationManager, CLRegion, NSCondition, NSMutableSet, NSString;
@protocol ATXLocationManagerGPSDelegate, OS_dispatch_queue;

@interface ATXLocationManagerGPSCoreLocation : NSObject <CLLocationManagerDelegate, ATXLocationManagerGPS>
{
    CLLocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_clQueue;
    NSCondition *_updateCondition;
    _Bool _locationEnabled;
    _Bool _preciseLocationEnabled;
    _Bool _updatePending;
    NSMutableSet *_locationBlocksToInvoke;
    NSCondition *_requestStateCondition;
    CLRegion *_regionRequested;
    long long _state;
    id <ATXLocationManagerGPSDelegate> _delegate;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak id <ATXLocationManagerGPSDelegate> delegate; // @synthesize delegate=_delegate;
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)_updateConditionAndInvokeLocationBlocks:(id)arg1 error:(id)arg2;
- (void)stopMonitoringRegionWithIdentifier:(id)arg1;
- (id)_existingRegionWithIdentifierOnCLQueue:(id)arg1;
- (void)_requestStateIfNeededForRegion:(id)arg1;
- (long long)stateForRegion:(id)arg1 withTimeout:(double)arg2;
- (void)beginMonitoringRegion:(id)arg1;
- (void)updateLocationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)updateLocationWithTimeout:(double)arg1 requestPreciseLocation:(_Bool)arg2;
- (void)_startUpdateIfNeededWithPreciseLocation:(_Bool)arg1;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) _Bool preciseLocationEnabled;
@property(readonly, nonatomic) _Bool locationEnabled;
- (void)dealloc;
- (id)init;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

