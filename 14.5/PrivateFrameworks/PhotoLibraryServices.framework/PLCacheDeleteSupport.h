//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, PLPhotoLibrary;

@interface PLCacheDeleteSupport : NSObject
{
    PLPhotoLibrary *_photoLibrary;
    struct fsid _fsid;
    NSDate *_exitDeleteTime;
}

+ (id)_purgeableResourceDirectoriesForPathManager:(id)arg1;
+ (id)purgeableStateDescriptionForFile:(id)arg1;
+ (_Bool)isPurgeableFile:(id)arg1 outIsPhotoType:(_Bool *)arg2 outUrgencyLevel:(long long *)arg3;
+ (_Bool)clearPurgeableFlagsForAllResourcesInPhotoLibraryURL:(id)arg1;
+ (_Bool)markPurgeableForFileAtURL:(id)arg1 withUrgency:(long long)arg2 outInode:(unsigned long long *)arg3;
+ (void)registerNullHandler;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *exitDeleteTime; // @synthesize exitDeleteTime=_exitDeleteTime;
- (void)_markAsNotLocallyAvailableForResourcesWithFileIDsToPath:(id)arg1;
- (void)_rescanResourcesFromFileSystem;
- (_Bool)_isFilePurgedForFileID:(id)arg1 purgedPath:(id)arg2;
- (void)_processRemovedFiles:(id)arg1 inMountPoint:(id)arg2;
- (void)_installPurgeObserverAndProcessAlreadyRemovedFiles;
- (_Bool)clearPurgeableFlagsForAllResources;
- (_Bool)clearPurgeableFlagForResource:(id)arg1;
- (_Bool)markResourceAsPurgeable:(id)arg1 withUrgency:(long long)arg2;
- (void)dealloc;
- (void)invalidate;
- (id)initWithPhotoLibrary:(id)arg1 cplStatus:(id)arg2;

@end

