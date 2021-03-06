//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INGetCarPowerLevelStatusIntentResponseObserver-Protocol.h>
#import <Intents/INGetRideStatusIntentResponseObserver-Protocol.h>

@class NSMapTable, NSString;
@protocol INIntentResponseObserver;

__attribute__((visibility("hidden")))
@interface INExtensionContextIntentResponseObserver : NSObject <INGetRideStatusIntentResponseObserver, INGetCarPowerLevelStatusIntentResponseObserver>
{
    id <INIntentResponseObserver> _remoteObserver;
    NSMapTable *_remoteObservers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMapTable *remoteObservers; // @synthesize remoteObservers=_remoteObservers;
- (void)_intentResponseDidUpdate:(id)arg1;
- (void)getRideStatusResponseDidUpdate:(id)arg1;
- (void)getCarPowerLevelStatusResponseDidUpdate:(id)arg1;
- (void)setObserver:(id)arg1 forConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

