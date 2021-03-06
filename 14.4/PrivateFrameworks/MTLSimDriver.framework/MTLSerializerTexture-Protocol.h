//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLSimDriver/MTLSerializerResource-Protocol.h>

@protocol MTLBuffer, MTLTexture;

@protocol MTLSerializerTexture <MTLSerializerResource>
@property(readonly) id <MTLTexture> decompressedTextureView;
@property(readonly) id <MTLBuffer> backingBuffer;
@property(readonly) unsigned long long decompressedPixelFormat;
@property(readonly) unsigned long long pixelFormat;
@property(readonly) unsigned int textureRef;
- (unsigned long long)calculateOffsetToRegion:(CDStruct_caaed6bc)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3;
- (void)decompressPlaceholder:(const char *)arg1 expandedTex:(char *)arg2 srcFormat:(unsigned long long)arg3 destFormat:(unsigned long long)arg4 width:(unsigned long long)arg5 height:(unsigned long long)arg6 destRowBytes:(unsigned long long)arg7 srcRowBytes:(unsigned long long)arg8;
@end

