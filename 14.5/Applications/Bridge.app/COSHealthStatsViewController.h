//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "COSSetupPageViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FIUIHealthSettingsDataSource, NSString, UITableViewCell;

@interface COSHealthStatsViewController : COSSetupPageViewController <UITableViewDelegate, UITableViewDataSource>
{
    FIUIHealthSettingsDataSource *_healthSettingsDataSource;
    UITableViewCell *_selectedCell;
    _Bool _showWheelchair;
}

- (void).cxx_destruct;
- (id)tapToRadarMetadata;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_requestWheelchairDiagnosticsSubmissionIfNecessary;
- (void)_endEditingAndDiscardChanges:(_Bool)arg1;
- (void)_startEdit;
- (void)_done;
- (void)_cancel;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tappedAboutWheelchairUse:(id)arg1;
- (void)tappedContinue:(id)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

