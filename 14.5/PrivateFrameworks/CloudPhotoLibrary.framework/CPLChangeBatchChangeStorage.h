//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLChangeStorage.h>

@class CPLChangeBatch, NSDictionary, NSString;

@interface CPLChangeBatchChangeStorage : CPLChangeStorage
{
    NSDictionary *_changesPerScopedIdentifier;
    NSString *_storageDescription;
    CPLChangeBatch *_batch;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CPLChangeBatch *batch; // @synthesize batch=_batch;
- (id)storageDescription;
- (id)changesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (id)changeWithScopedIdentifier:(id)arg1;
- (id)initWithBatch:(id)arg1 name:(id)arg2;

@end

