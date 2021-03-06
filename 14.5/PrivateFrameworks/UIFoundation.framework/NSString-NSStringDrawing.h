//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (NSStringDrawing)
+ (double)defaultBaselineOffsetForFont:(id)arg1;
+ (double)defaultLineHeightForFont:(id)arg1;
+ (void)setTypesetterBehavior:(long long)arg1;
+ (long long)typesetterBehavior;
+ (float)hyphenationFactor;
+ (void)setHyphenationFactor:(float)arg1;
+ (_Bool)showsControlCharacters;
+ (void)setShowsControlCharacters:(_Bool)arg1;
+ (_Bool)showsInvisibleCharacters;
+ (void)setShowsInvisibleCharacters:(_Bool)arg1;
+ (void)setUsesScreenFonts:(_Bool)arg1;
+ (_Bool)usesScreenFonts;
+ (void)setUsesFontLeading:(_Bool)arg1;
+ (_Bool)usesFontLeading;
- (struct CGSize)sizeWithAttributes:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1 withAttributes:(id)arg2;
- (void)drawAtPoint:(struct CGPoint)arg1 withAttributes:(id)arg2;
- (struct CGSize)_sizeWithSize:(struct CGSize)arg1 attributes:(id)arg2;
- (_Bool)hasColorGlyphsInRange:(struct _NSRange)arg1 attributes:(id)arg2;
- (struct CGRect)boundingRectWithSize:(struct CGSize)arg1 options:(long long)arg2 attributes:(id)arg3;
- (void)drawWithRect:(struct CGRect)arg1 options:(long long)arg2 attributes:(id)arg3;
- (struct CGRect)boundingRectWithSize:(struct CGSize)arg1 options:(long long)arg2 attributes:(id)arg3 context:(id)arg4;
- (void)drawWithRect:(struct CGRect)arg1 options:(long long)arg2 attributes:(id)arg3 context:(id)arg4;
- (id)stringByStrippingLeadingAndTrailingWhitespaceAndQuotes;
@end

