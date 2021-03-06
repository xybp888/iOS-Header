//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>
#import <TSReading/NSFastEnumeration-Protocol.h>

@class NSMutableArray;

@interface TSWPTabs : NSObject <NSCopying, NSFastEnumeration>
{
    NSMutableArray *_tabs;
}

+ (id)tabs;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)indexForTabWithPosition:(double)arg1 alignment:(int)arg2 leader:(id)arg3;
- (void)setPosition:(double)arg1 forTab:(id)arg2;
- (void)removeTabAtIndex:(unsigned long long)arg1;
- (void)insertTab:(id)arg1;
- (id)tabAfterPosition:(double)arg1;
- (id)tabAtPosition:(double)arg1;
- (id)tabAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTabs:(id)arg1;
- (id)init;

@end

