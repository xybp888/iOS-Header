//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "COSAppleIDLoginViewController.h"

#import "BPSBuddyControllerHolding-Protocol.h"
#import "COSBuddyController-Protocol.h"

@class ACAccount, NSString;

@interface COSiTunesStoreLoginViewController : COSAppleIDLoginViewController <COSBuddyController, BPSBuddyControllerHolding>
{
    ACAccount *_account;
}

+ (_Bool)controllerNeedsToRunForBuddyControllerDelegate:(id)arg1;
- (void).cxx_destruct;
- (id)followUpActions;
- (id)localizedInformativeText;
- (id)localizedTitle;
- (id)followUpIdentifier;
- (id)localizedWaitScreenDescription;
- (double)waitScreenPushGracePeriod;
- (_Bool)holdWithWaitScreen;
- (void)signInFailedWithError:(id)arg1;
- (void)loggedInSuccessfullyWithBuddyControllerDoneBlock:(CDUnknownBlockType)arg1;
- (void)checkIfCanReleaseHold;
- (void)silentSignInStateChanged:(id)arg1;
- (void)finishedActivating;
- (void)didEstablishHold;
- (_Bool)holdBeforeDisplaying;
- (id)activationHoldActivityIdentifier;
- (id)holdActivityIdentifier;
- (unsigned long long)performanceMonitorCATiming;
- (id)performanceMonitorActivityName;
- (void)tappedSkipButton:(id)arg1;
- (_Bool)allowSkipping;
- (_Bool)controllerAllowsNavigatingBackTo;
- (id)detailString;
- (id)titleString;
- (id)username;
- (id)accountTypeString;
- (id)account;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

