//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/_NUAbstractStorage.h>

@interface _NUAbstractBufferStorage : _NUAbstractStorage
{
    long long _rowBytes;
    const void *_bytes;
    void *_mutableBytes;
}

@property(readonly) void *mutableBytes; // @synthesize mutableBytes=_mutableBytes;
@property(readonly) const void *bytes; // @synthesize bytes=_bytes;
@property(readonly) long long rowBytes; // @synthesize rowBytes=_rowBytes;
- (long long)copyFromStorage:(id)arg1 region:(id)arg2;
- (void *)mutableBytesAtPoint:(CDStruct_912cb5d2)arg1;
- (const void *)bytesAtPoint:(CDStruct_912cb5d2)arg1;
@property(readonly) long long sizeInBytes;

@end

