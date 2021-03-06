//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, UIImage;

@interface ICAttachmentBrickImageViewV2 : UIView
{
    _Bool _transparentBackground;
    UIImage *_image;
    unsigned long long _imageScaling;
    CALayer *_imageLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(nonatomic) _Bool transparentBackground; // @synthesize transparentBackground=_transparentBackground;
@property(nonatomic) unsigned long long imageScaling; // @synthesize imageScaling=_imageScaling;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)updateBackgroundColor;
- (void)setContentsScale:(double)arg1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)updateSublayersBounds:(struct CGRect)arg1;
@property(nonatomic) double cornerRadius; // @dynamic cornerRadius;
- (id)initWithFrame:(struct CGRect)arg1;

@end

