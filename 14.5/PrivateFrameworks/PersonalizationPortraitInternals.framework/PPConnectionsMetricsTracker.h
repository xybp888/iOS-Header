//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETDistributionEventTracker, PETGoalConversionEventTracker, PETScalarEventTracker;
@protocol OS_dispatch_queue;

@interface PPConnectionsMetricsTracker : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    PETScalarEventTracker *_opportunityTracker;
    PETGoalConversionEventTracker *_conversionTracker;
    PETScalarEventTracker *_dismissalTracker;
    PETDistributionEventTracker *_timingTracker;
    PETScalarEventTracker *_donationTracker;
    PETScalarEventTracker *_pasteboardTracker;
}

+ (id)triggerFromCriteria:(id)arg1;
+ (id)donationSourceFromBundleID:(id)arg1;
+ (id)consumerStringForConsumerType:(unsigned long long)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) PETScalarEventTracker *pasteboardTracker; // @synthesize pasteboardTracker=_pasteboardTracker;
@property(retain, nonatomic) PETScalarEventTracker *donationTracker; // @synthesize donationTracker=_donationTracker;
@property(retain, nonatomic) PETDistributionEventTracker *timingTracker; // @synthesize timingTracker=_timingTracker;
@property(retain, nonatomic) PETScalarEventTracker *dismissalTracker; // @synthesize dismissalTracker=_dismissalTracker;
@property(retain, nonatomic) PETGoalConversionEventTracker *conversionTracker; // @synthesize conversionTracker=_conversionTracker;
@property(retain, nonatomic) PETScalarEventTracker *opportunityTracker; // @synthesize opportunityTracker=_opportunityTracker;
- (id)privacyFriendlyBundleIdentifierWith:(id)arg1;
- (void)trackPasteboardItemFromBundleId:(id)arg1 hasAddress:(_Bool)arg2 isEligible:(_Bool)arg3;
- (void)trackDonationFromBundleId:(id)arg1 source:(id)arg2 hasLatLon:(_Bool)arg3 isEligible:(_Bool)arg4;
- (void)trackTimingForConsumer:(id)arg1 time:(unsigned long long)arg2;
- (void)trackDismissalForConsumer:(id)arg1 source:(id)arg2 trigger:(id)arg3 originatingApp:(id)arg4 targetApp:(id)arg5;
- (void)trackOpportunityForConsumer:(id)arg1 trigger:(id)arg2 targetApp:(id)arg3;
- (void)trackConversionGoalForConsumer:(id)arg1 source:(id)arg2 trigger:(id)arg3 originatingApp:(id)arg4 targetApp:(id)arg5 converted:(_Bool)arg6;
- (id)init;

@end

