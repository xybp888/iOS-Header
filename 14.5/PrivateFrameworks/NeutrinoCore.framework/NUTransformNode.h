//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderNode.h>

@interface NUTransformNode : NURenderNode
{
}

+ (id)transformNodeWithInput:(id)arg1 transform:(id)arg2 error:(out id *)arg3;
- (_Bool)canPropagateOriginalLivePhotoMetadataTrack;
- (_Bool)requiresVideoComposition;
- (id)descriptionSubClassHook;
- (id)_evaluateGeometrySpaceMap:(out id *)arg1;
- (id)_transformWithError:(out id *)arg1;
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (_Bool)isGeometryNode;

@end

