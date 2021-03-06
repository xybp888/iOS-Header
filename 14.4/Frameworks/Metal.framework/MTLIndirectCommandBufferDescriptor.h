//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@interface MTLIndirectCommandBufferDescriptor : NSObject <NSCopying>
{
    struct MTLIndirectCommandBufferDescriptorState _state;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
@property(nonatomic) unsigned long long resourceIndex;
@property(nonatomic) unsigned long long maxKernelBufferBindCount;
@property(nonatomic) unsigned long long maxFragmentBufferBindCount;
@property(nonatomic) unsigned long long maxVertexBufferBindCount;
@property(nonatomic) _Bool inheritBuffers;
@property(nonatomic) _Bool inheritPipelineState;
@property(nonatomic) unsigned long long commandTypes;

@end

