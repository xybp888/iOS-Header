//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutFramesQueryOffsets : NSObject
{
    long long _indexOffset;
    long long _supplementaryIndexOffset;
    struct CGPoint _frameOffset;
}

@property(nonatomic) long long supplementaryIndexOffset; // @synthesize supplementaryIndexOffset=_supplementaryIndexOffset;
@property(nonatomic) long long indexOffset; // @synthesize indexOffset=_indexOffset;
@property(nonatomic) struct CGPoint frameOffset; // @synthesize frameOffset=_frameOffset;
- (id)initWithFrameOffset:(struct CGPoint)arg1 indexOffset:(long long)arg2 supplementaryIndexOffset:(long long)arg3;
- (id)init;

@end

