//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UIStackView, VSFontCenter;
@protocol VSTableHeaderFooterViewDelegate;

__attribute__((visibility("hidden")))
@interface VSTableHeaderFooterView : UIView
{
    long long _kind;
    id <VSTableHeaderFooterViewDelegate> _delegate;
    UIView *_button;
    UILabel *_textLabel;
    UIStackView *_stackView;
    VSFontCenter *_fontCenter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VSFontCenter *fontCenter; // @synthesize fontCenter=_fontCenter;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIView *button; // @synthesize button=_button;
@property(nonatomic) __weak id <VSTableHeaderFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long kind; // @synthesize kind=_kind;
- (void)traitCollectionDidChange:(id)arg1;
- (void)invalidateIntrinsicContentSize;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)layoutMarginsDidChange;
- (void)_didInvalidateIntrinsicContentSize;
- (void)setText:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

