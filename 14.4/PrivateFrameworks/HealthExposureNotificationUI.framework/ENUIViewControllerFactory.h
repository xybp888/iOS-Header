//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UIViewController;

@interface ENUIViewControllerFactory : NSObject
{
    MISSING_TYPE *inflightOnboardingStack;
    MISSING_TYPE *inflightVerificationStack;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)init;
- (id)createPreApprovalDialogueWithBundleIdentifier:(id)arg1 region:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)createKeyReleaseDialogueWithBundleIdentifier:(id)arg1 region:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)createVerificationStackForAgencyModel:(id)arg1 exposureManager:(id)arg2 sessionIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)createAnalyticsConsentStackForAgencyModel:(id)arg1 exposureManager:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)createOnboardingStackForAgencyModel:(id)arg1 exposureManager:(id)arg2 fromAvailabilityAlert:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
@property(nonatomic) __weak UIViewController *inflightVerificationStack; // @synthesize inflightVerificationStack;
@property(nonatomic) __weak UIViewController *inflightOnboardingStack; // @synthesize inflightOnboardingStack;

@end

