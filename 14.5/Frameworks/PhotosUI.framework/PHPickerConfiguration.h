//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSCopying-Protocol.h>

@class PHPhotoLibrary, PHPickerFilter;

@interface PHPickerConfiguration : NSObject <NSCopying>
{
    long long _preferredAssetRepresentationMode;
    long long _selectionLimit;
    PHPickerFilter *_filter;
    PHPhotoLibrary *_photoLibrary;
    unsigned long long _resultOptions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long resultOptions; // @synthesize resultOptions=_resultOptions;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(copy, nonatomic) PHPickerFilter *filter; // @synthesize filter=_filter;
@property(nonatomic) long long selectionLimit; // @synthesize selectionLimit=_selectionLimit;
@property(nonatomic) long long preferredAssetRepresentationMode; // @synthesize preferredAssetRepresentationMode=_preferredAssetRepresentationMode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPhotoLibrary:(id)arg1 resultOptions:(unsigned long long)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;

@end

