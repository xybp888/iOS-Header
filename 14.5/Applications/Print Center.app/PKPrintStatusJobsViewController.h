//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSObject, PKPrintingMessageView;
@protocol OS_dispatch_queue;

@interface PKPrintStatusJobsViewController : UITableViewController
{
    NSArray *_jobs;
    _Bool _autoPush;
    PKPrintingMessageView *_noJobsView;
    NSObject<OS_dispatch_queue> *_jobsWorkQueue;
}

- (void).cxx_destruct;
- (void)openURL:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willReappear;
- (void)handleJobListDidChange;
- (void)updateJobInfo:(id)arg1;
- (void)updateTableViewCell:(id)arg1 withJob:(id)arg2;
- (id)visibleJobs;
- (void)updateForJobCountChange;
- (void)pushSingleJobAnimated:(_Bool)arg1;
- (void)pushJob:(id)arg1 animated:(_Bool)arg2;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end

