//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface PLCropOverlayCropView : UIView
{
    struct CGRect _cropRect;
    UIView *_aboveCropView;
    UIView *_cropRectView;
    UIView *_belowCropView;
}

- (void)_removeCropViews;
- (void)_updateCropRectIfNeeded;
- (void)setAlpha:(double)arg1;
- (struct CGRect)cropRect;
- (void)setFrame:(struct CGRect)arg1;
- (void)setCropRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

