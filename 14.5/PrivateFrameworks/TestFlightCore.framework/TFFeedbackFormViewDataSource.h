//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TestFlightCore/UITableViewDataSource-Protocol.h>
#import <TestFlightCore/UITableViewDelegate-Protocol.h>

@class NSString, TFFeedbackFormCellUpdater, TFFeedbackFormPresenter;

__attribute__((visibility("hidden")))
@interface TFFeedbackFormViewDataSource : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    TFFeedbackFormPresenter *_presenter;
    TFFeedbackFormCellUpdater *_cellUpdater;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFFeedbackFormCellUpdater *cellUpdater; // @synthesize cellUpdater=_cellUpdater;
@property(readonly, nonatomic) TFFeedbackFormPresenter *presenter; // @synthesize presenter=_presenter;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)prepareTableViewForDataSource:(id)arg1;
- (id)initWithPresenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

