//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class MISSING_TYPE;

@interface HKSHQuickScheduleOverrideViewController : UITableViewController
{
    MISSING_TYPE *model;
    MISSING_TYPE *alarmPreviewPlayer;
    MISSING_TYPE *alarmConfigurationObserver;
    MISSING_TYPE *modelEditObserver;
    MISSING_TYPE *significantTimeChangeObserver;
    MISSING_TYPE *eventRecordChangeObserver;
    MISSING_TYPE *scheduleChangeObserver;
    MISSING_TYPE *sleepDurationGoalObserver;
    MISSING_TYPE *validScheduleRangeObserver;
    MISSING_TYPE *sleepScheduleProvider;
    MISSING_TYPE *modelHasChanged;
    MISSING_TYPE *tonePickerStyleProvider;
    MISSING_TYPE *vibrationPickerStyleProvider;
    MISSING_TYPE *delegate;
    MISSING_TYPE *dataSource;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)dealloc;
- (_Bool)_canShowWhileLocked;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

@end

