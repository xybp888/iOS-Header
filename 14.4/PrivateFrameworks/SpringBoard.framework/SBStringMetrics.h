//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/NSFastEnumeration-Protocol.h>

@class NSMutableArray;

@interface SBStringMetrics : NSObject <NSFastEnumeration>
{
    NSMutableArray *_fragments;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)fragmentCount;
- (id)fragments;
- (void)addFragment:(id)arg1;
- (id)description;
- (id)init;

@end

