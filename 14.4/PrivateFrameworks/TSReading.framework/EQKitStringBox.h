//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/EQKitBox.h>

@class NSAttributedString;

@interface EQKitStringBox : EQKitBox
{
    NSAttributedString *mAttributedString;
    struct __CTLine *mLine;
    double mHeight;
    double mDepth;
    double mWidth;
    struct CGRect mErasableBounds;
    _Bool mDimensionsValid;
    struct CGColor *mCGColor;
}

@property(readonly, nonatomic) struct CGColor *color; // @synthesize color=mCGColor;
@property(readonly, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=mAttributedString;
- (void)p_cacheDimensions;
- (id)description;
- (_Bool)appendOpticalAlignToSpec:(struct Spec *)arg1 offset:(struct CGPoint)arg2;
- (double)positionOfCharacterAtIndex:(unsigned long long)arg1;
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;
@property(readonly, nonatomic) struct __CTLine *line;
- (struct CGRect)erasableBounds;
@property(readonly, nonatomic) double width;
@property(readonly, nonatomic) double depth;
@property(readonly, nonatomic) double height;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithAttributedString:(id)arg1 cgColor:(struct CGColor *)arg2;

@end

