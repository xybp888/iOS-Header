//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIKeyboardSliceStore : NSObject
{
    NSMutableDictionary *_store;
}

+ (void)archiveSet:(id)arg1;
+ (id)sliceSetIDForKeyplaneName:(id)arg1 type:(long long)arg2 orientation:(long long)arg3;
+ (id)sliceSetForID:(id)arg1;
+ (id)sharedStore;
- (void).cxx_destruct;
- (id)sliceSetForID:(id)arg1;
- (void)addSet:(id)arg1;
- (id)init;

@end

