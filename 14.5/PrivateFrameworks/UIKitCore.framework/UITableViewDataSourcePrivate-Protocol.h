//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewDataSource-Protocol.h>

@class NSArray, NSIndexPath, NSString, UITableView;

@protocol UITableViewDataSourcePrivate <UITableViewDataSource>

@optional
- (NSString *)tableView:(UITableView *)arg1 detailTextForHeaderInSection:(long long)arg2;
- (NSArray *)_tableView:(UITableView *)arg1 sectionIndexTitlesTrimmedToCount:(unsigned long long)arg2;
- (NSIndexPath *)tableView:(UITableView *)arg1 indexPathForSectionIndexTitle:(NSString *)arg2 atIndex:(long long)arg3;
@end

