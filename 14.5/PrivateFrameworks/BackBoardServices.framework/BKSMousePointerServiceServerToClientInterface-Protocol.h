//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BackBoardServices/NSObject-Protocol.h>

@class BKSMousePointerDevicePreferences, NSSet;
@protocol __BKSMousePointerDevice__;

@protocol BKSMousePointerServiceServerToClientInterface <NSObject>
- (oneway void)pointerGlobalDevicePreferencesDidChange:(BKSMousePointerDevicePreferences *)arg1;
- (oneway void)pointingDevicesDidChange:(NSSet<__BKSMousePointerDevice__> *)arg1;
@end

