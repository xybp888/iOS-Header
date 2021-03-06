//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMFTimer;

@interface HMDDataStreamBulkSendPendingSessionContext : NSObject
{
    CDUnknownBlockType _sessionStartCallback;
    HMFTimer *_handleOpenRequestResponseTimer;
    HMFTimer *_sendCloseEventTimer;
}

- (void).cxx_destruct;
@property(retain) HMFTimer *sendCloseEventTimer; // @synthesize sendCloseEventTimer=_sendCloseEventTimer;
@property(retain) HMFTimer *handleOpenRequestResponseTimer; // @synthesize handleOpenRequestResponseTimer=_handleOpenRequestResponseTimer;
@property(readonly) CDUnknownBlockType sessionStartCallback; // @synthesize sessionStartCallback=_sessionStartCallback;
@property(readonly) _Bool shouldCloseSessionWithTimeoutReason;
- (id)initWithSessionStartCallback:(CDUnknownBlockType)arg1 handleOpenRequestResponseTimer:(id)arg2 sendCloseEventTimer:(id)arg3;

@end

