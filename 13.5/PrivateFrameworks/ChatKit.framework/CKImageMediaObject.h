//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKMediaObject.h>

@class CKImageData, NSString, NSURL, PHLivePhoto, UIImage;

@interface CKImageMediaObject : CKMediaObject
{
    CKImageData *_imageData;
    CKImageData *_backgroundImageData;
    NSURL *_appendedBundleURL;
    struct CGSize _originalSize;
    NSString *_irisVideoPath;
    _Bool _isSticker;
    PHLivePhoto *_livePhoto;
    UIImage *_thumbnail;
}

+ (Class)imageDataClass;
+ (_Bool)isPreviewable;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isSticker; // @synthesize isSticker=_isSticker;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, nonatomic) PHLivePhoto *livePhoto; // @synthesize livePhoto=_livePhoto;
- (struct CGSize)originalSize;
@property(readonly, nonatomic) CKImageData *imageData;
- (id)previewItemTitle;
- (id)previewItemURL;
- (_Bool)canShareItem;
- (id)pasteboardItem;
- (id)_getIrisBundleLocation;
- (id)calculateIrisVideoPath;
- (id)getIrisVideoPath;
- (void)export:(id)arg1;
@property(readonly, nonatomic) _Bool isIrisAsset;
- (_Bool)canExport;
- (id)generateThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (_Bool)validatePreviewFormat;
- (struct CGSize)bbSize;
- (id)bbPreviewFillToSize:(struct CGSize)arg1;
- (id)location;
- (int)mediaType;
- (id)previewFilenameExtension;
- (id)initWithTransfer:(id)arg1 isFromMe:(_Bool)arg2 suppressPreview:(_Bool)arg3 forceInlinePreview:(_Bool)arg4;

@end

