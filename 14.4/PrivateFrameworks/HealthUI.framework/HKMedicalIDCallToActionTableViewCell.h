//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel;

@interface HKMedicalIDCallToActionTableViewCell : UITableViewCell
{
    UILabel *_callToActionLabel;
    UIButton *_actionButton;
}

+ (id)defaultReuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *callToActionLabel; // @synthesize callToActionLabel=_callToActionLabel;
- (void)setupConstraints;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

