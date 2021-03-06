//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMCameraClipFetchAssetContextOperationDataSource-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMCameraClipFetchAssetContextOperationDataSource : NSObject <HMCameraClipFetchAssetContextOperationDataSource>
{
}

- (id)createVideoFileCombinerWithVideoFileURLs:(id)arg1 queue:(id)arg2;
- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (id)createTemporaryDirectoryAppropriateForURL:(id)arg1 error:(id *)arg2;
- (id)outputStreamToFileAtURL:(id)arg1 shouldAppend:(_Bool)arg2;
- (_Bool)writeData:(id)arg1 toFileURL:(id)arg2 error:(id *)arg3;
- (id)dataFromEncryptedDataContext:(id)arg1 usingDecryptionManager:(id)arg2;
- (id)dataTaskWithURL:(id)arg1 httpHeaderFields:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

