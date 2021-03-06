//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class PTOutlet, SBAppSwitcherOrbGestureSettings, SBFloatingSwitcherSettings, SBFluidSwitcherAnimationSettings;

@interface SBAppSwitcherSettings : PTSettings
{
    long long _simplicityOptions;
    _Bool _useAsynchronousRendering;
    _Bool _shouldRoundCornersDuringSwipeUp;
    _Bool _useTitleOpacityPrototypeSettings;
    _Bool _showModifierDebugLabel;
    _Bool _showMainModifierTimeline;
    _Bool _showFloatingModifierTimeline;
    _Bool _shouldDisableSwitcherModelUpdatesForDemo;
    _Bool _simplicityOptionNoSnapshots;
    _Bool _simplicityOptionNoCrossfade;
    _Bool _simplicityOptionNoLabels;
    _Bool _simplicityOptionNoIcons;
    _Bool _simplicityOptionNoBlurs;
    _Bool _simplicityOptionNoShadows;
    _Bool _simplicityOptionNoControlCenter;
    _Bool _simplicityOptionNoSnapshotBkg;
    _Bool _showFloats;
    long long _switcherStyle;
    double _asynchronousRenderingDisableSurfaceCacheDelayDuration;
    double _preventMedusaSnapshotsAfterTransitionDuration;
    SBFloatingSwitcherSettings *_floatingSwitcherSettings;
    SBAppSwitcherOrbGestureSettings *_orbGestureSettings;
    double _mScale;
    double _centerPoint;
    double _maxScale;
    double _mAlpha;
    double _bAlpha;
    double _mDarkening;
    double _bDarkening;
    double _maxDarkening;
    double _tetheredInsertionRemovalInsetForDeterminingVisibility;
    double _switcherCardScaleWhileTouched;
    double _switcherCardScaleWhileCursorHovered;
    double _switcherCardShadowRadius;
    double _switcherCardShadowOpacity;
    double _switcherCardShadowOffsetHorizontal;
    double _switcherCardShadowOffsetVertical;
    double _switcherCenterYOffsetPercentOfScreenHeight;
    double _switcherCardShadowRadiusWhileTouched;
    double _switcherCardShadowOpacityWhileTouched;
    double _switcherCardShadowOffsetHorizontalWhileTouched;
    double _switcherCardShadowOffsetVerticalWhileTouched;
    double _cursorHoverShadowRadiusInterpolationAmount;
    double _cursorHoverShadowOpacityInterpolationAmount;
    double _cursorHoverShadowOffsetInterpolationAmount;
    double _appExposeNonFloatingSingleRowScale;
    double _appExposeNonFloatingDoubleRowScale;
    double _appExposeFloatingDoubleRowScale;
    double _gridSwitcherPageScale;
    double _gridSwitcherHorizontalInterpageSpacingLandscape;
    double _gridSwitcherVerticalNaturalSpacingLandscape;
    double _gridSwitcherHorizontalInterpageSpacingPortrait;
    double _gridSwitcherVerticalNaturalSpacingPortrait;
    double _gridSwitcherSnapToControlCenterHeightSlop;
    double _gridSwitcherSwipeUpNormalizedRubberbandingRange;
    double _gridSwitcherSwipeUpNormalizedRubberbandedTranslationAtMinimumScale;
    double _gridSwitcherSwipeUpMinimumScale;
    unsigned long long _numberOfSnapshotsToCacheInSwitcher;
    unsigned long long _numberOfSnapshotsToAlwaysKeepAround;
    double _spacingBetweenLeadingEdgeAndIcon;
    double _spacingBetweenTrailingEdgeAndLabels;
    double _iconSideLength;
    double _spacingBetweenSnapshotAndIcon;
    double _spacingBetweenSnapshotAndDescriptionLabelBaseline;
    double _spacingBetweenTitleAndSubtitleBaseline;
    double _spacingBetweenIconAndLabel;
    double _spacingBetweenLabelAndSecondIcon;
    double _spacingBetweenBoundsCenterAndSecondIcon;
    double _deckSwitcherPageScale;
    double _deckSwitcherDecelerationRate;
    double _aExpLayoutCoeff;
    double _bExpLayoutCoeff;
    double _depthPadding;
    double _offscreenCardScaleForFlyIn;
    double _coplanarSpacingPhone;
    double _coplanarSpacingPad;
    double _titleOpacityACoeff;
    double _titleOpacityBCoeff;
    double _titleOpacityCCoeff;
    double _titleOpacityDCoeff;
    SBFluidSwitcherAnimationSettings *_animationSettings;
    PTOutlet *_stashModelOutlet;
    PTOutlet *_loadModelOutlet;
    PTOutlet *_addAppsToModelOutlet;
    PTOutlet *_addPPTAppsToModelOutlet;
}

