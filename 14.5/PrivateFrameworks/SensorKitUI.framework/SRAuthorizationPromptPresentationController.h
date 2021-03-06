//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SensorKitUI/SRRemoteAuthorizationPromptViewControllerDelegate-Protocol.h>

@class NSError, NSString, UIViewController;
@protocol SRRemoteAuthorizationPromptViewController;

@interface SRAuthorizationPromptPresentationController : NSObject <SRRemoteAuthorizationPromptViewControllerDelegate>
{
    _Bool _presenting;
    _Bool _hostNavigationBarHidden;
    UIViewController<SRRemoteAuthorizationPromptViewController> *_viewController;
    CDUnknownBlockType _completionHandler;
    NSError *_error;
    long long _reason;
}

+ (id)sharedInstance;
+ (void)initialize;
@property(nonatomic) long long reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool hostNavigationBarHidden; // @synthesize hostNavigationBarHidden=_hostNavigationBarHidden;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) UIViewController<SRRemoteAuthorizationPromptViewController> *viewController; // @synthesize viewController=_viewController;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (id)presentingViewControllerFromRoot:(id)arg1;
- (id)navigationControllerFromRoot:(id)arg1;
- (void)completePromptWithError:(id)arg1;
- (void)viewControllerCleanUp;
- (void)authorizationRequestDidDisappear;
- (void)authorizationRequestWillDisappear;
- (_Bool)isViewControllerPresentedModally;
- (void)authorizationRequestFailedWithError:(id)arg1;
- (void)authorizationRequestCompleted;
- (void)authorizationUIReadyForDisplayModally:(_Bool)arg1;
- (id)presentationAnchor;
- (void)presentFirstRunOnboardingViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentResearchDataViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentStudyAuthorizationPromptViewController:(id)arg1 bundlePath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentAppsAndStudiesPromptViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentPromptViewController:(id)arg1 withDesiredServices:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)presentAnyViewController:(id)arg1 reason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

