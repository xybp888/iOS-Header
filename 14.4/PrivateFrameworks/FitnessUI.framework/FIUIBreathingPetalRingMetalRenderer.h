//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FitnessUI/MTKViewDelegate-Protocol.h>

@class MISSING_TYPE, MTKView, NSString;
@protocol MTLBuffer, MTLCommandQueue, MTLDevice, MTLRenderPipelineState, MTLTexture;

@interface FIUIBreathingPetalRingMetalRenderer : NSObject <MTKViewDelegate>
{
    MTKView *_mtkView;
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    struct {
        int numberOfPetals;
        int showBlurTrails;
        MISSING_TYPE *circlePosition[20];
        MISSING_TYPE *circleProperties[20];
        MISSING_TYPE *textureRotationVector;
    } _uniforms;
    struct {
        MISSING_TYPE *position__coordinate;
    } _vertexData[25];
    struct {
        MISSING_TYPE *columns[4];
    } _projectionMatrix;
    id <MTLBuffer> _indexBuffer;
    id <MTLTexture> _circleGradient;
    id <MTLRenderPipelineState> _renderPipeline;
    MISSING_TYPE *_ringCenterVector;
    long long _numberOfPetals;
    _Bool _showBlurTrails;
    float _ringRadius;
    long long _numberOfVisiblePetals;
    CDUnknownBlockType _stateUpdateBlock;
    struct CGPoint _ringCenter;
    CDStruct_7104cd25 _circleProperties;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType stateUpdateBlock; // @synthesize stateUpdateBlock=_stateUpdateBlock;
@property(nonatomic) CDStruct_cb976e3b circleProperties; // @synthesize circleProperties=_circleProperties;
@property(readonly, nonatomic) long long numberOfVisiblePetals; // @synthesize numberOfVisiblePetals=_numberOfVisiblePetals;
@property(nonatomic) struct CGPoint ringCenter; // @synthesize ringCenter=_ringCenter;
@property(nonatomic) float ringRadius; // @synthesize ringRadius=_ringRadius;
- (void)drawInMTKView:(id)arg1;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize)arg2;
- (void)_updateVertices;
- (double)_maxPetalRingRadius;
- (void)_setCircleAtIndex:(long long)arg1 center:(struct CGPoint)arg2 radius:(float)arg3 blurriness:(float)arg4 alpha:(float)arg5;
- (void)setPetalAtIndex:(long long)arg1 center:(struct CGPoint)arg2 radius:(float)arg3 alpha:(float)arg4;
- (void)setBlurTrailAtIndex:(long long)arg1 center:(struct CGPoint)arg2 radius:(float)arg3 blurriness:(float)arg4 alpha:(float)arg5;
- (void)setGradientRotationAngle:(float)arg1;
- (void)_clearCirclesInRange:(struct _NSRange)arg1;
- (void)setNumberOfVisiblePetals:(long long)arg1 showBlurTrails:(_Bool)arg2;
- (void)importDataFromPetalRingMetalRenderer:(id)arg1;
- (void)_setupRenderPipeline;
- (void)_setupVertices;
- (void)_setupProjectionMatrixForSize:(struct CGSize)arg1;
- (void)_setupIndexes;
- (void)_createBuffers;
- (void)_loadTextures;
- (id)initWithMetalKitView:(id)arg1 numberOfPetals:(long long)arg2 showBlurTrails:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