+ (id)settingsControllerModule;
- (void).cxx_destruct;
@property _Bool showFloats; // @synthesize showFloats=_showFloats;
@property _Bool simplicityOptionNoSnapshotBkg; // @synthesize simplicityOptionNoSnapshotBkg=_simplicityOptionNoSnapshotBkg;
@property _Bool simplicityOptionNoControlCenter; // @synthesize simplicityOptionNoControlCenter=_simplicityOptionNoControlCenter;
@property _Bool simplicityOptionNoShadows; // @synthesize simplicityOptionNoShadows=_simplicityOptionNoShadows;
@property _Bool simplicityOptionNoBlurs; // @synthesize simplicityOptionNoBlurs=_simplicityOptionNoBlurs;
@property _Bool simplicityOptionNoIcons; // @synthesize simplicityOptionNoIcons=_simplicityOptionNoIcons;
@property _Bool simplicityOptionNoLabels; // @synthesize simplicityOptionNoLabels=_simplicityOptionNoLabels;
@property _Bool simplicityOptionNoCrossfade; // @synthesize simplicityOptionNoCrossfade=_simplicityOptionNoCrossfade;
@property _Bool simplicityOptionNoSnapshots; // @synthesize simplicityOptionNoSnapshots=_simplicityOptionNoSnapshots;
@property(retain, nonatomic) PTOutlet *addPPTAppsToModelOutlet; // @synthesize addPPTAppsToModelOutlet=_addPPTAppsToModelOutlet;
@property(retain, nonatomic) PTOutlet *addAppsToModelOutlet; // @synthesize addAppsToModelOutlet=_addAppsToModelOutlet;
@property(retain, nonatomic) PTOutlet *loadModelOutlet; // @synthesize loadModelOutlet=_loadModelOutlet;
@property(retain, nonatomic) PTOutlet *stashModelOutlet; // @synthesize stashModelOutlet=_stashModelOutlet;
@property(retain, nonatomic) SBFluidSwitcherAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
@property _Bool shouldDisableSwitcherModelUpdatesForDemo; // @synthesize shouldDisableSwitcherModelUpdatesForDemo=_shouldDisableSwitcherModelUpdatesForDemo;
@property _Bool showFloatingModifierTimeline; // @synthesize showFloatingModifierTimeline=_showFloatingModifierTimeline;
@property _Bool showMainModifierTimeline; // @synthesize showMainModifierTimeline=_showMainModifierTimeline;
@property _Bool showModifierDebugLabel; // @synthesize showModifierDebugLabel=_showModifierDebugLabel;
@property double titleOpacityDCoeff; // @synthesize titleOpacityDCoeff=_titleOpacityDCoeff;
@property double titleOpacityCCoeff; // @synthesize titleOpacityCCoeff=_titleOpacityCCoeff;
@property double titleOpacityBCoeff; // @synthesize titleOpacityBCoeff=_titleOpacityBCoeff;
@property double titleOpacityACoeff; // @synthesize titleOpacityACoeff=_titleOpacityACoeff;
@property _Bool useTitleOpacityPrototypeSettings; // @synthesize useTitleOpacityPrototypeSettings=_useTitleOpacityPrototypeSettings;
@property double coplanarSpacingPad; // @synthesize coplanarSpacingPad=_coplanarSpacingPad;
@property double coplanarSpacingPhone; // @synthesize coplanarSpacingPhone=_coplanarSpacingPhone;
@property double offscreenCardScaleForFlyIn; // @synthesize offscreenCardScaleForFlyIn=_offscreenCardScaleForFlyIn;
@property double depthPadding; // @synthesize depthPadding=_depthPadding;
@property double bExpLayoutCoeff; // @synthesize bExpLayoutCoeff=_bExpLayoutCoeff;
@property double aExpLayoutCoeff; // @synthesize aExpLayoutCoeff=_aExpLayoutCoeff;
@property double deckSwitcherDecelerationRate; // @synthesize deckSwitcherDecelerationRate=_deckSwitcherDecelerationRate;
@property double deckSwitcherPageScale; // @synthesize deckSwitcherPageScale=_deckSwitcherPageScale;
@property double spacingBetweenBoundsCenterAndSecondIcon; // @synthesize spacingBetweenBoundsCenterAndSecondIcon=_spacingBetweenBoundsCenterAndSecondIcon;
@property double spacingBetweenLabelAndSecondIcon; // @synthesize spacingBetweenLabelAndSecondIcon=_spacingBetweenLabelAndSecondIcon;
@property double spacingBetweenIconAndLabel; // @synthesize spacingBetweenIconAndLabel=_spacingBetweenIconAndLabel;
@property double spacingBetweenTitleAndSubtitleBaseline; // @synthesize spacingBetweenTitleAndSubtitleBaseline=_spacingBetweenTitleAndSubtitleBaseline;
@property double spacingBetweenSnapshotAndDescriptionLabelBaseline; // @synthesize spacingBetweenSnapshotAndDescriptionLabelBaseline=_spacingBetweenSnapshotAndDescriptionLabelBaseline;
@property double spacingBetweenSnapshotAndIcon; // @synthesize spacingBetweenSnapshotAndIcon=_spacingBetweenSnapshotAndIcon;
@property double iconSideLength; // @synthesize iconSideLength=_iconSideLength;
@property double spacingBetweenTrailingEdgeAndLabels; // @synthesize spacingBetweenTrailingEdgeAndLabels=_spacingBetweenTrailingEdgeAndLabels;
@property double spacingBetweenLeadingEdgeAndIcon; // @synthesize spacingBetweenLeadingEdgeAndIcon=_spacingBetweenLeadingEdgeAndIcon;
@property unsigned long long numberOfSnapshotsToAlwaysKeepAround; // @synthesize numberOfSnapshotsToAlwaysKeepAround=_numberOfSnapshotsToAlwaysKeepAround;
@property unsigned long long numberOfSnapshotsToCacheInSwitcher; // @synthesize numberOfSnapshotsToCacheInSwitcher=_numberOfSnapshotsToCacheInSwitcher;
@property double gridSwitcherSwipeUpMinimumScale; // @synthesize gridSwitcherSwipeUpMinimumScale=_gridSwitcherSwipeUpMinimumScale;
@property double gridSwitcherSwipeUpNormalizedRubberbandedTranslationAtMinimumScale; // @synthesize gridSwitcherSwipeUpNormalizedRubberbandedTranslationAtMinimumScale=_gridSwitcherSwipeUpNormalizedRubberbandedTranslationAtMinimumScale;
@property double gridSwitcherSwipeUpNormalizedRubberbandingRange; // @synthesize gridSwitcherSwipeUpNormalizedRubberbandingRange=_gridSwitcherSwipeUpNormalizedRubberbandingRange;
@property double gridSwitcherSnapToControlCenterHeightSlop; // @synthesize gridSwitcherSnapToControlCenterHeightSlop=_gridSwitcherSnapToControlCenterHeightSlop;
@property double gridSwitcherVerticalNaturalSpacingPortrait; // @synthesize gridSwitcherVerticalNaturalSpacingPortrait=_gridSwitcherVerticalNaturalSpacingPortrait;
@property double gridSwitcherHorizontalInterpageSpacingPortrait; // @synthesize gridSwitcherHorizontalInterpageSpacingPortrait=_gridSwitcherHorizontalInterpageSpacingPortrait;
@property double gridSwitcherVerticalNaturalSpacingLandscape; // @synthesize gridSwitcherVerticalNaturalSpacingLandscape=_gridSwitcherVerticalNaturalSpacingLandscape;
@property double gridSwitcherHorizontalInterpageSpacingLandscape; // @synthesize gridSwitcherHorizontalInterpageSpacingLandscape=_gridSwitcherHorizontalInterpageSpacingLandscape;
@property double gridSwitcherPageScale; // @synthesize gridSwitcherPageScale=_gridSwitcherPageScale;
@property double appExposeFloatingDoubleRowScale; // @synthesize appExposeFloatingDoubleRowScale=_appExposeFloatingDoubleRowScale;
@property double appExposeNonFloatingDoubleRowScale; // @synthesize appExposeNonFloatingDoubleRowScale=_appExposeNonFloatingDoubleRowScale;
@property double appExposeNonFloatingSingleRowScale; // @synthesize appExposeNonFloatingSingleRowScale=_appExposeNonFloatingSingleRowScale;
@property double cursorHoverShadowOffsetInterpolationAmount; // @synthesize cursorHoverShadowOffsetInterpolationAmount=_cursorHoverShadowOffsetInterpolationAmount;
@property double cursorHoverShadowOpacityInterpolationAmount; // @synthesize cursorHoverShadowOpacityInterpolationAmount=_cursorHoverShadowOpacityInterpolationAmount;
@property double cursorHoverShadowRadiusInterpolationAmount; // @synthesize cursorHoverShadowRadiusInterpolationAmount=_cursorHoverShadowRadiusInterpolationAmount;
@property double switcherCardShadowOffsetVerticalWhileTouched; // @synthesize switcherCardShadowOffsetVerticalWhileTouched=_switcherCardShadowOffsetVerticalWhileTouched;
@property double switcherCardShadowOffsetHorizontalWhileTouched; // @synthesize switcherCardShadowOffsetHorizontalWhileTouched=_switcherCardShadowOffsetHorizontalWhileTouched;
@property double switcherCardShadowOpacityWhileTouched; // @synthesize switcherCardShadowOpacityWhileTouched=_switcherCardShadowOpacityWhileTouched;
@property double switcherCardShadowRadiusWhileTouched; // @synthesize switcherCardShadowRadiusWhileTouched=_switcherCardShadowRadiusWhileTouched;
@property double switcherCenterYOffsetPercentOfScreenHeight; // @synthesize switcherCenterYOffsetPercentOfScreenHeight=_switcherCenterYOffsetPercentOfScreenHeight;
@property double switcherCardShadowOffsetVertical; // @synthesize switcherCardShadowOffsetVertical=_switcherCardShadowOffsetVertical;
@property double switcherCardShadowOffsetHorizontal; // @synthesize switcherCardShadowOffsetHorizontal=_switcherCardShadowOffsetHorizontal;
@property double switcherCardShadowOpacity; // @synthesize switcherCardShadowOpacity=_switcherCardShadowOpacity;
@property double switcherCardShadowRadius; // @synthesize switcherCardShadowRadius=_switcherCardShadowRadius;
@property double switcherCardScaleWhileCursorHovered; // @synthesize switcherCardScaleWhileCursorHovered=_switcherCardScaleWhileCursorHovered;
@property double switcherCardScaleWhileTouched; // @synthesize switcherCardScaleWhileTouched=_switcherCardScaleWhileTouched;
@property double tetheredInsertionRemovalInsetForDeterminingVisibility; // @synthesize tetheredInsertionRemovalInsetForDeterminingVisibility=_tetheredInsertionRemovalInsetForDeterminingVisibility;
@property double maxDarkening; // @synthesize maxDarkening=_maxDarkening;
@property double bDarkening; // @synthesize bDarkening=_bDarkening;
@property double mDarkening; // @synthesize mDarkening=_mDarkening;
@property double bAlpha; // @synthesize bAlpha=_bAlpha;
@property double mAlpha; // @synthesize mAlpha=_mAlpha;
@property double maxScale; // @synthesize maxScale=_maxScale;
@property double centerPoint; // @synthesize centerPoint=_centerPoint;
@property double mScale; // @synthesize mScale=_mScale;
@property(retain, nonatomic) SBAppSwitcherOrbGestureSettings *orbGestureSettings; // @synthesize orbGestureSettings=_orbGestureSettings;
@property(retain, nonatomic) SBFloatingSwitcherSettings *floatingSwitcherSettings; // @synthesize floatingSwitcherSettings=_floatingSwitcherSettings;
@property double preventMedusaSnapshotsAfterTransitionDuration; // @synthesize preventMedusaSnapshotsAfterTransitionDuration=_preventMedusaSnapshotsAfterTransitionDuration;
@property double asynchronousRenderingDisableSurfaceCacheDelayDuration; // @synthesize asynchronousRenderingDisableSurfaceCacheDelayDuration=_asynchronousRenderingDisableSurfaceCacheDelayDuration;
@property _Bool shouldRoundCornersDuringSwipeUp; // @synthesize shouldRoundCornersDuringSwipeUp=_shouldRoundCornersDuringSwipeUp;
@property _Bool useAsynchronousRendering; // @synthesize useAsynchronousRendering=_useAsynchronousRendering;
@property long long switcherStyle; // @synthesize switcherStyle=_switcherStyle;
- (double)_spacingBetweenLeadingEdgeAndIcon;
- (long long)effectiveSwitcherStyle;
- (_Bool)shouldSimplifyForOptions:(long long)arg1;
@property long long simplicityOptions; // @dynamic simplicityOptions;
- (id)archiveValueForKey:(id)arg1;
- (void)setDefaultValues;

@end

