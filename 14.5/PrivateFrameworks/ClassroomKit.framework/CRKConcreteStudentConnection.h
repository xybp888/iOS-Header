//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKStudentConnection-Protocol.h>
#import <ClassroomKit/CRKStudentDaemonProxyObserver-Protocol.h>

@class CRKStudentDaemonProxy, NSHashTable, NSString;

@interface CRKConcreteStudentConnection : NSObject <CRKStudentDaemonProxyObserver, CRKStudentConnection>
{
    CRKStudentDaemonProxy *_studentDaemonProxy;
    CDUnknownBlockType _invalidationHandler;
    NSHashTable *_notificationObservations;
}

+ (id)connectionWithStudentDaemonProxy:(id)arg1 invalidationHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSHashTable *notificationObservations; // @synthesize notificationObservations=_notificationObservations;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(readonly, nonatomic) CRKStudentDaemonProxy *studentDaemonProxy; // @synthesize studentDaemonProxy=_studentDaemonProxy;
- (void)daemonProxy:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)daemonProxyDidDisconnect:(id)arg1;
- (id)observeNotificationWithName:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (id)operationForRequest:(id)arg1;
- (id)initWithStudentDaemonProxy:(id)arg1 invalidationHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

