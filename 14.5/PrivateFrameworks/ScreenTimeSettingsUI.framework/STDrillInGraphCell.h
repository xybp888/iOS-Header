//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeSettingsUI/STTableCell.h>

@class STUsageGraphViewController, STUsageItem, UILabel;

__attribute__((visibility("hidden")))
@interface STDrillInGraphCell : STTableCell
{
    UILabel *_usageLabel;
    STUsageGraphViewController *_usageGraphViewController;
    STUsageItem *_usageItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) STUsageItem *usageItem; // @synthesize usageItem=_usageItem;
@property(readonly, nonatomic) STUsageGraphViewController *usageGraphViewController; // @synthesize usageGraphViewController=_usageGraphViewController;
@property(readonly, nonatomic) UILabel *usageLabel; // @synthesize usageLabel=_usageLabel;
- (void)setValue:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

