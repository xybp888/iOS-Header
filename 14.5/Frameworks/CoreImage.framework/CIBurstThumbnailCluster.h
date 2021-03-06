//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CIBurstYUVImage, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CIBurstThumbnailCluster : NSObject
{
    NSMutableArray *burstImages;
    CDUnknownBlockType completionBlock;
    NSMutableDictionary *imageProps;
    CIBurstYUVImage *image;
}

@property CDUnknownBlockType completionBlock; // @synthesize completionBlock;
@property CIBurstYUVImage *image; // @synthesize image;
@property NSMutableDictionary *imageProps; // @synthesize imageProps;
@property NSMutableArray *burstImages; // @synthesize burstImages;
- (float)computeMergeCost:(id)arg1:(int *)arg2:(int)arg3;
- (void)addItemsFromCluster:(id)arg1;
- (void)releaseImage;
- (void)dealloc;
- (id)initWithImageData:(id)arg1 dict:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)init;

@end

