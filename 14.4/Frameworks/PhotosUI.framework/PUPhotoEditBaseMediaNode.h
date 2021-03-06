//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXRunNode.h>

#import <PhotosUI/PUImageDataNode-Protocol.h>
#import <PhotosUI/PUVideoAssetNode-Protocol.h>
#import <PhotosUI/PXRunNodeDelegate-Protocol.h>

@class AVAsset, NSArray, NSData, NSString, PUEditableMediaProviderAdjustmentDataNode, PUEditableMediaProviderImageDataNode, PUEditableMediaProviderVideoAssetNode;
@protocol PXRunNodeDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoEditBaseMediaNode : PXRunNode <PUImageDataNode, PUVideoAssetNode, PXRunNodeDelegate>
{
    PUEditableMediaProviderImageDataNode *_imageDataNode;
    PUEditableMediaProviderVideoAssetNode *_videoAssetNode;
    PXRunNode *_gatheringNode;
    NSData *_imageData;
    AVAsset *_videoAsset;
    PUEditableMediaProviderAdjustmentDataNode *_adjustmentNode;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PUEditableMediaProviderAdjustmentDataNode *adjustmentNode; // @synthesize adjustmentNode=_adjustmentNode;
@property(readonly, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (void)runNode:(id)arg1 didCompleteWithError:(id)arg2;
- (void)run;
- (id)initWithAdjustmentNode:(id)arg1;

// Remaining properties
@property(readonly, getter=isCanceled) _Bool canceled;
@property(readonly, getter=isComplete) _Bool complete;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <PXRunNodeDelegate> delegate;
@property(readonly, copy, nonatomic) NSArray *dependencies;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isRunning) _Bool running;
@property(readonly) unsigned long long state;
@property(readonly) Class superclass;
@property(readonly, getter=isWaiting) _Bool waiting;

@end

