//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Sharing/SDXPCDaemonProtocol-Protocol.h>

@class NSDate, NSDictionary, NSString;

@protocol SFPairedDeviceDaemonInterface <SDXPCDaemonProtocol>
- (void)triggerChargingUIWithDismissHandler:(void (^)(NSError *))arg1;
- (void)sendDashboardEntryWithName:(NSString *)arg1 dict:(NSDictionary *)arg2;
- (void)sendDismissUIWithReason:(long long)arg1;
- (void)initialViewControllerDidDisappear;
- (void)initialViewControllerDidAppear;
- (void)sendAnimationDate:(NSDate *)arg1;
- (void)requestAnimationDateWithCompletion:(void (^)(NSDate *, NSError *))arg1;
@end

