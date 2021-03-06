//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HMCameraSource, HMCameraView, HUCameraBadgeView, HUCameraErrorContent, HUCameraErrorView, HURemoteContextHostingView, NADecayingTimer, NSArray, NSLayoutConstraint, NSLayoutYAxisAnchor, UIActivityIndicatorView, UIImageView;

@interface HUCameraView : UIView
{
    _Bool _showActivityIndicator;
    unsigned long long _maskedCameraCorners;
    NSLayoutYAxisAnchor *_badgeBottomAnchor;
    HUCameraErrorContent *_errorContent;
    UIImageView *_demoSnapshotImageView;
    HURemoteContextHostingView *_cameraContainerView;
    HUCameraBadgeView *_badgeView;
    UIView *_cameraOverlayView;
    UIView *_cameraDimmingView;
    UIView *_backgroundView;
    HUCameraErrorView *_errorView;
    UIActivityIndicatorView *_activityIndicatorView;
    NADecayingTimer *_snapshotAgeUpdateTimer;
    NSArray *_staticConstraints;
    NSLayoutConstraint *_cameraAspectRatioConstraint;
    NSLayoutConstraint *_badgeBottomConstraint;
    NSLayoutConstraint *_badgeTrailingConstraint;
    struct UIOffset _badgeOffset;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *badgeTrailingConstraint; // @synthesize badgeTrailingConstraint=_badgeTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *badgeBottomConstraint; // @synthesize badgeBottomConstraint=_badgeBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *cameraAspectRatioConstraint; // @synthesize cameraAspectRatioConstraint=_cameraAspectRatioConstraint;
@property(retain, nonatomic) NSArray *staticConstraints; // @synthesize staticConstraints=_staticConstraints;
@property(retain, nonatomic) NADecayingTimer *snapshotAgeUpdateTimer; // @synthesize snapshotAgeUpdateTimer=_snapshotAgeUpdateTimer;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) HUCameraErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *cameraDimmingView; // @synthesize cameraDimmingView=_cameraDimmingView;
@property(readonly, nonatomic) UIView *cameraOverlayView; // @synthesize cameraOverlayView=_cameraOverlayView;
@property(readonly, nonatomic) HUCameraBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(readonly, nonatomic) HURemoteContextHostingView *cameraContainerView; // @synthesize cameraContainerView=_cameraContainerView;
@property(retain, nonatomic) UIImageView *demoSnapshotImageView; // @synthesize demoSnapshotImageView=_demoSnapshotImageView;
@property(nonatomic) _Bool showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property(retain, nonatomic) HUCameraErrorContent *errorContent; // @synthesize errorContent=_errorContent;
@property(retain, nonatomic) NSLayoutYAxisAnchor *badgeBottomAnchor; // @synthesize badgeBottomAnchor=_badgeBottomAnchor;
@property(nonatomic) struct UIOffset badgeOffset; // @synthesize badgeOffset=_badgeOffset;
@property(nonatomic) unsigned long long maskedCameraCorners; // @synthesize maskedCameraCorners=_maskedCameraCorners;
- (void)_scheduleNextSnapshotAgeUpdateForCaptureDate:(id)arg1;
- (void)_updateBadgeViewReschedulingTimerIfNecessary:(_Bool)arg1;
- (void)_updateBadgeView;
- (void)_updateErrorAndActivityIndicatorVisibilityAnimated:(_Bool)arg1;
- (void)_updateMaskedCameraCorners;
@property(readonly, nonatomic) UIView *cameraOverlaySnapshot;
- (id)cameraContentSnapshot;
@property(readonly, nonatomic) struct CGRect derivedCameraContentFrame;
@property(readonly, nonatomic) struct CGRect cameraContentFrame;
@property(nonatomic, getter=isBadgeHidden) _Bool badgeHidden;
- (void)setShowActivityIndicator:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setErrorContent:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) HMCameraSource *cameraSource;
- (void)setCameraSource:(id)arg1 animated:(_Bool)arg2;
- (void)setCameraSource:(id)arg1 withDemoSnapshotURL:(id)arg2 animated:(_Bool)arg3;
- (void)setCameraContentMode:(long long)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
@property(readonly, nonatomic) HMCameraView *cameraView;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)setContentMode:(long long)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (double)_continuousCornerRadius;
- (void)dealloc;
- (id)initWithBadgeView:(id)arg1;
- (id)init;

@end

