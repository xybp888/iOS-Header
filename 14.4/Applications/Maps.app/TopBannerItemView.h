//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HairlineView, MKArtworkImageView, NSLayoutConstraint, TopBannerItem, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface TopBannerItemView : UIView
{
    NSLayoutConstraint *_badgeViewWidthConstraint;
    NSLayoutConstraint *_badgeViewToMessageLabelConstraint;
    NSLayoutConstraint *_messageLabelToTrailingConstraint;
    NSLayoutConstraint *_messageLabelToButtonConstraint;
    HairlineView *_hairlineView;
    _Bool _firstItemWithIcon;
    TopBannerItem *_item;
    UILabel *_messageLabel;
    MKArtworkImageView *_badgeImageView;
    UIButton *_button;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) MKArtworkImageView *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) TopBannerItem *item; // @synthesize item=_item;
@property(nonatomic, getter=isFirstItemWithIcon) _Bool firstItemWithIcon; // @synthesize firstItemWithIcon=_firstItemWithIcon;
- (void)_deregisterObservers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateUI;
- (void)updateBadgeView;
- (void)_buttonTapped:(id)arg1;
@property(nonatomic, getter=isHairlineVisible) _Bool hairlineVisible;
- (void)_setupConstraints;
- (void)_customInit;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

