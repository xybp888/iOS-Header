//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKViewWithHairline.h>

@class DirectionsElevationGraphView, DirectionsElevationLabelSummaryView, GEOComposedRoute, NSLayoutConstraint, UIView;
@protocol DirectionsElevationGraphHeaderViewDelegate;

__attribute__((visibility("hidden")))
@interface DirectionsElevationGraphHeaderView : MKViewWithHairline
{
    UIView *_textContainerView;
    DirectionsElevationGraphView *_chartView;
    DirectionsElevationLabelSummaryView *_labelSummaryView;
    NSLayoutConstraint *_textContainerTopConstraint;
    NSLayoutConstraint *_innerContentBottomConstraint;
    double _textContainerMaxTopMargin;
    struct UIEdgeInsets _contentInsets;
    float _transitionProgress;
    NSLayoutConstraint *_graphMinimumHeightConstraint;
    NSLayoutConstraint *_graphMaximumHeightConstraint;
    double _widthForLastMinMaxCalculation;
    _Bool _styleForNavigation;
    _Bool _recalculatingHeights;
    id <DirectionsElevationGraphHeaderViewDelegate> _delegate;
    GEOComposedRoute *_route;
    double _minimumHeight;
    double _maximumHeight;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isRecalatingHeights) _Bool recalculatingHeights; // @synthesize recalculatingHeights=_recalculatingHeights;
@property(readonly, nonatomic) double maximumHeight; // @synthesize maximumHeight=_maximumHeight;
@property(readonly, nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(retain, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property(nonatomic) _Bool styleForNavigation; // @synthesize styleForNavigation=_styleForNavigation;
@property(nonatomic) __weak id <DirectionsElevationGraphHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateTransition;
- (void)_updateMinimumMaximumHeights;
- (void)_scheduleUpdateMinimumMaximumHeights;
- (void)setTransitionProgress:(float)arg1;
- (float)_calculateTransitionProgress;
- (void)layoutSubviews;
- (void)setNavigationProgress:(double)arg1;
- (void)_updateLabels;
- (id)initWithFrame:(struct CGRect)arg1;

@end

