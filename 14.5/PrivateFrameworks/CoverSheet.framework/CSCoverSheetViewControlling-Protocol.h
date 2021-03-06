//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSAppearanceProviding-Protocol.h>
#import <CoverSheet/CSBehaviorProviding-Protocol.h>
#import <CoverSheet/CSCoverSheetParticipating-Protocol.h>
#import <CoverSheet/CSEventHandling-Protocol.h>
#import <CoverSheet/CSPresentationProviding-Protocol.h>
#import <CoverSheet/SBFIdleTimerBehaviorProviding-Protocol.h>

@protocol CSCoverSheetViewPresenting;

@protocol CSCoverSheetViewControlling <CSAppearanceProviding, CSBehaviorProviding, CSPresentationProviding, CSEventHandling, CSCoverSheetParticipating, SBFIdleTimerBehaviorProviding>
@property(readonly, nonatomic) long long presentationAltitude;
@property(readonly, nonatomic) long long presentationPriority;
@property(readonly, nonatomic) long long presentationTransition;
@property(readonly, nonatomic) long long presentationType;
@property(readonly, nonatomic) long long presentationStyle;
@property(nonatomic) __weak id <CSCoverSheetViewPresenting> presenter;
- (void)conformsToCSCoverSheetViewControlling;
@end

