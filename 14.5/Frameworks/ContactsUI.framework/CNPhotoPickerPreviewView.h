//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerPreviewView : UIView
{
    UIView *_previewView;
    UIView *_thumbnailContentView;
    CAShapeLayer *_clippingLayer;
}

+ (id)pickerPreviewWithFrame:(struct CGRect)arg1 forItem:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *clippingLayer; // @synthesize clippingLayer=_clippingLayer;
@property(retain, nonatomic) UIView *thumbnailContentView; // @synthesize thumbnailContentView=_thumbnailContentView;
@property(readonly, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
- (void)updatePreviewWithItem:(id)arg1;
- (void)setupPreview;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

