//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MRAVRoutingDiscoverySession : NSObject
{
    NSArray *_endpoints;
    NSArray *_outputDevices;
    _Bool _alwaysAllowUpdates;
    _Bool _populatesExternalDevice;
    NSMutableDictionary *_endpointsChangedCallbacks;
    NSMutableDictionary *_endpointsAddedCallbacks;
    NSMutableDictionary *_endpointsRemovedCallbacks;
    NSMutableDictionary *_endpointsModifiedCallbacks;
    NSMutableDictionary *_outputDevicesChangedCallbacks;
    NSMutableDictionary *_outputDevicesAddedCallbacks;
    NSMutableDictionary *_outputDevicesRemovedCallbacks;
    NSMutableDictionary *_outputDevicesModifiedCallbacks;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMapTable *_clientDiscoveryStates;
}

+ (id)sharedDiscoverySessionForClass:(Class)arg1 configuration:(id)arg2;
+ (id)discoverySessionWithConfiguration:(id)arg1;
+ (id)discoverySessionWithEndpointFeatures:(unsigned int)arg1;
+ (id)discoverySessionWithEndpointFeatures:(unsigned int)arg1 enableThrottling:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool populatesExternalDevice; // @synthesize populatesExternalDevice=_populatesExternalDevice;
@property(retain, nonatomic) NSMapTable *clientDiscoveryStates; // @synthesize clientDiscoveryStates=_clientDiscoveryStates;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSMutableDictionary *outputDevicesModifiedCallbacks; // @synthesize outputDevicesModifiedCallbacks=_outputDevicesModifiedCallbacks;
@property(retain, nonatomic) NSMutableDictionary *outputDevicesRemovedCallbacks; // @synthesize outputDevicesRemovedCallbacks=_outputDevicesRemovedCallbacks;
@property(retain, nonatomic) NSMutableDictionary *outputDevicesAddedCallbacks; // @synthesize outputDevicesAddedCallbacks=_outputDevicesAddedCallbacks;
@property(retain, nonatomic) NSMutableDictionary *outputDevicesChangedCallbacks; // @synthesize outputDevicesChangedCallbacks=_outputDevicesChangedCallbacks;
@property(retain, nonatomic) NSMutableDictionary *endpointsModifiedCallbacks; // @synthesize endpointsModifiedCallbacks=_endpointsModifiedCallbacks;
@property(retain, nonatomic) NSMutableDictionary *endpointsRemovedCallbacks; // @synthesize endpointsRemovedCallbacks=_endpointsRemovedCallbacks;
@property(retain, nonatomic) NSMutableDictionary *endpointsAddedCallbacks; // @synthesize endpointsAddedCallbacks=_endpointsAddedCallbacks;
@property(retain, nonatomic) NSMutableDictionary *endpointsChangedCallbacks; // @synthesize endpointsChangedCallbacks=_endpointsChangedCallbacks;
@property(nonatomic) _Bool alwaysAllowUpdates; // @synthesize alwaysAllowUpdates=_alwaysAllowUpdates;
- (void)logEndpointsChanged:(id)arg1 oldEndpoints:(id)arg2;
- (void)logOutputDevicesChanged:(id)arg1 oldOutputDevices:(id)arg2;
- (void)notifyEndpointsChanged:(id)arg1;
- (void)notifyOutputDevicesChanged:(id)arg1 forFeature:(unsigned int)arg2;
- (void)removeOutputDevicesModifiedCallback:(id)arg1;
- (id)addOutputDevicesModifiedCallback:(CDUnknownBlockType)arg1;
- (void)removeOutputDevicesRemovedCallback:(id)arg1;
- (id)addOutputDevicesRemovedCallback:(CDUnknownBlockType)arg1;
- (void)removeOutputDevicesAddedCallback:(id)arg1;
- (id)addOutputDevicesAddedCallback:(CDUnknownBlockType)arg1;
- (void)removeEndpointsModifiedCallback:(id)arg1;
- (id)addEndpointsModifiedCallback:(CDUnknownBlockType)arg1;
- (void)removeEndpointsRemovedCallback:(id)arg1;
- (id)addEndpointsRemovedCallback:(CDUnknownBlockType)arg1;
- (void)removeEndpointsAddedCallback:(id)arg1;
- (id)addEndpointsAddedCallback:(CDUnknownBlockType)arg1;
- (void)removeOutputDevicesChangedCallback:(id)arg1;
- (void)removeEndpointsChangedCallback:(id)arg1;
- (id)addOutputDevicesChangedCallback:(CDUnknownBlockType)arg1;
- (id)addEndpointsChangedCallback:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSArray *outputDevices;
@property(copy, nonatomic) NSArray *endpoints;
@property(nonatomic) unsigned int endpointFeatures; // @dynamic endpointFeatures;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithFeatures:(unsigned int)arg1;

// Remaining properties
@property(readonly, nonatomic) NSArray *availableEndpoints; // @dynamic availableEndpoints;
@property(readonly, nonatomic) NSArray *availableOutputDevices; // @dynamic availableOutputDevices;
@property(readonly, nonatomic) _Bool devicePresenceDetected; // @dynamic devicePresenceDetected;
@property(nonatomic) unsigned int discoveryMode; // @dynamic discoveryMode;
@property(copy, nonatomic) NSString *routingContextUID; // @dynamic routingContextUID;
@property(nonatomic) unsigned int targetAudioSessionID; // @dynamic targetAudioSessionID;

@end

