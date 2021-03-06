//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CIImage, CUINamedVectorGlyph;

__attribute__((visibility("hidden")))
@interface _UIImageContent : NSObject
{
    double _scale;
    _Bool _isDecompressing;
    struct CGSize _sizeInPixels;
}

+ (id)empty;
@property(nonatomic) _Bool isDecompressing; // @synthesize isDecompressing=_isDecompressing;
@property(readonly, nonatomic) struct CGSize sizeInPixels; // @synthesize sizeInPixels=_sizeInPixels;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
- (id)debugQuickLookObject;
- (id)debugDescription;
- (struct CGImage *)_CGImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (void)_drawWithoutEffectInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (_Bool)_drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 effect:(id)arg3;
- (void)_prepareforDrawingInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (id)renditionWithSize:(struct CGSize)arg1 scale:(double)arg2 applyingEffect:(id)arg3;
- (id)renditionApplyingEffect:(id)arg1;
- (id)contentWithCGImage:(struct CGImage *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) double vectorScale;
@property(readonly, nonatomic) CUINamedVectorGlyph *vectorGlyph;
- (_Bool)isVectorGlyph;
- (struct CGSize)CGSVGDocumentSize;
- (_Bool)isCGSVGDocument;
@property(readonly, nonatomic) struct CGSVGDocument *CGSVGDocument;
- (struct CGSize)CGPDFPageSize;
- (_Bool)isCGPDFPage;
@property(readonly, nonatomic) struct CGPDFPage *CGPDFPage;
- (_Bool)isIOSurface;
@property(readonly, nonatomic) struct __IOSurface *IOSurface;
- (_Bool)isCIImage;
@property(readonly, nonatomic) CIImage *CIImage;
@property(readonly, nonatomic) struct CGImage *CGImage;
- (_Bool)canProvideFullResCGImage;
- (_Bool)_canProvideCGImageDirectly;
- (_Bool)canProvideCGImage;
- (_Bool)hasCGImage;
- (_Bool)isCGImage;
- (_Bool)isCGImageOnly;
- (id)initWithScale:(double)arg1;
- (id)init;

@end

