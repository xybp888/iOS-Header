//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBUIAnimationControllerTransitionContextProvider-Protocol.h>

@class NSSet, NSString, SBApplicationSceneEntity;

@interface SBUIAnimationControllerActivatingAndDeactivatingAppTransitionContextProvider : NSObject <SBUIAnimationControllerTransitionContextProvider>
{
    SBApplicationSceneEntity *_toAppSceneEntity;
    SBApplicationSceneEntity *_fromAppSceneEntity;
    SBApplicationSceneEntity *_toApplicationSceneEntity;
    SBApplicationSceneEntity *_fromApplicationSceneEntity;
}

+ (id)transitionContextProviderWithToApplicationSceneEntity:(id)arg1 fromApplicationSceneEntity:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) SBApplicationSceneEntity *fromApplicationSceneEntity; // @synthesize fromApplicationSceneEntity=_fromApplicationSceneEntity;
@property(readonly, nonatomic) SBApplicationSceneEntity *toApplicationSceneEntity; // @synthesize toApplicationSceneEntity=_toApplicationSceneEntity;
@property(retain, nonatomic) SBApplicationSceneEntity *deactivatingAppSceneEntity; // @synthesize deactivatingAppSceneEntity=_fromAppSceneEntity;
@property(retain, nonatomic) SBApplicationSceneEntity *activatingAppSceneEntity; // @synthesize activatingAppSceneEntity=_toAppSceneEntity;
@property(readonly, copy, nonatomic) NSSet *fromApplicationSceneEntities;
@property(readonly, copy, nonatomic) NSSet *toApplicationSceneEntities;
- (id)initWithToApplicationSceneEntity:(id)arg1 fromApplicationSceneEntity:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

