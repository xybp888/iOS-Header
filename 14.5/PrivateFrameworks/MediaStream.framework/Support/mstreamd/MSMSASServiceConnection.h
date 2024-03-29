//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "XPCNSServiceConnectionDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MSMSASServiceConnection : NSObject <XPCNSServiceConnectionDelegate>
{
    NSMutableDictionary *_foregroundPingTimerByPersonID;
    NSMutableDictionary *_XPCForegroundRequestByPersonID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *XPCForegroundRequestByPersonID; // @synthesize XPCForegroundRequestByPersonID=_XPCForegroundRequestByPersonID;
@property(retain, nonatomic) NSMutableDictionary *foregroundPingTimerByPersonID; // @synthesize foregroundPingTimerByPersonID=_foregroundPingTimerByPersonID;
- (void)XPCNSServiceConnectionDidDisconnect:(id)arg1;
- (void)XPCNSServiceConnection:(id)arg1 didReceiveRequest:(id)arg2 sequenceNumber:(unsigned long long)arg3;
- (void)_handleFocusAlbum:(id)arg1;
- (void)_foregroundPingTimerDidExpire:(id)arg1;
- (void)_handleForegroundPing:(id)arg1 request:(id)arg2;
- (id)workQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

