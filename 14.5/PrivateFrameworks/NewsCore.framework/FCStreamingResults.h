//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCAsyncSerialQueue, NSHashTable, NSMutableArray;
@protocol FCStreaming;

@interface FCStreamingResults : NSObject
{
    NSHashTable *_observers;
    id <FCStreaming> _underlyingStream;
    NSMutableArray *_results;
    FCAsyncSerialQueue *_serialQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FCAsyncSerialQueue *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(readonly, nonatomic) id <FCStreaming> underlyingStream; // @synthesize underlyingStream=_underlyingStream;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 batchSize:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchAllObjectsWithBatchSize:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchObjectsUpToCount:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2;
- (void)fetchObjectsUpToCount:(unsigned long long)arg1;
- (id)array;
- (id)objectsInRange:(struct _NSRange)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) struct _NSRange range;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic, getter=isFinished) _Bool finished;
- (id)initWithResults:(id)arg1 followedByStream:(id)arg2;
- (id)initWithStream:(id)arg1;
- (id)init;

@end

