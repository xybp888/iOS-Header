//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/NSCopying-Protocol.h>
#import <RunningBoardServices/RBSXPCSecureCoding-Protocol.h>

@class NSMutableDictionary, NSSet, NSString, RBSProcessHandle;
@protocol OS_xpc_object;

@interface RBSProcessState : NSObject <RBSXPCSecureCoding, NSCopying>
{
    NSObject<OS_xpc_object> *_codedState;
    unsigned long long _codedValues;
    NSMutableDictionary *_codedStateCache;
    struct os_unfair_lock_s _lock;
    unsigned char _taskState;
    unsigned char _debugState;
    unsigned char _terminationResistance;
    _Bool _preventedFromLaunching;
    RBSProcessHandle *_process;
    NSSet *_endowmentNamespaces;
    NSSet *_tags;
    NSSet *_legacyAssertions;
    NSSet *_primitiveAssertions;
}

+ (_Bool)supportsRBSXPCSecureCoding;
+ (void)setActiveStateDescriptor:(id)arg1;
+ (id)stateWithProcess:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isPreventedFromLaunching) _Bool preventedFromLaunching; // @synthesize preventedFromLaunching=_preventedFromLaunching;
@property(readonly, copy, nonatomic) NSObject<OS_xpc_object> *codedState; // @synthesize codedState=_codedState;
@property(nonatomic) unsigned char terminationResistance; // @synthesize terminationResistance=_terminationResistance;
@property(copy, nonatomic) NSSet *primitiveAssertions; // @synthesize primitiveAssertions=_primitiveAssertions;
@property(copy, nonatomic) NSSet *legacyAssertions; // @synthesize legacyAssertions=_legacyAssertions;
@property(copy, nonatomic) NSSet *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSSet *endowmentNamespaces; // @synthesize endowmentNamespaces=_endowmentNamespaces;
@property(nonatomic) unsigned char debugState; // @synthesize debugState=_debugState;
@property(nonatomic) unsigned char taskState; // @synthesize taskState=_taskState;
@property(readonly, nonatomic) RBSProcessHandle *process; // @synthesize process=_process;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithPreviousState:(id)arg1;
- (_Bool)isDifferentFromState:(id)arg1 significantly:(out _Bool *)arg2;
@property(readonly, copy, nonatomic) NSSet *assertions;
@property(readonly, nonatomic, getter=isEmptyState) _Bool emptyState;
@property(readonly, nonatomic, getter=isDebugging) _Bool debugging;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

