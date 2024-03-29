//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIStackView.h>

@class CarTwoPartLabel, GuidanceETA;

__attribute__((visibility("hidden")))
@interface CarRouteInfoView : UIStackView
{
    CarTwoPartLabel *_ETALabel;
    CarTwoPartLabel *_timeLabel;
    CarTwoPartLabel *_distanceLabel;
    GuidanceETA *_latestETA;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GuidanceETA *latestETA; // @synthesize latestETA=_latestETA;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (double)totalRemainingTime;
- (double)totalRemainingDistance;
- (void)_updateLabels;
- (id)initWithFrame:(struct CGRect)arg1;

@end

