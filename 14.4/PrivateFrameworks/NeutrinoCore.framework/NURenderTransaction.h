//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol OS_dispatch_group;

@interface NURenderTransaction : NSObject
{
    long long _nestingLevel;
    NSMutableArray *_requests;
    NSObject<OS_dispatch_group> *_group;
}

+ (void)withCurrentTransaction:(CDUnknownBlockType)arg1;
+ (void)group:(CDUnknownBlockType)arg1;
+ (void)commitAndNotifyOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)_commit:(id)arg1;
+ (void)commit;
+ (void)begin;
+ (id)assertCurrentTransaction;
+ (id)ensureCurrentTransaction;
+ (void)setCurrentTransaction:(id)arg1;
+ (id)currentTransaction;
- (void).cxx_destruct;
- (void)resetPendingRequests;
- (void)submitPendingRequests;
- (void)flush;
@property(readonly) NSArray *pendingRequests;
- (void)submitRequest:(id)arg1;
- (void)notifyCompletion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)commit;
- (_Bool)begin;
- (id)init;

@end

