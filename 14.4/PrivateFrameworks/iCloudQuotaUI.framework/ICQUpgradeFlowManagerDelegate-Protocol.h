//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iCloudQuotaUI/NSObject-Protocol.h>

@class ICQUpgradeFlowManager, UIViewController;

@protocol ICQUpgradeFlowManagerDelegate <NSObject>

@optional
- (void)upgradeFlowManager:(ICQUpgradeFlowManager *)arg1 didPresentViewController:(UIViewController *)arg2;
- (void)upgradeFlowManagerDidComplete:(ICQUpgradeFlowManager *)arg1;
- (void)upgradeFlowManagerDidCancel:(ICQUpgradeFlowManager *)arg1;
@end

