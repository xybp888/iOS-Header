//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUBufferImage-Protocol.h>
#import <NeutrinoCore/NUMutableImage-Protocol.h>

@class NURegion;

@protocol NUMutableBufferImage <NUBufferImage, NUMutableImage>
- (void)writeBufferRegion:(NURegion *)arg1 withBlock:(void (^)(id <NUMutableBufferTile>, _Bool *))arg2;
@end

