//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSPObject.h>

@class NSMutableArray, NSString;

@interface TSKTreeNode : TSPObject
{
    NSString *mDisplayName;
    id mObject;
    NSMutableArray *mChildren;
}

- (id)description;
- (id)shallowCopy;
- (void)enumerateAllChildrenWithBlock:(CDUnknownBlockType)arg1;
- (id)childEnumerator;
- (void)removeAllChildren;
- (void)removeChildAtIndex:(unsigned long long)arg1;
- (void)removeChildWithDataObject:(id)arg1;
- (void)removeChildWithName:(id)arg1;
- (void)addNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addChildWithName:(id)arg1 object:(id)arg2;
- (_Bool)hasChildWithName:(id)arg1;
- (long long)indexOfNodeWithObject:(id)arg1;
- (id)nodeWithObject:(id)arg1;
- (id)nodeAtIndex:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
@property(retain, nonatomic) id dataObject;
@property(retain, nonatomic) NSMutableArray *children;
@property(retain, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

