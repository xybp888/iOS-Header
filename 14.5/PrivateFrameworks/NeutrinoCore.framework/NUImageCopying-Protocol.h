//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol NUImage, NUMutableImage, NUMutablePurgeableImage, NUPurgeableImage;

@protocol NUImageCopying
- (id <NUMutablePurgeableImage>)mutablePurgeableImageCopy;
- (id <NUPurgeableImage>)purgeableImageCopy;
- (id <NUMutableImage>)mutableImageCopy;
- (id <NUImage>)immutableImageCopy;
@end

