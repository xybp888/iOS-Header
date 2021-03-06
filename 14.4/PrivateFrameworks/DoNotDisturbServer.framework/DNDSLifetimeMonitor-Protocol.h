//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class NSArray, NSDate;
@protocol DNDSLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate;

@protocol DNDSLifetimeMonitor <NSObject>
@property(nonatomic) __weak id <DNDSLifetimeMonitorDelegate> delegate;
@property(nonatomic) __weak id <DNDSLifetimeMonitorDataSource> dataSource;
@property(readonly, copy, nonatomic) NSArray *activeLifetimeAssertionUUIDs;
- (void)refreshMonitorForDate:(NSDate *)arg1;
@end

