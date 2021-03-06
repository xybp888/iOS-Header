//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

#import <NewsCore/FCOrderedMutableCollectionAdditions-Protocol.h>

@interface NSMutableArray (FCAdditions) <FCOrderedMutableCollectionAdditions>
- (void)fc_rotateRightWithCount:(unsigned long long)arg1;
- (void)fc_reverseObjects;
- (void)fc_replaceObjectIdenticalTo:(id)arg1 withObjects:(id)arg2;
- (void)fc_replaceObjectIdenticalTo:(id)arg1 withObject:(id)arg2;
- (void)fc_safelyAddObjectsFromArray:(id)arg1;
- (void)fc_safelyAddObject:(id)arg1;
- (void)fc_trimFromFrontToMaxCount:(unsigned long long)arg1;
- (void)fc_trimToMaxCount:(unsigned long long)arg1;
- (void)fc_insertObjects:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)fc_insertObjects:(id)arg1 inOrderRelativeToContents:(unsigned long long)arg2;
- (void)fc_insertObject:(id)arg1 inOrderRelativeToContents:(unsigned long long)arg2;
- (void)fc_removeObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_popLastObject;
- (id)fc_popFirstObject;
- (void)fc_removeFirstObject;
- (void)fc_removeObject:(id)arg1 sortedUsingSelector:(SEL)arg2;
- (void)fc_insertObject:(id)arg1 sortedUsingSelector:(SEL)arg2;
- (id)fc_mergeSortedOrderedCollection:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (void)fc_safelyAddStringIfNonNilAndNotZeroLength:(id)arg1;
- (void)fc_rotateRightWithCount:(unsigned long long)arg1;
- (void)fc_reverseObjects;
- (void)fc_replaceObjectIdenticalTo:(id)arg1 withObjects:(id)arg2;
- (void)fc_replaceObjectIdenticalTo:(id)arg1 withObject:(id)arg2;
- (void)fc_safelyAddObjectsFromArray:(id)arg1;
- (void)fc_safelyAddObject:(id)arg1;
- (void)fc_trimFromFrontToMaxCount:(unsigned long long)arg1;
- (void)fc_trimToMaxCount:(unsigned long long)arg1;
- (void)fc_insertObjects:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)fc_insertObjects:(id)arg1 inOrderRelativeToContents:(unsigned long long)arg2;
- (void)fc_insertObject:(id)arg1 inOrderRelativeToContents:(unsigned long long)arg2;
- (void)fc_removeObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)fc_popLastObject;
- (id)fc_popFirstObject;
- (void)fc_removeFirstObject;
- (void)fc_removeObject:(id)arg1 sortedUsingSelector:(SEL)arg2;
- (void)fc_insertObject:(id)arg1 sortedUsingSelector:(SEL)arg2;
- (id)fc_mergeSortedOrderedCollection:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (void)fc_safelyAddStringIfNonNilAndNotZeroLength:(id)arg1;
@end

