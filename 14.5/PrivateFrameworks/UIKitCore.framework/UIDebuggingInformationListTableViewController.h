//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewController.h>

#import <UIKitCore/UIDebuggingInformationViewController-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationListTableViewController : UITableViewController <UIDebuggingInformationViewController>
{
    NSMutableArray *topLevelViewControllers;
    NSMutableArray *topLevelViewControllerNames;
}

- (void).cxx_destruct;
- (id)topLevelViewControllerForName:(id)arg1;
- (void)addTopLevelViewController:(id)arg1 forName:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (void)toggleOverlayVisibility;
- (void)toggleOverlayFullscreen;
- (id)initWithStyle:(long long)arg1;

@end

