//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSTimer, UILabel, UIVisualEffectView, VOTUIRotorKnob;

@interface VOTUIRotorDisplay : UIView
{
    UIVisualEffectView *_backdropView;
    VOTUIRotorKnob *_rotorKnob;
    NSTimer *_fadeTimer;
    _Bool _wasRotorMovementClockwise;
    _Bool _title1Active;
    UILabel *_title1Label;
    UILabel *_title2Label;
    NSLayoutConstraint *_title1LabelCenterConstraint;
    NSLayoutConstraint *_title2LabelCenterConstraint;
    NSLayoutConstraint *_rotorKnobPinnedToTitle1Label;
    NSLayoutConstraint *_rotorKnobPinnedToTitle2Label;
}

- (void).cxx_destruct;
- (void)hide;
- (void)show;
- (void)setTitle:(id)arg1;
- (void)updateRotorPosition:(_Bool)arg1;
- (void)setRotorItemCount:(long long)arg1;
- (void)resetRotorPosition;
- (id)initWithFrame:(struct CGRect)arg1;

@end

