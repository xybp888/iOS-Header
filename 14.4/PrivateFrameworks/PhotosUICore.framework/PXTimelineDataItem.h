//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHAssetCollection, PXTimelineCrop;

@interface PXTimelineDataItem : NSObject
{
    PXTimelineCrop *_suggestedCrop;
    PHAssetCollection *_assetCollection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(retain, nonatomic) PXTimelineCrop *suggestedCrop; // @synthesize suggestedCrop=_suggestedCrop;
- (id)initWithAssetCollection:(id)arg1 suggestedCrop:(id)arg2;

@end

