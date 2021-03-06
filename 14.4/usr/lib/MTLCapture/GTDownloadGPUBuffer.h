//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLBuffer;

@interface GTDownloadGPUBuffer : NSObject
{
    _Atomic unsigned long long *_usedGPUMemory;
    id <MTLBuffer> _buffer;
    unsigned long long _offset;
    unsigned long long _size;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) id <MTLBuffer> buffer; // @synthesize buffer=_buffer;
- (void)dealloc;
- (id)initWithTracking:(_Atomic unsigned long long *)arg1;

@end

