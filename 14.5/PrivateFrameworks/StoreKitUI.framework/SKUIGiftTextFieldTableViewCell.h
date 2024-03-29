//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSAttributedString, NSString, UIControl, UILabel, UITextField, UIView;
@protocol UITextFieldDelegate;

__attribute__((visibility("hidden")))
@interface SKUIGiftTextFieldTableViewCell : UITableViewCell
{
    UILabel *_label;
    UITextField *_textField;
    UIView *_topBorderView;
    _Bool _leftToRight;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool leftToRight; // @synthesize leftToRight=_leftToRight;
@property(readonly, nonatomic) UIControl *textField; // @synthesize textField=_textField;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(copy, nonatomic) NSString *value;
@property(nonatomic) id <UITextFieldDelegate> textFieldDelegate;
@property(copy, nonatomic) NSString *label;
@property(nonatomic) long long keyboardType;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(copy, nonatomic) NSAttributedString *attributedPlaceholder;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

