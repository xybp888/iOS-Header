//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ANXPCTransactionManager : NSObject
{
    NSMutableDictionary *_activeTransactions;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMutableDictionary *activeTransactions; // @synthesize activeTransactions=_activeTransactions;
- (void)_cancelTimer:(id)arg1;
- (void)_resetTimer:(id)arg1 expiration:(double)arg2;
- (void)_startTimer:(id)arg1 expiration:(double)arg2;
- (void)_removeTransaction:(id)arg1;
- (void)_createTransaction:(id)arg1 expiration:(double)arg2;
- (id)_createTransaction:(id)arg1;
- (void)_transaction:(id)arg1 setActiveForTimeInterval:(double)arg2;
- (void)_transaction:(id)arg1 setActive:(_Bool)arg2;
- (void)transaction:(id)arg1 setActiveForTimeInterval:(double)arg2;
- (void)transaction:(id)arg1 setActive:(_Bool)arg2;
- (id)init;

@end

