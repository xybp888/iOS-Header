//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class CEKSlider;

@protocol CEKSliderDelegate <NSObject>

@optional
- (void)sliderDidEndScrolling:(CEKSlider *)arg1;
- (void)sliderWillEndScrolling:(CEKSlider *)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)slider:(CEKSlider *)arg1 willUpdateValue:(double *)arg2 withVelocity:(double)arg3;
- (void)sliderDidScroll:(CEKSlider *)arg1;
- (void)sliderWillBeginScrolling:(CEKSlider *)arg1;
@end

