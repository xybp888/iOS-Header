//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SiriUIBackgroundBlurView;
@protocol SiriUIBackgroundBlurViewControllerDelegate;

@interface SiriUIBackgroundBlurViewController : UIViewController
{
    _Bool _backgroundBlurIsVisible;
    SiriUIBackgroundBlurView *_backgroundBlurView;
    long long _backgroundBlurVisibleReason;
    id <SiriUIBackgroundBlurViewControllerDelegate> _backgroundBlurViewControllerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SiriUIBackgroundBlurViewControllerDelegate> backgroundBlurViewControllerDelegate; // @synthesize backgroundBlurViewControllerDelegate=_backgroundBlurViewControllerDelegate;
@property(nonatomic) long long backgroundBlurVisibleReason; // @synthesize backgroundBlurVisibleReason=_backgroundBlurVisibleReason;
@property(nonatomic) _Bool backgroundBlurIsVisible; // @synthesize backgroundBlurIsVisible=_backgroundBlurIsVisible;
@property(retain, nonatomic) SiriUIBackgroundBlurView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
- (_Bool)_canShowWhileLocked;
- (void)requestBackgroundBlurVisible:(_Bool)arg1 forReason:(long long)arg2;
- (void)viewDidLoad;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end

