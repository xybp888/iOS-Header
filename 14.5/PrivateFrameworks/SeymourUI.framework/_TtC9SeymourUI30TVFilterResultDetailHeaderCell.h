//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MISSING_TYPE, NSArray, UILabel;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI30TVFilterResultDetailHeaderCell : UICollectionViewCell
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *itemInfo;
    MISSING_TYPE *layout;
    MISSING_TYPE *artworkView;
    MISSING_TYPE *floatingView;
    MISSING_TYPE *titleLabel;
    MISSING_TYPE *subtitleLabel;
    MISSING_TYPE *actionLabel;
    MISSING_TYPE *labelStackView;
    MISSING_TYPE *buttonStackView;
    MISSING_TYPE *focusGuide;
    MISSING_TYPE *labelStackViewTrailingConstraint;
}

- (void).cxx_destruct;
@property(nonatomic, readonly) UILabel *accessibilityActionLabel;
@property(nonatomic, readonly) UILabel *accessibilitySubtitleLabel;
@property(nonatomic, readonly) UILabel *accessibilityTitleLabel;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)secondaryActionButtonPressed:(id)arg1;
- (void)primaryActionButtonPressed:(id)arg1;
- (void)prepareForReuse;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property(nonatomic, readonly) _Bool canBecomeFocused;

@end

