//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "STKBaseInputAlertViewController.h"

@class STKTextInputSessionAction;

@interface STKStandardInputAlertViewController : STKBaseInputAlertViewController
{
}

- (void)sendButtonPressed;
- (void)viewWillAppear:(_Bool)arg1;
- (void)rightNavigationButtonPressed;
- (void)leftNavigationButtonPressed;
- (_Bool)validateAction:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) STKTextInputSessionAction *sessionAction; // @dynamic sessionAction;

@end

