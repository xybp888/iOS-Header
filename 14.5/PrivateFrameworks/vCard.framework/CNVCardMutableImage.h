//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <vCard/CNVCardImage.h>

@class NSData, NSDictionary, NSNumber, NSValue;

@interface CNVCardMutableImage : CNVCardImage
{
    NSData *_originalData;
    NSDictionary *_originalCropRects;
    struct CGSize _originalSize;
    struct CGImage *_CGImage;
    _Bool _attemptedCGImage;
    NSValue *_targetSizeValue;
    NSNumber *_compressionQuality;
    struct __CFString *_sourceImageFormatUTI;
}

+ (struct CGRect)scaleRect:(struct CGRect)arg1 byFactor:(double)arg2;
+ (id)scaleCropRects:(id)arg1 factor:(double)arg2;
+ (id)CGImageCreateWithData:(id)arg1 maxSizeValue:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) struct __CFString *sourceImageFormatUTI; // @synthesize sourceImageFormatUTI=_sourceImageFormatUTI;
@property(copy, nonatomic) NSValue *targetSizeValue; // @synthesize targetSizeValue=_targetSizeValue;
@property(readonly, nonatomic) struct CGSize originalSize; // @synthesize originalSize=_originalSize;
@property(readonly, nonatomic) NSDictionary *originalCropRects; // @synthesize originalCropRects=_originalCropRects;
@property(readonly, nonatomic) _Bool attemptedCGImage; // @synthesize attemptedCGImage=_attemptedCGImage;
@property(readonly, nonatomic) struct CGImage *CGImage; // @synthesize CGImage=_CGImage;
@property(readonly, copy, nonatomic) NSData *originalData; // @synthesize originalData=_originalData;
- (_Bool)shouldReturnPNG;
- (id)renderCGImage:(struct CGImage *)arg1;
- (void)nts_updateRepresentation;
- (void)nts_initCGImage;
- (id)cropRects;
- (void)nts_invalidateImageQuality;
@property(copy, nonatomic) NSNumber *compressionQuality; // @synthesize compressionQuality=_compressionQuality;
- (void)nts_invalidateImageSize;
@property(nonatomic) struct CGSize size;
- (_Bool)hasAlphaChannel;
- (_Bool)isSourceLossless;
- (id)data;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)describePropertiesWithBuilder:(id)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1 cropRects:(id)arg2 size:(struct CGSize)arg3;

@end

