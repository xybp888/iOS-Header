//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSUIMappedImageCache, NSArray;
@protocol HFProcessedWallpaperSource;

@interface HFWallpaperImageCache : NSObject
{
    id <HFProcessedWallpaperSource> _processedWallpaperSource;
    BSUIMappedImageCache *_imageCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BSUIMappedImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain) id <HFProcessedWallpaperSource> processedWallpaperSource; // @synthesize processedWallpaperSource=_processedWallpaperSource;
- (id)_cacheKeyForWallpaper:(id)arg1 withVariant:(long long)arg2;
- (void)pruneUnusedWallpaperVariants:(id)arg1;
- (void)saveVariantsForWallpaper:(id)arg1 originalImage:(id)arg2;
- (id)imageForVariant:(long long)arg1 wallpaper:(id)arg2 withOriginalImageGenerator:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSArray *supportedProcessedVariants;
- (id)init;

@end

