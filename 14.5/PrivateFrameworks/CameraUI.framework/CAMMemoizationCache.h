//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CAMMemoizationCache : NSObject
{
    _Bool _memoizesNil;
    NSMutableDictionary *__dictionary;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *_dictionary; // @synthesize _dictionary=__dictionary;
@property(readonly, nonatomic) _Bool memoizesNil; // @synthesize memoizesNil=_memoizesNil;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectForKey:(id)arg1 memoizationBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithMemoizesNil:(_Bool)arg1;

@end

