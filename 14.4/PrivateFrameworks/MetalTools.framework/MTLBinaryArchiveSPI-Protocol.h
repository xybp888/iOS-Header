//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLBinaryArchive-Protocol.h>

@class MTLBinaryEntry, MTLBinaryKey, MTLComputePipelineDescriptor, MTLRenderPipelineDescriptor, MTLTileRenderPipelineDescriptor, NSArray, NSString, NSURL;

@protocol MTLBinaryArchiveSPI <MTLBinaryArchive>
@property(readonly) NSArray *keys;
@property(readonly) unsigned long long options;
- (_Bool)addTileRenderPipelineFunctionsWithDescriptor:(MTLTileRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)addRenderPipelineFunctionsWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)addComputePipelineFunctionsWithDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (NSString *)formattedDescription:(unsigned long long)arg1;
- (_Bool)serializeToURL:(NSURL *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (MTLBinaryEntry *)getBinaryDataForKey:(MTLBinaryKey *)arg1;
- (void)addBinaryEntry:(MTLBinaryEntry *)arg1 forKey:(MTLBinaryKey *)arg2;
@end

