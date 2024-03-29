//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/MDRenderTarget-Protocol.h>

@class NSString;
@protocol GGLRenderQueueSource;

__attribute__((visibility("hidden")))
@interface GGLImageCanvas : NSObject <MDRenderTarget>
{
    struct CGSize _size;
    double _contentScale;
    struct CGRect _bounds;
    _Bool _canMakeImage;
    _Bool _recreateRenderTarget;
    _Bool _allowAlpha;
    _Bool _supportsFramebufferFetch;
    id <GGLRenderQueueSource> _renderSource;
    struct unique_ptr<ggl::IOSurfaceTexture, std::__1::default_delete<ggl::IOSurfaceTexture>> _flippedSurfaceTexture;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget>> _flippedRenderTarget;
    struct unique_ptr<(anonymous namespace)::YFlipPass, std::__1::default_delete<(anonymous namespace)::YFlipPass>> _yFlipPass;
    struct RenderTargetFormat _sRGBFormat;
    struct RenderTargetFormat _resolvedRenderTargetFormat;
    struct shared_ptr<ggl::Device> _device;
    struct Renderer {
        CDUnknownFunctionPointerType *;
        struct Device *;
        unsigned long long;
        unsigned long long;
        unsigned long long;
        _Bool;
        float;
        unsigned long long;
        struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, geo::StdAllocator<std::__1::shared_ptr<ggl::DebugRenderer>, ggl::Allocator>>;
        struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue>>;
        struct shared_ptr<ggl::CommonLibrary>;
        struct unique_ptr<ggl::RenderResourceFences, std::__1::default_delete<ggl::RenderResourceFences>>;
        struct Texture2D *;
        struct unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer>>;
    } *_renderer;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget>> _sRGBRenderTarget;
    shared_ptr_857963ed _sRGBColorBuffer;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer>> _depthStencilBuffer;
    struct RenderTargetFormat _linearFormat;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget>> _linearRenderTarget;
    shared_ptr_857963ed _linearColorBuffer;
    _Bool _useMultisampling;
    struct shared_ptr<ggl::Texture> _msaaResolveBuffer;
    unsigned long long _signpostId;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool allowAlpha; // @synthesize allowAlpha=_allowAlpha;
@property(readonly, nonatomic) _Bool multiSample; // @synthesize multiSample=_useMultisampling;
@property(nonatomic) id <GGLRenderQueueSource> renderSource; // @synthesize renderSource=_renderSource;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
@property(readonly, nonatomic) _Bool supportsFramebufferFetch; // @synthesize supportsFramebufferFetch=_supportsFramebufferFetch;
- (void)didDrawView;
- (void)willDrawView;
- (void)renderWithTimestamp:(double)arg1 completion:(function_d3afe2e2)arg2;
- (_Bool)hasRenderTarget;
- (void)destroyRenderTarget;
- (void)createRenderTarget;
@property(readonly, nonatomic) struct Renderer *renderer;
@property(readonly, nonatomic) const struct RenderTargetFormat *linearFormat;
@property(readonly, nonatomic) struct RenderTarget *linearRenderTarget;
@property(readonly, nonatomic) const struct RenderTargetFormat *format;
- (shared_ptr_fa6aa836)bitmapData;
@property(readonly, nonatomic) struct Texture2D *imageTexture;
@property(readonly, nonatomic) _Bool shouldRasterize;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 useMultisampling:(_Bool)arg3 taskContext:(const shared_ptr_e963992e *)arg4 device:(struct Device *)arg5 signpostId:(unsigned long long)arg6;
- (struct RenderTarget *)_internalRenderTarget;
@property(readonly, nonatomic) struct RenderTarget *finalRenderTarget;
@property(readonly, nonatomic) struct CGSize sizeInPixels;
- (struct Texture *)finalSurface;
@property(readonly, nonatomic) struct RenderTarget *renderTarget;

// Remaining properties
@property(readonly, nonatomic) float averageFPS;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

