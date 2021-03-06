//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PLSyncContext;

@interface PLCPLFacePushSupport : NSObject
{
    id <PLSyncContext> _syncContext;
}

+ (void)markSyncableFacesAsPushedInAsset:(id)arg1;
+ (_Bool)_shouldPushBeingKeyFace:(id)arg1;
+ (_Bool)isFaceSyncable:(id)arg1;
+ (void)applyFaceChangesFromAsset:(id)arg1 toAssetChange:(id)arg2 inPhotoLibrary:(id)arg3;
- (void).cxx_destruct;
- (id)rejectedPersonIdentifiersForFace:(id)arg1;
- (id)cplFaceRefFromFace:(id)arg1;
- (id)cplFaceRefsFromFaces:(id)arg1 algorithmVersion:(long long *)arg2;
- (id)_facesAdjustmentsFingerprintFromAsset:(id)arg1 assetChange:(id)arg2;
- (_Bool)_faceAnalysisWasPerformedOnLatestAdjustmentOfAsset:(id)arg1;
- (id)cplFaceAnalysisRefFromAsset:(id)arg1 algorithmVersion:(long long *)arg2;
- (void)applyFaceChangesFromAsset:(id)arg1 toAssetChange:(id)arg2;
- (id)initWithSyncContext:(id)arg1;

@end

