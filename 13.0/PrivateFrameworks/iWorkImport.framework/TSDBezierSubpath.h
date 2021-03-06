//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, TSDBezierNode, TSUBezierPath;

__attribute__((visibility("hidden")))
@interface TSDBezierSubpath : NSObject
{
    NSMutableArray *mNodes;
    _Bool mClosed;
}

@property(nonatomic, getter=isClosed) _Bool closed; // @synthesize closed=mClosed;
@property(copy, nonatomic) NSArray *nodes; // @synthesize nodes=mNodes;
- (void).cxx_destruct;
- (void)convertToHobby;
- (id)splitEdgeAtIndex:(unsigned long long)arg1 atPercentage:(double)arg2;
- (void)addNodesToArray:(id)arg1;
@property(readonly, nonatomic) _Bool closeIfEndpointsAreEqual;
- (void)smoothNode:(id)arg1;
- (void)sharpenAllNodes;
@property(readonly, nonatomic) struct CGRect nodeBounds;
- (id)bezierNodeUnderPoint:(struct CGPoint)arg1 withTransform:(struct CGAffineTransform)arg2 andTolerance:(double)arg3 returningType:(long long *)arg4;
- (double)distanceToPoint:(struct CGPoint)arg1 elementIndex:(unsigned long long *)arg2 tValue:(double *)arg3 threshold:(double)arg4;
- (void)deselectAllNodes;
- (void)selectAllNodes;
- (void)deleteSelectedNodes;
@property(readonly, nonatomic) _Bool canDeleteSelectedNodes;
@property(readonly, nonatomic) _Bool hasSelectedNode;
@property(readonly, nonatomic) _Bool allNodesSelected;
- (void)offsetSelectedEdgesByDelta:(struct CGPoint)arg1;
- (void)offsetSelectedNodesByDelta:(struct CGPoint)arg1;
@property(readonly, nonatomic) TSDBezierNode *lastNode;
@property(readonly, nonatomic) TSDBezierNode *firstNode;
- (id)nodeAfterNode:(id)arg1;
- (id)nodePriorToNode:(id)arg1;
- (void)removeLastNode;
- (void)removeNode:(id)arg1;
- (void)addNode:(id)arg1;
- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg1;
- (void)reverseDirection;
- (void)updateReflectedState;
- (void)appendToBezierPath:(id)arg1;
- (void)appendToBezierPath:(id)arg1 selectedNodesOnly:(_Bool)arg2 fromIndex:(unsigned long long)arg3;
@property(readonly, nonatomic) TSUBezierPath *bezierPath;
- (_Bool)isCircular;
@property(readonly, nonatomic) _Bool isRectangular;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)addTemporarySmoothNodes;
- (void)removeTemporaryNodes;
- (void)updateSmoothNodes;
- (void)updateSmoothNodes:(id)arg1 addTemporaryNodes:(_Bool)arg2;
- (long long)updateSmoothNodes:(id)arg1 from:(long long)arg2 to:(long long)arg3 closed:(_Bool)arg4 addTemporaryNodes:(_Bool)arg5;
- (void)morphWithMorphInfo:(id)arg1;
- (struct CGPoint)calculateNewControlFromOriginalDelta:(struct CGPoint)arg1 currentDelta:(struct CGPoint)arg2 originalSmoothDelta:(struct CGPoint)arg3 node:(struct CGPoint)arg4;
- (void)smoothAllNodes;

@end

