//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKSource.h>

#import <HealthDaemon/HDCoding-Protocol.h>

@class NSString;

@interface HKSource (HealthDaemon) <HDCoding>
+ (id)_studyNameForResearchStudySource:(id)arg1;
+ (id)_applicationNameForCompanionBundleIdentifier:(id)arg1;
+ (id)_applicationNameForBundleIdentifier:(id)arg1;
+ (_Bool)hd_isSpartanDeviceBundleIdentifier:(id)arg1;
+ (id)hd_currentDeviceSourceName;
+ (id)hd_getNameForSource:(id)arg1;
+ (id)hd_sourceForClient:(id)arg1;
+ (id)createWithCodable:(id)arg1;
- (id)codableRepresentationForSync;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

