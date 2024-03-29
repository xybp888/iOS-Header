//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/WKFormRotatingAccessoryPopover.h>

#import <WebKit/WKFormControl-Protocol.h>

@class UITableViewController;

__attribute__((visibility("hidden")))
@interface WKSelectPopover : WKFormRotatingAccessoryPopover <WKFormControl>
{
    struct RetainPtr<WKSelectTableViewController> _tableViewController;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) UITableViewController *tableViewController;
- (void)_userActionDismissedPopover:(id)arg1;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (id)controlView;
- (void)dealloc;
- (id)initWithView:(id)arg1 hasGroups:(_Bool)arg2;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(_Bool)arg3;

@end

