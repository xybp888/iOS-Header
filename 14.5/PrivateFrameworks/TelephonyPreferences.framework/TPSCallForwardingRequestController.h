//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyPreferences/TPSRequestController.h>

#import <TelephonyPreferences/CoreTelephonyClientSuppServicesDelegate-Protocol.h>

@class NSString;

@interface TPSCallForwardingRequestController : TPSRequestController <CoreTelephonyClientSuppServicesDelegate>
{
}

- (id)valueForNotificationData:(id)arg1;
- (void)suppServicesEvent:(id)arg1 event:(int)arg2 settingsType:(int)arg3 data:(id)arg4;
- (void)respondWithSubscriptionContext:(id)arg1 value:(id)arg2 error:(id)arg3;
- (void)executeSetForRequest:(id)arg1;
- (void)executeFetchForRequest:(id)arg1;
- (void)executeRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

