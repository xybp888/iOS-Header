//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSISEngine;

@interface NSISObjectiveLinearExpression : NSObject
{
    NSISEngine *_engine;
    struct {
        struct {
            CDStruct_183601bc **values;
            int count;
            unsigned int capacity;
        } heap;
        CDStruct_183601bc *values;
        unsigned int count;
        unsigned int tombstones;
        unsigned int size;
        unsigned short grow_shift;
    } _priorityMap;
    struct {
        CDStruct_183601bc *values;
        unsigned short count;
        unsigned short capacity;
        unsigned int key;
        unsigned int heap_position;
    } _constant;
}

- (id)description;
- (void)dealloc;
- (id)initWithEngine:(id)arg1;
- (id)init;

@end

