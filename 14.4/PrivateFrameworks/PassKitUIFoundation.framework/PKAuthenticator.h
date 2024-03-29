//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PKAuthenticatorDelegate;

@interface PKAuthenticator : NSObject
{
    unsigned long long _authenticationIdentifier;
    struct os_unfair_lock_s _lock;
    _Bool _invalidated;
    id <PKAuthenticatorDelegate> _delegate;
}

+ (id)viewServiceBundleID;
+ (unsigned long long)cachedStateForPolicy:(long long)arg1;
+ (unsigned long long)_currentStateForMechanisms:(id)arg1;
+ (_Bool)canPerformPSD2StyleBuyForAccessControlRef:(struct __SecAccessControl *)arg1;
+ (unsigned long long)currentStateForAccessControl:(struct __SecAccessControl *)arg1;
+ (unsigned long long)currentStateForPolicy:(long long)arg1;
+ (void)removeUserIntentAvailable;
+ (long long)userIntentStyle;
+ (_Bool)_isAccessibilityUserIntentEnabled;
+ (_Bool)isUserIntentAvailableWithStyle:(long long)arg1;
+ (void)resetSharedRootContextWithCompletion:(CDUnknownBlockType)arg1;
+ (void)preheatAuthenticator;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PKAuthenticatorDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_delegateSupportsPassphrasePresentation;
- (_Bool)_delegateSupportsPasscodePresentation;
@property(readonly, nonatomic) _Bool passcodeWasPresented;
@property(readonly, nonatomic) _Bool passphraseActive;
@property(readonly, nonatomic) _Bool passcodeActive;
@property(readonly, nonatomic) _Bool fingerPresent;
@property(readonly, nonatomic) long long coachingState;
@property(readonly, nonatomic) long long evaluationState;
@property(readonly, nonatomic) unsigned long long authenticationIdentifier;
- (void)invalidate;
- (void)accessExternalizedContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)restartEvaluation;
- (void)cancelEvaluationWithOptions:(unsigned long long)arg1;
- (void)cancelEvaluation;
- (void)fallbackToSystemPasscodeUI;
- (void)evaluateRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

