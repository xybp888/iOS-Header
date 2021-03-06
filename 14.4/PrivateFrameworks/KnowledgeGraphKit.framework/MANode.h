//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <KnowledgeGraphKit/KGNode-Protocol.h>
#import <KnowledgeGraphKit/MAElement-Protocol.h>
#import <KnowledgeGraphKit/NSCopying-Protocol.h>

@class MABaseGraph, MAGraphReference, NSArray, NSDictionary, NSString;
@protocol MANodeImplementationProtocol;

@interface MANode : NSObject <KGNode, MAElement, NSCopying>
{
    unsigned int _identifier;
    MAGraphReference *_graphReference;
    id <MANodeImplementationProtocol> _implementation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MANodeImplementationProtocol> implementation; // @synthesize implementation=_implementation;
@property(retain, nonatomic) MAGraphReference *graphReference; // @synthesize graphReference=_graphReference;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
- (unsigned long long)memoryFootprint:(id)arg1;
- (void)removeEdge:(id)arg1;
- (void)addEdge:(id)arg1;
- (id)associatedNodesForRemoval;
- (id)visualStringWithName:(id)arg1 andPropertyKeys:(id)arg2;
- (id)visualStringWithName:(id)arg1;
- (id)visualString;
- (void)updatePersistedWeight:(float)arg1;
- (id)shortestPathToNode:(id)arg1 directed:(_Bool)arg2;
- (void)enumerateSiblingNodesThroughEdgesWithDomains:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateSiblingNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)siblingNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2;
- (void)enumerateSiblingNodesThroughEdgesWithLabel:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)siblingNodesThroughEdgesWithLabel:(id)arg1;
- (id)anyNeighborNodeThroughInEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2;
- (id)anyNeighborNodeThroughInEdges;
- (id)anyNeighborNodeThroughOutEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2;
- (id)anyNeighborNodeThroughOutEdges;
- (id)anyNeighborNodeThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2;
- (id)anyNeighborNodeThroughEdgesWithLabel:(id)arg1;
- (id)neighborNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2;
- (id)neighborNodesThroughEdgesWithLabel:(id)arg1;
- (id)neighborNodesWithLabel:(id)arg1 domain:(unsigned short)arg2;
- (id)neighborNodesThroughInEdges;
- (id)neighborNodesThroughOutEdges;
- (id)neighborNodes;
- (_Bool)hasEdge:(id)arg1 isIn:(_Bool *)arg2;
- (void)enumerateDeepNeighborsWithLabel:(id)arg1 domain:(unsigned short)arg2 edgeType:(unsigned long long)arg3 excluding:(id)arg4 shouldStop:(_Bool *)arg5 block:(CDUnknownBlockType)arg6;
- (void)enumerateNeighborNodesThroughInEdgesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateNeighborNodesThroughOutEdgesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateNeighborNodesThroughEdgesWithDomains:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateNeighborNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateNeighborNodesThroughEdgesWithLabel:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateNeighborNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateNeighborNodesThroughEdgesOfType:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateNeighborNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateEdgesWithDomains:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateEdgesWithLabel:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateOutEdgesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateInEdgesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateEdgesOfType:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateEdgesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasEdgeWithLabel:(id)arg1 domain:(unsigned short)arg2;
- (_Bool)hasEdgeWithLabel:(id)arg1;
- (id)anyEdgeWithLabel:(id)arg1 domain:(unsigned short)arg2;
- (id)anyEdgeWithLabel:(id)arg1;
- (unsigned long long)countOfEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2;
- (unsigned long long)countOfEdgesWithLabel:(id)arg1;
- (id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2;
- (id)edgesForLabel:(id)arg1;
- (id)allEdges;
- (id)anyEdgeWithNode:(id)arg1;
- (id)anyEdgeFromNode:(id)arg1;
- (id)anyEdgeTowardNode:(id)arg1;
- (id)edgesWithNode:(id)arg1;
- (id)edgesFromNode:(id)arg1;
- (id)edgesTowardNode:(id)arg1;
- (_Bool)hasEdgeWithNode:(id)arg1;
- (_Bool)hasEdgeFromNode:(id)arg1;
- (_Bool)hasEdgeTowardNode:(id)arg1;
- (unsigned long long)outEdgesCount;
- (unsigned long long)inEdgesCount;
- (unsigned long long)edgesCount;
- (_Bool)isUnique;
- (_Bool)isOrphan;
- (void)mergeProperties:(id)arg1;
- (void)setLocalProperties:(id)arg1;
- (id)propertyDictionary;
- (id)propertyKeys;
- (unsigned long long)propertiesCount;
- (_Bool)hasProperties;
- (void)setProperties:(id)arg1;
- (void)setPropertyValue:(id)arg1 forKey:(id)arg2;
- (void)removeAllProperties;
- (void)removePropertyForKey:(id)arg1;
- (void)enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)isIdentifiedByProperties:(id)arg1;
- (id)propertyForKey:(id)arg1 kindOfClass:(Class)arg2;
- (id)propertyForKey:(id)arg1;
- (_Bool)hasProperties:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (_Bool)matchesNode:(id)arg1 includingProperties:(_Bool)arg2;
- (_Bool)isEqualToNode:(id)arg1;
- (_Bool)isSameNodeAsNode:(id)arg1;
- (_Bool)hasEqualPropertiesToNode:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)shortDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) __weak MABaseGraph *graph;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3;
@property(readonly, copy, nonatomic) NSDictionary *properties;
@property(readonly, copy, nonatomic) NSArray *labels;
- (id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4;
- (_Bool)conformsToNodeSchema:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) unsigned short domain; // @dynamic domain;
@property(readonly, copy, nonatomic) NSString *label; // @dynamic label;
@property(readonly) Class superclass;
@property(nonatomic) float weight; // @dynamic weight;

@end

