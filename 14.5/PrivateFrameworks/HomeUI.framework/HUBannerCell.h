//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <HomeUI/HUBannerCellProtocol-Protocol.h>
#import <HomeUI/HUGridCellProtocol-Protocol.h>
#import <HomeUI/UIGestureRecognizerDelegate-Protocol.h>

@class HFItem, HUGridStatusBannerCellLayoutOptions, NSArray, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol HUBannerCellDelegate, HUResizableCellDelegate;

@interface HUBannerCell : UICollectionViewCell <UIGestureRecognizerDelegate, HUGridCellProtocol, HUBannerCellProtocol>
{
    _Bool _cellContentsHidden;
    UIButton *_dismissButton;
    HUGridStatusBannerCellLayoutOptions *_layoutOptions;
    HFItem *_item;
    id <HUBannerCellDelegate> _delegate;
    UIButton *_continueButton;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIView *_lineView;
    UIView *_footerView;
    UILabel *_footerViewLabel;
    NSArray *_layoutConstraints;
}

+ (Class)layoutOptionsClass;
+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) UILabel *footerViewLabel; // @synthesize footerViewLabel=_footerViewLabel;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(nonatomic) __weak id <HUBannerCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
@property(retain, nonatomic) HUGridStatusBannerCellLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(nonatomic, getter=areCellContentsHidden) _Bool cellContentsHidden; // @synthesize cellContentsHidden=_cellContentsHidden;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_footerViewTapped:(id)arg1;
- (void)_dismissButtonTapped:(id)arg1;
- (void)setBackgroundColor;
- (void)setupCustomCellAppearence;
- (_Bool)isCellSizeSubclassSmallPhone;
@property(readonly, copy) NSString *description;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)prepareForReuse;
- (void)layoutOptionsDidChange;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_setupCommonCellAppearance;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isPointerInteractionEnabled) _Bool pointerInteractionEnabled;
@property(nonatomic) double pointerRegionMargin;
@property(nonatomic, getter=isRearranging) _Bool rearranging;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end

