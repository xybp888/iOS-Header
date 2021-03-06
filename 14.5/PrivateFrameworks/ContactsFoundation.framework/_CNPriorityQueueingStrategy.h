//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNQueueingStrategy-Protocol.h>

@class NSString;

@interface _CNPriorityQueueingStrategy : NSObject <CNQueueingStrategy>
{
    CDUnknownBlockType _priorityComparator;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType priorityComparator; // @synthesize priorityComparator=_priorityComparator;
- (unsigned long long)_insertionIndexForObject:(id)arg1 buffer:(id)arg2;
- (void)enqueueObject:(id)arg1 buffer:(id)arg2;
- (id)initWithComparator:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

