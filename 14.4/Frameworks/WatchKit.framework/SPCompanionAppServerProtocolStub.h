//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchKit/SPCompanionAppServerProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SPCompanionAppServerProtocolStub : NSObject <SPCompanionAppServerProtocol>
{
}

- (void)extensionWithIdentifier:(id)arg1 gotUnknownInterfaceController:(id)arg2;
- (void)requestTimingData:(id)arg1 timingMetaData:(id)arg2;
- (void)fetchNotificationForNotificationID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3;
- (void)sendCacheRequest:(id)arg1 identifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

