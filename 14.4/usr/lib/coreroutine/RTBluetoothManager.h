//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTService.h>

@interface RTBluetoothManager : RTService
{
}

+ (id)carKitConnectionStateToString:(long long)arg1;
+ (_Bool)supportsNotificationName:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)_fetchCarKitConnectedStateWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchCarKitConnectedStateWithHandler:(CDUnknownBlockType)arg1;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;

@end

