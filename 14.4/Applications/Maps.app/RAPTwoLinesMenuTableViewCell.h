//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIImageView, UILabel;
@protocol RAPTwoLinesViewModel;

__attribute__((visibility("hidden")))
@interface RAPTwoLinesMenuTableViewCell : UITableViewCell
{
    UILabel *_mainTitleLabel;
    UILabel *_secondTitleLabel;
    NSLayoutConstraint *_topToTitleConstraint;
    NSLayoutConstraint *_titleToSubtitleConstraint;
    NSLayoutConstraint *_subtitleToBottomConstraint;
    id <RAPTwoLinesViewModel> _viewModel;
    UIImageView *_leftImageView;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) id <RAPTwoLinesViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void)prepareForReuse;
- (void)_contentSizeChanged;
- (void)_updateContent;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

