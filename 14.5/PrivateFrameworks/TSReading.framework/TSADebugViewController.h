//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSKPopoverBasedViewController.h>

@class TSADebugTableViewController, UIViewController;

@interface TSADebugViewController : TSKPopoverBasedViewController
{
    UIViewController *_delegate;
    TSADebugTableViewController *_debugTableViewController;
}

- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)hideIt:(id)arg1;
- (void)showIt:(id)arg1;
- (void)toggleVisible:(id)arg1;
- (void)loadView;
- (void)addItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

