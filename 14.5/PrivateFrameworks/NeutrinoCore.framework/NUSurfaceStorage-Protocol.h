//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUImageStorage-Protocol.h>

@class NURegion;

@protocol NUSurfaceStorage <NUImageStorage>
- (long long)writeTextureInRegion:(NURegion *)arg1 block:(_Bool (^)(NUGLTexture *))arg2;
- (long long)readTextureInRegion:(NURegion *)arg1 block:(_Bool (^)(NUGLTexture *))arg2;
- (long long)writeSurfaceInRegion:(NURegion *)arg1 block:(_Bool (^)(NUIOSurface *))arg2;
- (long long)readSurfaceInRegion:(NURegion *)arg1 block:(_Bool (^)(NUIOSurface *))arg2;
@end

