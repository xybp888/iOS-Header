//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;
@protocol PUBarsControllerDelegate;

@interface PUBarsController : NSObject
{
    struct {
        _Bool respondsToViewController;
        _Bool respondsToViewHostingGestureRecognizers;
        _Bool respondsToContentGuideInsetsDidChange;
    } _delegateFlags;
    _Bool __needsUpdateBars;
    _Bool __needsUpdateGestureRecognizers;
    _Bool __needsUpdateContentGuideInsets;
    _Bool __isUpdateScheduled;
    id <PUBarsControllerDelegate> _delegate;
    long long __updateBarsDisabledCount;
    UIViewController *_viewController;
    struct UIEdgeInsets _contentGuideInsets;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic, setter=_setUpdateBarsDisabledCount:) long long _updateBarsDisabledCount; // @synthesize _updateBarsDisabledCount=__updateBarsDisabledCount;
@property(nonatomic, setter=_setUpdateScheduled:) _Bool _isUpdateScheduled; // @synthesize _isUpdateScheduled=__isUpdateScheduled;
@property(nonatomic, setter=_setNeedsUpdateContentGuideInsets:) _Bool _needsUpdateContentGuideInsets; // @synthesize _needsUpdateContentGuideInsets=__needsUpdateContentGuideInsets;
@property(nonatomic, setter=_setNeedsUpdateGestureRecognizers:) _Bool _needsUpdateGestureRecognizers; // @synthesize _needsUpdateGestureRecognizers=__needsUpdateGestureRecognizers;
@property(nonatomic, setter=_setNeedsUpdateBars:) _Bool _needsUpdateBars; // @synthesize _needsUpdateBars=__needsUpdateBars;
@property(nonatomic) struct UIEdgeInsets contentGuideInsets; // @synthesize contentGuideInsets=_contentGuideInsets;
@property(nonatomic) __weak id <PUBarsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_reenableUpdateBars;
- (void)disableUpdateBarsForDuration:(double)arg1;
- (_Bool)_isUpdateBarsDisabled;
- (void)_updateNowIfNeeded;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)_updateContentGuideInsetsIfNeeded;
- (void)invalidateContentGuideInsets;
- (void)_updateGestureRecognizersIfNeeded;
- (void)_invalidateGestureRecognizers;
- (void)_updateBarsIfNeeded;
- (void)updateContentGuideInsets;
- (void)updateGestureRecognizersWithHostingView:(id)arg1;
- (void)updateBars;
- (void)invalidateBars;
- (_Bool)isLocationFromProviderInBarsArea:(id)arg1;
@property(readonly, nonatomic) long long preferredBarStyle;
@property(readonly, nonatomic) _Bool wantsToolbarVisible;
@property(readonly, nonatomic) _Bool wantsNavigationBarVisible;
@property(readonly, nonatomic) _Bool prefersStatusBarHidden;
- (void)invalidateViewHostingGestureRecognizers;
- (void)invalidateViewControllerView;
- (void)updateIfNeeded;
- (id)init;

@end

