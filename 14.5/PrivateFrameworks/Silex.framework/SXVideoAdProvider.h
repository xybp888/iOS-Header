//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/ADBannerViewInternalDelegate-Protocol.h>
#import <Silex/SXVideoAdProviding-Protocol.h>

@class NSString, SXAdController, SXPrerollAdResponse, SXVideoAdStateManager, SXVideoComponent, UIButton, UIView;
@protocol SXAnalyticsReporting, SXVASTAnalyticsEventInfoFactory, SXVideoAdViewControllerProviding, SXVideoMetadata, SXVisibilityMonitoring;

@interface SXVideoAdProvider : NSObject <ADBannerViewInternalDelegate, SXVideoAdProviding>
{
    id <SXAnalyticsReporting> _analyticsReporter;
    SXPrerollAdResponse *_response;
    id <SXVideoMetadata> _metadata;
    id <SXVideoAdViewControllerProviding> _fullscreenViewControllerProvider;
    SXVideoAdStateManager *_stateManager;
    id <SXVisibilityMonitoring> _videoVisibilityMonitor;
    id <SXVisibilityMonitoring> _videoPlayerVisibilityMonitor;
    id <SXVASTAnalyticsEventInfoFactory> _analyticsEventInfoFactory;
    SXAdController *_adController;
    SXVideoComponent *_component;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SXVideoComponent *component; // @synthesize component=_component;
@property(readonly, nonatomic) SXAdController *adController; // @synthesize adController=_adController;
@property(readonly, nonatomic) id <SXVASTAnalyticsEventInfoFactory> analyticsEventInfoFactory; // @synthesize analyticsEventInfoFactory=_analyticsEventInfoFactory;
@property(readonly, nonatomic) id <SXVisibilityMonitoring> videoPlayerVisibilityMonitor; // @synthesize videoPlayerVisibilityMonitor=_videoPlayerVisibilityMonitor;
@property(readonly, nonatomic) id <SXVisibilityMonitoring> videoVisibilityMonitor; // @synthesize videoVisibilityMonitor=_videoVisibilityMonitor;
@property(readonly, nonatomic) SXVideoAdStateManager *stateManager; // @synthesize stateManager=_stateManager;
@property(readonly, nonatomic) id <SXVideoAdViewControllerProviding> fullscreenViewControllerProvider; // @synthesize fullscreenViewControllerProvider=_fullscreenViewControllerProvider;
@property(nonatomic) __weak id <SXVideoMetadata> metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) SXPrerollAdResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) id <SXAnalyticsReporting> analyticsReporter; // @synthesize analyticsReporter=_analyticsReporter;
- (id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1;
- (void)adVisibilityStateChanged;
- (void)reportEngagementEventWithType:(unsigned long long)arg1;
- (void)playbackPassedQuartile:(unsigned long long)arg1;
- (void)playbackPassedImpressionThreshold;
@property(readonly, nonatomic) double impressionThreshold;
@property(readonly, nonatomic) UIButton *privacyMarker;
@property(readonly, nonatomic) UIView *metricsView;
- (void)nextVideoStartedPlaying;
- (void)presentPrivacyStatement;
- (void)presentAction;
@property(readonly, nonatomic) _Bool hasAction;
- (double)threshold;
@property(readonly, nonatomic) unsigned long long skipThreshold;
- (void)skipped;
- (void)muteStateChanged:(_Bool)arg1;
- (void)tappedToToggleControlVisibility:(_Bool)arg1;
- (void)exitedFullscreen;
- (void)enteredFullscreen;
- (void)playbackFailedWithError:(id)arg1;
- (void)playbackFinished;
- (void)playbackResumed;
- (void)playbackPaused;
- (void)playbackStarted;
- (void)playbackInitiatedWithButtonTapped:(_Bool)arg1;
- (CDUnknownBlockType)loadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithViewControllerProvider:(id)arg1 analyticsEventInfoFactory:(id)arg2 videoPlayerVisibilityMonitor:(id)arg3 videoVisibilityMonitor:(id)arg4 adController:(id)arg5 component:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

