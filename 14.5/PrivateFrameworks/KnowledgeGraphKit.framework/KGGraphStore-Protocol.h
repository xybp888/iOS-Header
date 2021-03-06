//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KnowledgeGraphKit/NSObject-Protocol.h>

@class KGEdgeFilter, KGElementCollection, KGElementIdentifierSet, KGEntityDescription, KGNodeFilter, NSArray, NSDictionary, NSSet, NSString, NSURL, NSUUID;

@protocol KGGraphStore <NSObject>
+ (NSString *)persistentStoreFileExtension;
+ (void)deleteMarkerForDiskRepresentationAtURL:(NSURL *)arg1;
+ (_Bool)setMarkerForDiskRepresentationAtURL:(NSURL *)arg1;
+ (_Bool)hasMarkerForDiskRepresentationAtURL:(NSURL *)arg1;
+ (_Bool)destroyAtURL:(NSURL *)arg1 error:(id *)arg2;
+ (_Bool)migrateFromURL:(NSURL *)arg1 toURL:(NSURL *)arg2 error:(id *)arg3;
+ (_Bool)copyFromURL:(NSURL *)arg1 toURL:(NSURL *)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSUUID *graphIdentifier;
@property(nonatomic) unsigned long long graphVersion;
@property(readonly, nonatomic) KGEntityDescription *entityDescription;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) _Bool hasMarker;
- (_Bool)updateEdgeForIdentifier:(unsigned long long)arg1 withProperties:(NSDictionary *)arg2 error:(id *)arg3;
- (_Bool)updateEdgeForIdentifier:(unsigned long long)arg1 withWeight:(float)arg2 error:(id *)arg3;
- (_Bool)updateNodeForIdentifier:(unsigned long long)arg1 withProperties:(NSDictionary *)arg2 error:(id *)arg3;
- (_Bool)updateNodeForIdentifier:(unsigned long long)arg1 withWeight:(float)arg2 error:(id *)arg3;
- (_Bool)removeEdgesForIdentifiers:(KGElementIdentifierSet *)arg1 error:(id *)arg2;
- (_Bool)removeNodesForIdentifiers:(KGElementIdentifierSet *)arg1 error:(id *)arg2;
- (_Bool)removeEdgeForIdentifier:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)removeNodeForIdentifier:(unsigned long long)arg1 error:(id *)arg2;
- (KGElementIdentifierSet *)neighborNodeIdentifiersWithStartNodeIdentifiers:(KGElementIdentifierSet *)arg1 edgeDirection:(unsigned long long)arg2 edgeFilter:(KGEdgeFilter *)arg3 error:(id *)arg4;
- (KGElementIdentifierSet *)edgeIdentifiersWithStartNodeIdentifiers:(KGElementIdentifierSet *)arg1 edgeDirection:(unsigned long long)arg2 error:(id *)arg3;
- (KGElementIdentifierSet *)edgeIdentifiersMatchingFilter:(KGEdgeFilter *)arg1 intersectingIdentifiers:(KGElementIdentifierSet *)arg2 error:(id *)arg3;
- (KGElementIdentifierSet *)nodeIdentifiersMatchingFilter:(KGNodeFilter *)arg1 intersectingIdentifiers:(KGElementIdentifierSet *)arg2 error:(id *)arg3;
- (KGElementCollection *)edgesForIdentifiers:(KGElementIdentifierSet *)arg1 error:(id *)arg2;
- (KGElementCollection *)nodesForIdentifiers:(KGElementIdentifierSet *)arg1 error:(id *)arg2;
- (NSArray *)arrayOfEdgesWithIdentifiers:(KGElementIdentifierSet *)arg1 error:(id *)arg2;
- (NSArray *)arrayOfNodesWithIdentifiers:(KGElementIdentifierSet *)arg1 error:(id *)arg2;
- (unsigned long long)addEdgeWithLabels:(NSArray *)arg1 weight:(float)arg2 properties:(NSDictionary *)arg3 sourceNodeIdentifier:(unsigned long long)arg4 targetNodeIdentifier:(unsigned long long)arg5 error:(id *)arg6;
- (unsigned long long)addNodeWithLabels:(NSArray *)arg1 weight:(float)arg2 properties:(NSDictionary *)arg3 error:(id *)arg4;
- (NSSet *)edgeLabels;
- (NSSet *)nodeLabels;
- (void)deleteMarker;
- (void)setMarker;
- (_Bool)copyToURL:(NSURL *)arg1 error:(id *)arg2;
- (void)close;
- (void)commitTransaction;
- (void)beginTransaction;
- (_Bool)openWithMode:(unsigned long long)arg1 error:(id *)arg2;
@end

