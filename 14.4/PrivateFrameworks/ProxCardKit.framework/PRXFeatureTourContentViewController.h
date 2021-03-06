//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ProxCardKit/PRXCardContentProviding-Protocol.h>

@class NSString, PRXAction, PRXFeatureTourContentView;

@interface PRXFeatureTourContentViewController : UIViewController <PRXCardContentProviding>
{
    PRXFeatureTourContentView *_contentView;
    NSString *_bodyText;
    unsigned long long _dismissalType;
    PRXAction *_dismissButtonAction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PRXAction *dismissButtonAction; // @synthesize dismissButtonAction=_dismissButtonAction;
@property(nonatomic) unsigned long long dismissalType; // @synthesize dismissalType=_dismissalType;
@property(copy, nonatomic) NSString *bodyText; // @synthesize bodyText=_bodyText;
@property(readonly, nonatomic) _Bool allowsPullToDismiss;
- (id)dismissalConfirmationActionWithTitle:(id)arg1 message:(id)arg2 confirmButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4;
- (void)_updateDismissButton;
- (void)_updateTitleView;
- (void)_updateBodyView;
- (void)setTitle:(id)arg1;
@property(readonly, nonatomic) PRXFeatureTourContentView *contentView;
- (void)updatePreferredContentSizeForCardWidth:(double)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) long long cardStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

