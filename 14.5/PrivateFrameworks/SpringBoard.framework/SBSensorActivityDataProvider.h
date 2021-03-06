//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFSensorActivityDataProvider-Protocol.h>

@class NSMutableArray, NSMutableSet, NSSet, NSString, SBSensorActivityAttribution, STMediaStatusDomain;

@interface SBSensorActivityDataProvider : NSObject <SBFSensorActivityDataProvider>
{
    NSSet *_activeSensorActivityAttributions;
    NSMutableArray *_recentSensorActivityAttributions;
    NSMutableArray *_recentAttributionExpirationTimers;
    STMediaStatusDomain *_mediaDomain;
    NSMutableSet *_observers;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSMutableSet *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) STMediaStatusDomain *mediaDomain; // @synthesize mediaDomain=_mediaDomain;
@property(readonly, copy, nonatomic) NSMutableArray *recentAttributionExpirationTimers; // @synthesize recentAttributionExpirationTimers=_recentAttributionExpirationTimers;
@property(readonly, copy, nonatomic) NSMutableArray *recentSensorActivityAttributions; // @synthesize recentSensorActivityAttributions=_recentSensorActivityAttributions;
@property(copy, nonatomic) NSSet *activeSensorActivityAttributions; // @synthesize activeSensorActivityAttributions=_activeSensorActivityAttributions;
- (void)_notifyObserversOfActivityChange;
- (void)_updateStateForActiveAttributions:(id)arg1;
- (void)_handleMediaDomainData:(id)arg1;
@property(readonly, copy, nonatomic) SBSensorActivityAttribution *mostRecentSensorActivityAttribution;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithSystemStatusServer:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

