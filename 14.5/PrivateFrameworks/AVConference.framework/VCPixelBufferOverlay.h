//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCObject.h>

__attribute__((visibility("hidden")))
@interface VCPixelBufferOverlay : VCObject
{
    struct CGContext *_bitmapContext;
    struct __CFDictionary *_stringAttributes;
    struct __CTLine *_ellipsisToken;
}

- (void)setupStringAttributes:(double)arg1 height:(double)arg2;
- (id)reverseString:(id)arg1;
- (void)drawOverlayMessage:(id)arg1 onPixelBuffer:(struct __CVBuffer *)arg2 attributes:(struct __CFDictionary *)arg3;
- (void)dealloc;

@end

