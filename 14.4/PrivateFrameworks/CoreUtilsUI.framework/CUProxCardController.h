//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtilsUI/CUActivatable-Protocol.h>
#import <CoreUtilsUI/CUUIEnvironmentable-Protocol.h>

@class CUNavigationController, CUUIEnvironment, UIWindow;
@protocol OS_dispatch_queue;

@interface CUProxCardController : NSObject <CUActivatable, CUUIEnvironmentable>
{
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSObject<OS_dispatch_queue> *_uiQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    CUUIEnvironment *_environment;
    CUNavigationController *_navigationController;
    UIWindow *_window;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) CUNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) CUUIEnvironment *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

