//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NNMKSyncEndpoint : NSObject
{
    NSObject<OS_dispatch_queue> *_endpointQueue;
    NSObject<OS_dispatch_queue> *_resendingQueue;
    NSMutableDictionary *_datesForIDSIdentifiersScheduledToBeResent;
    NSMutableDictionary *_lastResendIntervalByIDSIdentifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *lastResendIntervalByIDSIdentifier; // @synthesize lastResendIntervalByIDSIdentifier=_lastResendIntervalByIDSIdentifier;
@property(retain, nonatomic) NSMutableDictionary *datesForIDSIdentifiersScheduledToBeResent; // @synthesize datesForIDSIdentifiersScheduledToBeResent=_datesForIDSIdentifiersScheduledToBeResent;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *resendingQueue; // @synthesize resendingQueue=_resendingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *endpointQueue; // @synthesize endpointQueue=_endpointQueue;
- (void)resendObjectsForIDSIdentifier:(id)arg1;
- (void)dequeueIDSIdentifierForResend:(id)arg1;
- (unsigned long long)newResendIntervalForPreviousResendInterval:(unsigned long long)arg1 errorCode:(long long)arg2;
- (void)resendAllIDSIdentifiers;
- (void)resendReadyIDSIdentifiers;
- (void)enqueueIDSIdentifierForResend:(id)arg1 atDate:(id)arg2 silent:(_Bool)arg3;
- (void)enqueueIDSIdentifiersForResend:(id)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

