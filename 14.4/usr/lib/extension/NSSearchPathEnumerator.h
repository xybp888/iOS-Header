//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

__attribute__((visibility("hidden")))
@interface NSSearchPathEnumerator : NSEnumerator
{
    long long state;
    unsigned long long directory;
    unsigned long long domainMask;
}

- (id)nextObject;
- (id)initWithDirectory:(unsigned long long)arg1 domains:(unsigned long long)arg2;

@end

