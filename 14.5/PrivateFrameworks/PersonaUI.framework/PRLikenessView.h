//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSData, PRImageView, PRLikeness, PRMonogramView;

@interface PRLikenessView : UIView
{
    _Bool _circular;
    PRMonogramView *_monogramView;
    PRImageView *_imageView;
    unsigned long long _likenessType;
    NSData *_recipe;
    struct CGRect _cropRect;
    struct CGImage *_staticRepresentation;
    _Bool _highlighted;
    _Bool _shouldDecode;
    PRLikeness *_likeness;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldDecode; // @synthesize shouldDecode=_shouldDecode;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isCircular) _Bool circular; // @synthesize circular=_circular;
@property(retain, nonatomic) PRLikeness *likeness; // @synthesize likeness=_likeness;
- (void)setNeedsRedraw;
- (void)layoutSubviews;
- (void)_setDisplayedView:(id)arg1;
- (_Bool)_isLikenessEqual:(id)arg1;
- (void)_imageForLikeness:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_imageView;
- (id)_monogramView;
- (_Bool)_shouldRenderStaticRepresentation;
- (void)_updateViewForLikeness:(_Bool)arg1;
- (void)dealloc;
- (id)initWithLikeness:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

