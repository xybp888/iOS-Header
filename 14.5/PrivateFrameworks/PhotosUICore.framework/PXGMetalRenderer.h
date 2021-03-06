//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/MTKViewDelegate-Protocol.h>
#import <PhotosUICore/PXGMetalTextureConverterDelegate-Protocol.h>
#import <PhotosUICore/PXGRenderer-Protocol.h>

@class MTKView, NSMutableArray, NSString, PXGMetalRenderTextureStore, PXGMetalTextureConverter, PXGSpriteDataStore;
@protocol MTLBuffer, MTLCommandQueue, MTLDepthStencilState, MTLDevice, MTLLibrary, MTLSamplerState, MTLTexture, OS_dispatch_queue, OS_dispatch_semaphore, PXGRendererDelegate, PXGTextureConverter;

@interface PXGMetalRenderer : NSObject <MTKViewDelegate, PXGMetalTextureConverterDelegate, PXGRenderer>
{
    struct os_unfair_lock_s _metalLock;
    id <MTLDevice> _device;
    MTKView *_metalView;
    id <MTLLibrary> _library;
    id <MTLCommandQueue> _commandQueue;
    id <MTLBuffer> _squareGeometryBuffer;
    id <MTLBuffer> _yCbCrMatricesBuffer;
    unsigned long long _lastOffscreenRender;
    id <MTLTexture> _offscreenTexture;
    _Bool _isCreatingOffscreenTexture;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <MTLSamplerState> _mirrorRepeatSampler;
    id <MTLSamplerState> _clampToZeroSampler;
    id <MTLDepthStencilState> _depthStencil;
    struct os_unfair_lock_s _pipelinesLock;
    CDStruct_39b4dbd3 *_pipelines;
    long long _pipelinesCount;
    long long _pipelinesCapacity;
    NSObject<OS_dispatch_queue> *_compilationQueue;
    NSObject<OS_dispatch_semaphore> *_inFlightSemaphore;
    NSMutableArray *_reusableRenderStates;
    PXGSpriteDataStore *_spriteRenderDataStore;
    long long _frameId;
    double _lastTime;
    PXGMetalRenderTextureStore *_opaqueTextures;
    PXGMetalRenderTextureStore *_translucentTextures;
    PXGMetalTextureConverter *_textureConverter;
    _Bool _didPerformFirstRender;
    _Bool _isInvertColorsEnabled;
    CDUnknownBlockType _test_renderSnapshotHandler;
    id <PXGRendererDelegate> _delegate;
    struct CGRect _visibleRect;
    CDStruct_a02a4563 _interactionState;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInvertColorsEnabled; // @synthesize isInvertColorsEnabled=_isInvertColorsEnabled;
@property(readonly, nonatomic) MTKView *metalView; // @synthesize metalView=_metalView;
@property(nonatomic) CDStruct_a02a4563 interactionState; // @synthesize interactionState=_interactionState;
@property(nonatomic) __weak id <PXGRendererDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType test_renderSnapshotHandler; // @synthesize test_renderSnapshotHandler=_test_renderSnapshotHandler;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
- (void)metalTextureConverter:(id)arg1 didCreateTexture:(id)arg2;
- (long long)_drawRenderTexture:(CDStruct_dcc83465 *)arg1 withCommandEncoder:(id)arg2;
- (void)_drawSpriteTextures:(id)arg1 renderState:(id)arg2 withCommandEncoder:(id)arg3 passingTest:(CDUnknownBlockType)arg4;
- (void)drawInMTKView:(id)arg1;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize)arg2;
- (void)_parseSpriteTextures:(id)arg1 willPerformOffscreenPass:(_Bool)arg2 renderState:(id)arg3;
- (void)_render:(id)arg1 withCompletionCompletion:(CDUnknownBlockType)arg2;
- (void)_configureCaptureSpriteTextures:(id)arg1 renderState:(id)arg2 withOffscreenTexture:(id)arg3;
- (id)_currentOffscreenTexture;
- (void)renderSpritesWithTextures:(id)arg1 dataStore:(id)arg2 presentationDataStore:(id)arg3 presentationMetadataStore:(id)arg4 layout:(id)arg5;
- (void)updateWithChangeDetails:(id)arg1;
- (void)releaseResources;
- (void)draw;
- (void)setNeedsRender;
@property(readonly, nonatomic) id <PXGTextureConverter> textureConverter;
- (id)view;
@property(readonly, nonatomic) int presentationType;
- (void)_populateEffectSprites:(id)arg1 spriteRenderDataStore:(id)arg2 presentationDataStore:(id)arg3 metadataStore:(id)arg4;
- (double)_screenScale;
- (void)_configureMatricesInUniforms:(CDStruct_b1513b2e *)arg1;
@property(readonly, nonatomic) CDStruct_183601bc camera;
@property(readonly, nonatomic) struct CGRect visibleRectInRenderCoordinates;
- (void)_clearPipelines;
- (void)_pipelinesLock_resizePipelinesStorageIfNeeded;
- (id)_createPipelineStateForColorProgram:(id)arg1 shaderFlags:(int)arg2 colorPixelFormat:(unsigned long long)arg3;
- (CDStruct_39b4dbd3)_handleCompiledRenderPipelineState:(id)arg1 forColorProgram:(id)arg2 shaderFlags:(int)arg3 colorPixelFormat:(unsigned long long)arg4 pipelineIndex:(long long)arg5;
- (CDStruct_39b4dbd3)_pipelineForRenderTexture:(const CDStruct_dcc83465 *)arg1 waitForCompilation:(_Bool)arg2;
- (void)_checkinRenderState:(id)arg1;
- (id)_checkoutRenderState;
@property(readonly, nonatomic) unsigned long long destinationColorSpaceName;
- (void)_setupYCbCrMatrices;
- (void)_setupSquareGeometryBuffer;
- (void)_setupConstantBuffers;
- (void)_setupMetalIfNeeded;
- (void)_loadOffscreenTexture:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

