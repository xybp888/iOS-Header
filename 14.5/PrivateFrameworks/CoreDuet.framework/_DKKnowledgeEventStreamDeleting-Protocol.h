//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSObject, NSPredicate, _DKEventStream;
@protocol OS_dispatch_queue;

@protocol _DKKnowledgeEventStreamDeleting
- (void)deleteAllEventsMatchingPredicate:(NSPredicate *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2 withCompletion:(void (^)(unsigned long long, NSError *))arg3;
- (unsigned long long)deleteAllEventsMatchingPredicate:(NSPredicate *)arg1 error:(id *)arg2;
- (void)deleteAllEventsInEventStream:(_DKEventStream *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2 withCompletion:(void (^)(unsigned long long, NSError *))arg3;
- (unsigned long long)deleteAllEventsInEventStream:(_DKEventStream *)arg1 error:(id *)arg2;
@end

