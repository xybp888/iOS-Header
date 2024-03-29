//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNSourceRendererRegistry : NSObject
{
    struct __CFDictionary *_registry;
}

+ (id)sharedRegistry;
- (void)removeSourceRenderersForSource:(id)arg1;
- (void)endFrameForEngineContext:(struct __C3DEngineContext *)arg1;
- (void)removeSourceRenderersForEngineContext:(struct __C3DEngineContext *)arg1;
- (id)sourceRendererForEngineContext:(struct __C3DEngineContext *)arg1 source:(id)arg2 textureSource:(id)arg3 targetTexture:(id)arg4;
- (void)rendererDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end

