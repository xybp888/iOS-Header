//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/NSObject-Protocol.h>

@class CPLResource, NSData, NSDictionary, NSError, NSString;

@protocol CPLClientLibraryManagerProtocol <NSObject>
- (void)libraryManagerHasBeenReplaced;
- (void)pushAllChangesWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)provideLocalResource:(CPLResource *)arg1 recordClassString:(NSString *)arg2 completionHandler:(void (^)(CPLResource *, unsigned long long))arg3;
- (void)forceSyncDidFinishForTask:(NSString *)arg1 withErrors:(NSDictionary *)arg2;
- (void)libraryManagerDidUpdateSizeOfResourcesToUploadToSize:(unsigned long long)arg1 sizeOfOriginalResourcesToUpload:(unsigned long long)arg2 numberOfImages:(unsigned long long)arg3 numberOfVideos:(unsigned long long)arg4 numberOfOtherItems:(unsigned long long)arg5;
- (void)libraryManagerDidUpdateStatusWithProperties:(NSDictionary *)arg1;
- (void)libraryManagerHasStatusChanges;
- (void)libraryManagerHasChangesToPull;
- (void)uploadOfResource:(CPLResource *)arg1 didFinishForResourceTransferTask:(NSString *)arg2 withError:(NSError *)arg3;
- (void)uploadOfResource:(CPLResource *)arg1 didProgress:(float)arg2 forResourceTransferTask:(NSString *)arg3;
- (void)uploadDidStartForResource:(CPLResource *)arg1 withResourceTransferTask:(NSString *)arg2;
- (void)backgroundDownloadDidFailForResource:(CPLResource *)arg1;
- (void)backgroundDownloadDidFinishForResource:(CPLResource *)arg1;
- (void)inMemoryDownloadDidFinishForResourceTransferTask:(NSString *)arg1 data:(NSData *)arg2 withError:(NSError *)arg3;
- (void)downloadDidFinishForResourceTransferTask:(NSString *)arg1 finalResource:(CPLResource *)arg2 withError:(NSError *)arg3;
- (void)downloadDidProgress:(float)arg1 forResourceTransferTask:(NSString *)arg2;
- (void)downloadDidStartForResourceTransferTask:(NSString *)arg1;
@end

