//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SBUIBackgroundView;
@protocol SBUIPasscodeLockView;

@interface SBUIPasscodeViewWithLockScreenStyle : UIView
{
    UIView<SBUIPasscodeLockView> *_passcodeView;
    SBUIBackgroundView *_backgroundView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView<SBUIPasscodeLockView> *passcodeView; // @synthesize passcodeView=_passcodeView;
- (void)setBlurEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 includeBlur:(_Bool)arg2 passcodeViewGenerator:(CDUnknownBlockType)arg3;

@end

