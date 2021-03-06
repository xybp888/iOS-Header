//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, RBAssertionCollection, RBAttributeContext, RBProcessIndex, RBProcessMap, RBProcessStateChangeSet, RBSystemState;
@protocol RBBundlePropertiesManaging, RBDomainAttributeManaging, RBEntitlementManaging;

@interface RBAssertionResolutionContext : NSObject
{
    NSMutableSet *_assertions;
    NSMutableSet *_touchedAssertions;
    NSMutableSet *_lostStartTimeDefining;
    NSMutableSet *_gainedStartTimeDefining;
    NSMutableSet *_targetsPendingResolution;
    RBProcessMap *_resolvedState;
    RBProcessMap *_originatorInheritances;
    RBAttributeContext *_attributeContext;
    RBProcessStateChangeSet *_changeSet;
    RBAssertionCollection *_assertionCollection;
    RBProcessIndex *_processIndex;
    RBProcessMap *_stateMap;
    id <RBDomainAttributeManaging> _domainAttributeManager;
    id <RBBundlePropertiesManaging> _bundlePropertiesManager;
    id <RBEntitlementManaging> _entitlementManager;
    RBSystemState *_systemState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *touchedAssertions; // @synthesize touchedAssertions=_touchedAssertions;
@property(readonly, nonatomic) RBSystemState *systemState; // @synthesize systemState=_systemState;
@property(readonly, nonatomic) RBProcessStateChangeSet *changeSet; // @synthesize changeSet=_changeSet;
@property(readonly, nonatomic) NSSet *gainedStartTimeDefining; // @synthesize gainedStartTimeDefining=_gainedStartTimeDefining;
@property(readonly, nonatomic) NSSet *lostStartTimeDefining; // @synthesize lostStartTimeDefining=_lostStartTimeDefining;
- (void)_resolveSystemState;
- (void)_finalizeStateChangeSet;
- (void)_resolveProcessStateForTarget:(id)arg1 ofType:(unsigned long long)arg2 viaAssertion:(id)arg3;
- (void)_suspendOrResumeAssertionsForTarget:(id)arg1 oldState:(id)arg2 newState:(id)arg3;
- (id)_latestStateForIdentity:(id)arg1;
- (id)_originatorInheritancesForAssertion:(id)arg1;
- (id)_inheritancesForOriginator:(id)arg1;
- (void)_updateStatesForAssertion:(id)arg1;
- (void)_assertionGraphFromAssertion:(id)arg1 graph:(id)arg2;
- (id)_assertionGraphFromAssertion:(id)arg1;

@end

