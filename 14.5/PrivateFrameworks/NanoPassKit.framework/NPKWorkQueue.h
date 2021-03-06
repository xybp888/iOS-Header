//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface NPKWorkQueue : NSObject
{
    _Bool _performingWork;
    _Bool _takeOutTransactions;
    NSString *_workQueueName;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_remainingWork;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool takeOutTransactions; // @synthesize takeOutTransactions=_takeOutTransactions;
@property(nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) _Bool performingWork; // @synthesize performingWork=_performingWork;
@property(retain, nonatomic) NSMutableArray *remainingWork; // @synthesize remainingWork=_remainingWork;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *workQueueName; // @synthesize workQueueName=_workQueueName;
- (void)performWork:(CDUnknownBlockType)arg1;
- (void)_onQueue_doWorkIfNecessary;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 takeOutTransactions:(_Bool)arg2;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end

