//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UILabel, UIView;

__attribute__((visibility("hidden")))
@interface WFAudioInputViewController : UIViewController
{
    UILabel *_statusLabel;
    UIView *_contentView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
- (_Bool)accessibilityPerformMagicTap;
- (void)handleTap;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

