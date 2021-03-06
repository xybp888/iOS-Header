//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class BSAnimationSettings, NSMutableArray, NSMutableDictionary, NSSet, NSString, SBWorkspaceTransitionRequest;

@interface SBWorkspaceTransitionContext : NSObject <BSDescriptionProviding>
{
    SBWorkspaceTransitionRequest *_request;
    NSMutableDictionary *_entities;
    NSMutableDictionary *_previousEntities;
    _Bool _animationDisabled;
    BSAnimationSettings *_animationSettings;
    NSMutableArray *_finalizeBlocks;
    _Bool _finalized;
}

+ (id)context;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isFinalized) _Bool finalized; // @synthesize finalized=_finalized;
@property(retain, nonatomic) BSAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
@property(nonatomic) _Bool animationDisabled; // @synthesize animationDisabled=_animationDisabled;
@property(nonatomic) __weak SBWorkspaceTransitionRequest *request; // @synthesize request=_request;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)compactDescriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)finalize;
- (void)addFinalizeBlock:(CDUnknownBlockType)arg1;
- (id)previousEntityForIdentifier:(id)arg1;
- (id)previousEntityForKey:(id)arg1;
- (void)setPreviousEntity:(id)arg1 forKey:(id)arg2;
@property(readonly, copy, nonatomic) NSSet *previousEntities;
- (id)entityForIdentifier:(id)arg1;
- (id)entityForKey:(id)arg1;
- (void)setEntity:(id)arg1 forKey:(id)arg2;
@property(readonly, copy, nonatomic) NSSet *entities;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

