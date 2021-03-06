//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpecManager.h>

@class NSArray, PXPhotosLayoutSpec;

@interface PXPhotosLayoutSpecManager : PXFeatureSpecManager
{
    _Bool _sectionHeadersEnabled;
    NSArray *_availableThumbnailSizes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool sectionHeadersEnabled; // @synthesize sectionHeadersEnabled=_sectionHeadersEnabled;
@property(retain, nonatomic) NSArray *availableThumbnailSizes; // @synthesize availableThumbnailSizes=_availableThumbnailSizes;
- (_Bool)shouldUpdateSpecForExtendedTraitCollection:(id)arg1 change:(unsigned long long)arg2;
- (id)createSpec;
- (Class)specClass;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 enableSectionHeaders:(_Bool)arg3;

// Remaining properties
@property(readonly, nonatomic) PXPhotosLayoutSpec *spec; // @dynamic spec;

@end

