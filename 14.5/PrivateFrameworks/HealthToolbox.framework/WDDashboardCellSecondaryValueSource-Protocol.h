//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSAttributedString, NSDate;
@protocol WDDashboardCellSecondaryValueSourceDelegate;

@protocol WDDashboardCellSecondaryValueSource
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) long long timeScope;
@property(readonly, nonatomic) NSAttributedString *secondaryValue;
@property(nonatomic) __weak id <WDDashboardCellSecondaryValueSourceDelegate> secondaryValueSourceDelegate;
@end

