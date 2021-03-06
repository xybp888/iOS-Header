//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSDrawables/TSDMagicMoveMatching-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, TSDCanvas, TSDLayout;
@protocol TSDInfo;

@interface TSDRep : NSObject <TSDMagicMoveMatching>
{
    TSDCanvas *mCanvas;
    TSDRep *mParentRep;
    NSMutableArray *mChildReps;
    NSDictionary *mTextureAnimationInfo;
    TSDLayout *mTemporaryMixingLayout;
    TSDLayout *mLayout;
    _Bool mHasBeenRemoved;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *textureAnimationInfo; // @synthesize textureAnimationInfo=mTextureAnimationInfo;
@property(nonatomic) __weak TSDRep *parentRep; // @synthesize parentRep=mParentRep;
@property(retain, nonatomic) TSDLayout *temporaryMixingLayout; // @synthesize temporaryMixingLayout=mTemporaryMixingLayout;
@property(readonly, nonatomic) __weak TSDCanvas *canvas; // @synthesize canvas=mCanvas;
- (id)p_comment;
@property(readonly, nonatomic) NSArray *hyperlinkRegions;
@property(readonly, nonatomic) _Bool wantsToDistortWithImagerContext;
@property(readonly, nonatomic) struct CGPoint centerForRotation;
@property(readonly, nonatomic) _Bool isLocked;
@property(readonly, nonatomic) _Bool isPlaceholder;
@property(readonly, nonatomic) double opacity;
@property(readonly, nonatomic) struct CGRect rectToClipChildRepRenderables;
@property(readonly, nonatomic) _Bool masksToBounds;
- (void)willBeRemoved;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)dynamicOverrideDidChange;
@property(readonly, nonatomic) NSObject *dynamicOverride;
@property(readonly, nonatomic) struct CGRect frameForMagicMove;
- (void)didDisplayTextureWithDescription:(id)arg1 isAtEndOfBuild:(_Bool)arg2;
- (void)enumerateChildTexturesForDescription:(id)arg1 passingTest:(CDUnknownBlockType)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)addChildTexturesToTextureSet:(id)arg1 forDescription:(id)arg2 passingTest:(CDUnknownBlockType)arg3;
- (void)updateHitTestingForTextureStage:(unsigned long long)arg1 isAtEndOfBuild:(_Bool)arg2;
- (id)textureForDescription:(id)arg1;
- (void)setTextureAttributes:(id)arg1 textureBounds:(struct CGRect)arg2;
- (struct CGAffineTransform)unRotatedTransform:(struct CGAffineTransform)arg1;
- (double)contentsScale;
- (_Bool)forcesPlacementOnTop;
@property(readonly, nonatomic) struct CGRect boundsForStandardKnobs;
- (void)willLayoutAndRenderInBackground;
- (void)i_configureFontSmoothingForContext:(struct CGContext *)arg1 layer:(id)arg2;
- (void)recursivelyDrawChildrenInContext:(struct CGContext *)arg1 keepingChildrenPassingTest:(CDUnknownBlockType)arg2;
- (void)recursivelyDrawInContext:(struct CGContext *)arg1 keepingChildrenPassingTest:(CDUnknownBlockType)arg2;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext *)arg2;
@property(readonly, nonatomic) struct CGRect i_clipRectRecursive;
@property(readonly, nonatomic) struct CGRect clipRect;
@property(readonly, nonatomic) _Bool isDrawingInFlippedContext;
- (void)updateFromLayout;
- (void)didAddChildRep:(id)arg1;
- (void)removeChildRep:(id)arg1;
- (void)p_setChildReps:(id)arg1;
- (void)updateChildrenFromLayout;
@property(readonly, nonatomic) NSArray *layoutsForChildReps;
- (struct CGRect)layerFrameInScaledCanvasRelativeToParent;
@property(readonly, nonatomic) struct CGRect i_layerFrameInScaledCanvasIgnoringDragging;
@property(readonly, nonatomic) struct CGRect layerFrameInScaledCanvas;
@property(readonly, nonatomic) struct CGRect frameInUnscaledCanvasIncludingChrome;
@property(readonly, nonatomic) struct CGRect captionFrameInUnscaledCanvas;
@property(readonly, nonatomic) struct CGRect titleFrameInUnscaledCanvas;
@property(readonly, nonatomic) struct CGRect frameInUnscaledCanvasForMarqueeSelecting;
@property(readonly, nonatomic) struct CGRect frameInUnscaledCanvas;
- (struct CGPoint)convertNaturalPointFromUnscaledCanvas:(struct CGPoint)arg1;
- (struct CGPoint)convertNaturalPointToUnscaledCanvas:(struct CGPoint)arg1;
- (const struct CGPath *)newPathInScaledCanvasFromNaturalRect:(struct CGRect)arg1;
- (struct CGRect)convertNaturalRectFromUnscaledCanvas:(struct CGRect)arg1;
- (struct CGRect)convertNaturalRectToUnscaledCanvas:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect naturalBounds;
@property(readonly, nonatomic) double angleInRoot;
- (void)addToSet:(id)arg1;
- (void)i_willBeRemoved;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
@property(readonly, nonatomic) NSArray *childReps;
@property(readonly, nonatomic) NSObject<TSDInfo> *info;
@property(readonly, nonatomic) TSDLayout *layout; // @synthesize layout=mLayout;
- (id)description;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
@property(readonly, nonatomic) struct CGRect i_partition_deepClipRect;

@end

