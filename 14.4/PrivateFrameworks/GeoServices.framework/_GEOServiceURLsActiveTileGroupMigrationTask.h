//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOActiveTileGroupMigrationTask-Protocol.h>

@class GEOActiveTileGroup, GEOActiveTileGroupMigrationTaskOptions, GEODataSetDescription, GEOReportedProgress, GEOResourceManifestConfiguration, GEOResources, GEOServiceURLsActiveTileGroupMigrator, GEOTileGroup, NSProgress, NSString;
@protocol NSObject;

__attribute__((visibility("hidden")))
@interface _GEOServiceURLsActiveTileGroupMigrationTask : NSObject <GEOActiveTileGroupMigrationTask>
{
    GEOServiceURLsActiveTileGroupMigrator *_migrator;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    GEOTileGroup *_newTileGroup;
    GEOResources *_resourceManifest;
    GEOActiveTileGroup *_oldTileGroup;
    GEODataSetDescription *_dataSetDescription;
    GEOReportedProgress *_progress;
    GEOActiveTileGroupMigrationTaskOptions *_options;
    id <NSObject> _transaction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <NSObject> transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) GEOActiveTileGroupMigrationTaskOptions *options; // @synthesize options=_options;
- (void)removeOldData:(id)arg1;
- (void)populateTileGroup:(id)arg1;
- (void)cancel;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
@property(readonly) NSProgress *progress;
@property(readonly, nonatomic) long long estimatedWeight;
- (id)initWithMigrator:(id)arg1 manifestConfiguration:(id)arg2 newTileGroup:(id)arg3 inResourceManifest:(id)arg4 oldTileGroup:(id)arg5 dataSet:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

