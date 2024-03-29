//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, _CSIRenditionBlockData, _CUIThemePixelRendition;

__attribute__((visibility("hidden")))
@interface CSIHelper : NSObject
{
    struct _slice {
        unsigned int x;
        unsigned int y;
        unsigned int width;
        unsigned int height;
    } slice;
    NSData *csiData;
    struct _csibitmap *bmp;
    struct os_unfair_lock_s renditionLock;
    _CUIThemePixelRendition *rendition;
    _CSIRenditionBlockData *sharedBlockDataBGRX;
    _CSIRenditionBlockData *sharedBlockDataRGBX;
    _CSIRenditionBlockData *sharedBlockDataGray;
    _CSIRenditionBlockData *retainedBlockData;
    NSString *blockDataCacheKeyBGRX;
    NSString *blockDataCacheKeyRGBX;
    NSString *blockDataCacheKeyGray;
    unsigned long long sourceRowbytes;
    unsigned int shouldCache:1;
    unsigned int usedForDataProvider:1;
    unsigned int _reserved:30;
}

- (void)dealloc;

@end

