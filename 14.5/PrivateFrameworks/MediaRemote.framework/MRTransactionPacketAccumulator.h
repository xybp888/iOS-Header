//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface MRTransactionPacketAccumulator : NSObject
{
    NSMutableOrderedSet *_packets;
    unsigned long long _currentLength;
}

- (void).cxx_destruct;
- (id)mergePacket:(id)arg1;
- (id)init;

@end

