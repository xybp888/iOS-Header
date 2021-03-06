//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GLKit/MDLMeshBuffer-Protocol.h>

@class GLKMeshBufferAllocator, GLKMeshBufferZone, NSString;
@protocol MDLMeshBufferZone;

@interface GLKMeshBuffer : NSObject <MDLMeshBuffer>
{
    unsigned int _mapCount;
    void *_mapPtr;
    unsigned int _target;
    GLKMeshBufferZone *_zone;
    unsigned int _glBufferName;
    unsigned long long _length;
    GLKMeshBufferAllocator *_allocator;
    unsigned long long _offset;
    unsigned long long _type;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) unsigned int glBufferName; // @synthesize glBufferName=_glBufferName;
@property(readonly, nonatomic) GLKMeshBufferAllocator *allocator; // @synthesize allocator=_allocator;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property(readonly, nonatomic) id <MDLMeshBufferZone> zone; // @synthesize zone=_zone;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)map;
- (void)fillData:(id)arg1 offset:(unsigned long long)arg2;
- (id)_initWithBytes:(const void *)arg1 length:(unsigned long long)arg2 offset:(unsigned long long)arg3 allocator:(id)arg4 zone:(id)arg5 type:(unsigned long long)arg6;
- (id)_initWithData:(id)arg1 allocator:(id)arg2 type:(unsigned long long)arg3;
- (id)_initWithLength:(unsigned long long)arg1 allocator:(id)arg2 type:(unsigned long long)arg3;
- (id)_initWithLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 zone:(id)arg3 type:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

