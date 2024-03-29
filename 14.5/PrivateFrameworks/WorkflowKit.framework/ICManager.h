//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFApplicationStateObserver-Protocol.h>

@class ICScheme, NSLock, NSMutableArray;

@interface ICManager : NSObject <WFApplicationStateObserver>
{
    _Bool _allowsOpeningFromBackground;
    _Bool _enteringForeground;
    _Bool _resignedActiveWhileOpeningURL;
    ICScheme *_callbackScheme;
    NSMutableArray *_queuedRequests;
    NSLock *_queueLock;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(nonatomic) _Bool resignedActiveWhileOpeningURL; // @synthesize resignedActiveWhileOpeningURL=_resignedActiveWhileOpeningURL;
@property(nonatomic) _Bool enteringForeground; // @synthesize enteringForeground=_enteringForeground;
@property(retain, nonatomic) NSLock *queueLock; // @synthesize queueLock=_queueLock;
@property(retain, nonatomic) NSMutableArray *queuedRequests; // @synthesize queuedRequests=_queuedRequests;
@property(nonatomic) _Bool allowsOpeningFromBackground; // @synthesize allowsOpeningFromBackground=_allowsOpeningFromBackground;
@property(retain, nonatomic) ICScheme *callbackScheme; // @synthesize callbackScheme=_callbackScheme;
- (void)_performRequest:(id)arg1;
- (void)performRequest:(id)arg1;
- (void)performQueuedRequestIfApplicable;
- (id)popQueuedRequest;
- (void)queueRequest:(id)arg1;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (void)removeHandlerForIncomingRequestsWithAction:(id)arg1 scheme:(id)arg2;
- (void)registerHandler:(CDUnknownBlockType)arg1 forIncomingRequestsWithAction:(id)arg2 legacyAction:(id)arg3 scheme:(id)arg4;
- (void)registerHandler:(CDUnknownBlockType)arg1 forIncomingRequestsWithAction:(id)arg2 scheme:(id)arg3;
- (_Bool)handleIncomingRequest:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1 fromSourceApplication:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

