//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsBinaryArchive.h>

@interface MTLDebugBinaryArchive : MTLToolsBinaryArchive
{
}

- (_Bool)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)serializeToURL:(id)arg1 error:(id *)arg2;
- (_Bool)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id *)arg2;
- (_Bool)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)addRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id *)arg2;
- (_Bool)addRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)addComputePipelineFunctionsWithDescriptor:(id)arg1 error:(id *)arg2;
- (_Bool)addComputePipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

@end

