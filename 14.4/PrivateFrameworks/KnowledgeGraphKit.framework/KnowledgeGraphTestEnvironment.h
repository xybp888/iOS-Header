//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KGGraph;

@interface KnowledgeGraphTestEnvironment : NSObject
{
    KGGraph *_graph;
}

+ (id)testEnvironmentsForOnDiskExistingStores;
+ (id)testEnvironmentsForExistingStores;
+ (id)matisseGraphs;
+ (id)environmentWithTestDBWithStoreType:(Class)arg1;
+ (id)temporaryURLWithFileExtension:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) KGGraph *graph; // @synthesize graph=_graph;
- (unsigned long long)edgeCount;
- (unsigned long long)nodeCount;
- (void)populateGraph;
- (_Bool)deleteEdge:(id)arg1;
- (_Bool)deleteNode:(id)arg1;
- (id)refetchEdge:(id)arg1;
- (id)refetchNode:(id)arg1;
- (id)addEdgeWithLabels:(id)arg1 weight:(double)arg2 properties:(id)arg3 sourceNode:(id)arg4 targetNode:(id)arg5;
- (id)addNodeWithLabels:(id)arg1 weight:(double)arg2 properties:(id)arg3;
- (void)closeAndDeleteEnvironment;
- (id)initWithKGGraph:(id)arg1;

@end

