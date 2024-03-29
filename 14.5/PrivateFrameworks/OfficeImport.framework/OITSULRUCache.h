//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, OITSUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface OITSULRUCache : NSObject
{
    OITSUNoCopyDictionary *mData;
    NSMutableArray *mOrderedKeys;
    unsigned long long mMax;
    id mCallbackTarget;
    SEL mCallback;
}

@property(readonly, nonatomic) unsigned long long maxSize; // @synthesize maxSize=mMax;
- (void)p_removeOldestObject;
- (void)clearEvictionCallbackTarget;
- (void)setEvictionCallbackTarget:(id)arg1 selector:(SEL)arg2;
@property(readonly, nonatomic) NSArray *allKeys;
@property(readonly, nonatomic) NSArray *allValues;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) unsigned long long count;
- (id)description;
- (void)dealloc;
- (id)initWithMaxSize:(unsigned long long)arg1;

@end

