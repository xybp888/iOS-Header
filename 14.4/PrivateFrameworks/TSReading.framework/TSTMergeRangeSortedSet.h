//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface TSTMergeRangeSortedSet : NSObject
{
    struct set<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::__1::allocator<TSTMergeRangeElem>> *mSet;
    struct __tree_const_iterator<TSTMergeRangeElem, std::__1::__tree_node<TSTMergeRangeElem, void *>*, long> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__ptr_;
    } mIter;
    NSObject<OS_dispatch_semaphore> *mSem;
}

- (id).cxx_construct;
- (void)reset;
- (struct UIEdgeInsets)getPaddingInsets;
- (_Bool)isCheckbox;
- (struct CGSize)getSize;
- (CDStruct_5f1f7aa9)iter;
- (CDStruct_5f1f7aa9)begin;
- (unsigned long long)count;
- (void)addRange:(CDStruct_5f1f7aa9)arg1 andSize:(struct CGSize)arg2 andPaddingInsets:(struct UIEdgeInsets)arg3 andIsCheckbox:(_Bool)arg4;
- (void)dealloc;
- (id)init;

@end

