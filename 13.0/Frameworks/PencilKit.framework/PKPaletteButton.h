//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIButton;

@interface PKPaletteButton : UIControl
{
    long long _buttonType;
    UIButton *_button;
}

@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)layoutSubviews;
- (id)initWithType:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

