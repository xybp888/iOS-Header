//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinDistributorCompanion/BLTBulletinSendQueuePassthrough.h>

@class BLTBulletinSendQueueAttachmentSender, BLTSendQueueSerializer, NSDate, NSMutableArray, NSNumber, NSObject, PBCodable, PCPersistentTimer;
@protocol OS_dispatch_queue;

@interface BLTBulletinSendQueue : BLTBulletinSendQueuePassthrough
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_completionHandlers;
    NSMutableArray *_queuedBlockHandlers;
    NSNumber *_timeout;
    PCPersistentTimer *_timeoutTimer;
    NSDate *_lastItemDate;
    PBCodable *_firstRequest;
    unsigned short _firstRequestType;
    NSDate *_lastQueueSendDate;
    BLTBulletinSendQueueAttachmentSender *_attachmentSender;
    BLTSendQueueSerializer *_queueSerializer;
}

- (void).cxx_destruct;
- (void)_queue_queuePending;
- (void)_queue_startTimerWithFireDate:(id)arg1;
- (void)_queue_performSend;
- (void)sendNow;
- (void)queuePending;
- (_Bool)handleFileURL:(id)arg1;
- (void)_queue_sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 isTrafficRestricted:(_Bool)arg4 didSend:(CDUnknownBlockType)arg5 didQueue:(CDUnknownBlockType)arg6;
- (void)sendRequest:(id)arg1 withTimeout:(id)arg2 isTrafficRestricted:(_Bool)arg3 didSend:(CDUnknownBlockType)arg4;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 didSend:(CDUnknownBlockType)arg3 didQueue:(CDUnknownBlockType)arg4;
- (id)init;

@end

