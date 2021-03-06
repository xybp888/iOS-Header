//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBIconLabelAccessoryView.h>

@class UIImageView;

@interface SBIconLegibilityLabelAccessoryView : SBIconLabelAccessoryView
{
    UIImageView *_iconImageView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (id)lastBaselineAnchor;
- (id)firstBaselineAnchor;
- (struct UIEdgeInsets)alignmentRectInsets;
- (double)baselineOffsetFromBottom;
- (_Bool)hasBaseline;
- (void)removeInvertingFilter;
- (void)addInvertingFilter;
- (void)updateWithBaseImage:(id)arg1 legibilitySettings:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

