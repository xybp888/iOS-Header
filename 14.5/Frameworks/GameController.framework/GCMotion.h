//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameController/NSSecureCoding-Protocol.h>
#import <GameController/_GCMotionEventSink-Protocol.h>

@class GCController, NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

@interface GCMotion : NSObject <_GCMotionEventSink, NSSecureCoding>
{
    id _motionEventObservation;
    CDStruct_31142d93 _gravity;
    CDStruct_31142d93 _userAcceleration;
    CDStruct_31142d93 _acceleration;
    struct GCQuaternion _attitude;
    struct GCQuaternion _prevAttitude;
    CDStruct_27cd59c8 _eulerAngles;
    CDStruct_27cd59c8 _prevEulerAngles;
    CDStruct_31142d93 _rotationRate;
    float _tip;
    float _tilt;
    _Bool _motionLite;
    _Bool _compassEnabled;
    _Bool _hasAttitude;
    _Bool _hasRotationRate;
    CDUnknownBlockType _valueChangedHandler;
    _Bool _sensorsActive;
    GCController *_controller;
    id <NSObject><NSCopying><NSSecureCoding> _identifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)identifier;
@property(readonly, nonatomic) __weak GCController *controller; // @synthesize controller=_controller;
- (void)_pauseMotionUpdates:(_Bool)arg1;
- (void)setStateFromMotion:(id)arg1;
- (void)setRotationRate:(CDStruct_39925896)arg1;
- (void)setAttitude:(struct GCQuaternion)arg1;
- (void)setAcceleration:(CDStruct_39925896)arg1;
- (void)setUserAcceleration:(CDStruct_39925896)arg1;
- (void)setGravity:(CDStruct_39925896)arg1;
- (_Bool)_isUpdatingDeviceMotion;
- (void)_stopDeviceMotionUpdates;
- (void)_startDeviceMotionUpdates;
- (void)_setRotationRate:(CDStruct_39925896)arg1;
- (void)_setAttitude:(struct GCQuaternion)arg1;
- (void)_setAcceleration:(CDStruct_39925896)arg1;
- (void)_setUserAcceleration:(CDStruct_39925896)arg1;
- (void)_setGravity:(CDStruct_39925896)arg1;
- (_Bool)isEmulatedMicroGamepad;
@property(copy, nonatomic) CDUnknownBlockType valueChangedHandler;
- (float)_tilt;
- (float)_tip;
@property(readonly, nonatomic) CDStruct_39925896 rotationRate; // @synthesize rotationRate=_rotationRate;
@property(readonly, nonatomic) struct GCQuaternion attitude; // @synthesize attitude=_attitude;
@property(readonly, nonatomic) _Bool hasAttitudeAndRotationRate;
- (void)_setHasRotationRate:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hasRotationRate;
- (void)_setHasAttitude:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hasAttitude;
- (void)_setCompassEnabled:(_Bool)arg1;
@property(readonly, nonatomic) CDStruct_39925896 acceleration;
@property(readonly, nonatomic) CDStruct_39925896 userAcceleration; // @synthesize userAcceleration=_userAcceleration;
@property(readonly, nonatomic) CDStruct_39925896 gravity; // @synthesize gravity=_gravity;
@property(readonly, nonatomic) _Bool hasGravityAndUserAcceleration;
- (void)_setMotionLite:(_Bool)arg1;
- (void)setController:(id)arg1;
@property(nonatomic) _Bool sensorsActive; // @synthesize sensorsActive=_sensorsActive;
@property(readonly, nonatomic) _Bool sensorsRequireManualActivation;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithController:(id)arg1;
- (void)setMotionEventSource:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

