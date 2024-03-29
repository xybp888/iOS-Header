//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSEditingPane.h>

#import <Preferences/UITableViewDataSource-Protocol.h>
#import <Preferences/UITableViewDelegate-Protocol.h>

@class NSString, PSTextEditingCell, UITableView, UITextField;

@interface PSTextEditingPane : PSEditingPane <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_table;
    PSTextEditingCell *_cell;
    UITextField *_textField;
}

- (void).cxx_destruct;
- (void)setPreferenceSpecifier:(id)arg1;
- (id)preferenceValue;
- (void)setPreferenceValue:(id)arg1;
- (_Bool)becomeFirstResponder;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

