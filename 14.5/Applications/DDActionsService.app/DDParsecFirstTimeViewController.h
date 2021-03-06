//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, SearchUIFirstTimeExperienceViewController;
@protocol SearchUIFirstTimeExperienceDelegate;

@interface DDParsecFirstTimeViewController : UIViewController
{
    SearchUIFirstTimeExperienceViewController *_firstExperienceViewController;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_widthConstraint;
    _Bool _fullScreen;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(nonatomic) __weak id <SearchUIFirstTimeExperienceDelegate> delegate;
- (void)updateForCurrentTraitCollection;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

