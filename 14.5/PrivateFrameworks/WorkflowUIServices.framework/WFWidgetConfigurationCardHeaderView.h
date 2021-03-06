//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton, UILabel, UIStackView;
@protocol WFWidgetConfigurationCardHeaderViewDelegate;

__attribute__((visibility("hidden")))
@interface WFWidgetConfigurationCardHeaderView : UIView
{
    id <WFWidgetConfigurationCardHeaderViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSLayoutConstraint *_bottomAreaHeightConstraint;
    UIStackView *_labelsStackView;
    UIButton *_closeButton;
    double _widgetDescriptionTallScriptCompensatedSpacing;
}

- (void).cxx_destruct;
@property(nonatomic) double widgetDescriptionTallScriptCompensatedSpacing; // @synthesize widgetDescriptionTallScriptCompensatedSpacing=_widgetDescriptionTallScriptCompensatedSpacing;
@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) UIStackView *labelsStackView; // @synthesize labelsStackView=_labelsStackView;
@property(readonly, nonatomic) NSLayoutConstraint *bottomAreaHeightConstraint; // @synthesize bottomAreaHeightConstraint=_bottomAreaHeightConstraint;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <WFWidgetConfigurationCardHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)close;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithIcon:(id)arg1 title:(id)arg2 subtitle:(id)arg3;
- (id)initWithRequest:(id)arg1;

@end

