//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKClinicalAccount;

@protocol HKHealthRecordsStoreInterface <NSObject>
- (void)clientRemote_healthRecordsSupportedDidChangeTo:(_Bool)arg1;
- (void)clientRemote_accountDidChange:(HKClinicalAccount *)arg1 changeType:(long long)arg2;
- (void)clientRemote_updateIngestionState:(long long)arg1;
@end

