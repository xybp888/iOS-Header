//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class KGEdgeFilter, KGElementIdentifierSet, KGNodeFilter, NSArray;

@protocol KGTraversal
- (NSArray *)distribution;
- (KGElementIdentifierSet *)targetNodes;
- (_Bool)performTraversal:(id *)arg1;
- (void)addStepForEdgeDirection:(unsigned long long)arg1 edgeFilter:(KGEdgeFilter *)arg2 targetNodeFilter:(KGNodeFilter *)arg3;
- (void)setCountedPathsReportingMode;
- (void)setUncountedPathsReportingMode;
- (void)setTargetNodesOnlyReportingMode;
- (void)setTerminatingCondition:(KGNodeFilter *)arg1;
- (void)setVariableStepMode;
- (void)setStartingNodeFilter:(KGNodeFilter *)arg1;
- (void)setStartingNodes:(KGElementIdentifierSet *)arg1;
@end

