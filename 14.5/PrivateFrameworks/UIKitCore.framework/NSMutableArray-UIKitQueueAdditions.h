//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (UIKitQueueAdditions)
- (id)_ui_peek;
- (id)_ui_dequeue;
- (void)_ui_enqueue:(id)arg1;
- (void)removeViewsFromSuperview;
- (void)_kb_reverse;
- (void)_uikbrtRemove:(id)arg1;
- (void)_uikbrtInsert:(id)arg1 beforeItemPassingTest:(CDUnknownBlockType)arg2;
- (void)_uikbrtInsert:(id)arg1 after:(id)arg2;
- (void)_uikbrtInsert:(id)arg1 before:(id)arg2;
- (void)_set_syncQueue:(id)arg1;
- (id)_syncQueue;
- (void)_set_listContainsOrderedItems:(_Bool)arg1;
- (_Bool)_listContainsOrderedItems;
@end

