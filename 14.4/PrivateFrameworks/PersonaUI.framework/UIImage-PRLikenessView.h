//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (PRLikenessView)
+ (id)pr_imageWithCGImage:(struct CGImage *)arg1 cropRect:(struct CGRect)arg2;
+ (id)pr_imageWithCGImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 scale:(double)arg3;
+ (id)pr_imageWithCGImage:(struct CGImage *)arg1;
- (id)pr_circleImageWithCropRect:(struct CGRect)arg1;
- (id)pr_circleImageOfDiameter:(double)arg1 cropRect:(struct CGRect)arg2;
- (struct CGImage *)pr_imageRef;
@end

