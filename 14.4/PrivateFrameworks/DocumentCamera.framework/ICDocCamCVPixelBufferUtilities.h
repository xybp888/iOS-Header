//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ICDocCamCVPixelBufferUtilities : NSObject
{
}

+ (id)coreImageForPixelBuffer:(struct __CVBuffer *)arg1 colorSpace:(struct CGColorSpace *)arg2;
+ (struct CGImage *)createImageWithCVPixelBuffer:(struct __CVBuffer *)arg1 colorSpace:(struct CGColorSpace *)arg2 copyMemory:(_Bool)arg3;
+ (struct CGImage *)createImageWithCVPixelBuffer:(struct __CVBuffer *)arg1 colorSpace:(struct CGColorSpace *)arg2;
+ (struct CGImage *)createImageWithCVPixelBuffer:(struct __CVBuffer *)arg1;

@end

