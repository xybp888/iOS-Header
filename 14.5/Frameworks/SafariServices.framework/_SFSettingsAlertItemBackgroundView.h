//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _SFSettingsAlertItemBackgroundView : UIView
{
    UIVisualEffectView *_highlightView;
    NSLayoutConstraint *_highlightToTopConstraint;
    NSLayoutConstraint *_highlightToLeadingConstraint;
    NSLayoutConstraint *_highlightToLeadingWithSpaceConstraint;
    NSLayoutConstraint *_highlightPixelWidthConstraint;
    NSLayoutConstraint *_highlightPixelHeightConstraint;
    long long _mode;
}

- (void).cxx_destruct;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void)updateConstraints;
- (id)_highlightEffect;
- (id)initWithFrame:(struct CGRect)arg1;

@end

