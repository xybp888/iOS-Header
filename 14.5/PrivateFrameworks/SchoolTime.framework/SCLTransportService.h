//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SchoolTime/IDSServiceDelegate-Protocol.h>
#import <SchoolTime/IDSServiceDelegatePrivate-Protocol.h>

@class IDSService, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface SCLTransportService : NSObject <IDSServiceDelegate, IDSServiceDelegatePrivate>
{
    IDSService *_service;
    NSHashTable *_transportControllers;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_targetQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSHashTable *transportControllers; // @synthesize transportControllers=_transportControllers;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 fromID:(id)arg4 hasBeenDeliveredWithContext:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (_Bool)sendProtobuf:(id)arg1 toDevice:(id)arg2 options:(id)arg3 identifier:(id *)arg4 error:(id *)arg5;
- (id)transportControllerForDevice:(id)arg1;
- (void)removeTransportController:(id)arg1;
- (void)addTransportController:(id)arg1;
- (void)start;
- (id)initWithTargetQueue:(id)arg1 service:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

