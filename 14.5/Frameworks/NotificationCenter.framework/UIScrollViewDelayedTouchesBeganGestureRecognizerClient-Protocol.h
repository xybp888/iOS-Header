//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotificationCenter/NSObject-Protocol.h>

@class NSSet, UIEvent, UIView;

@protocol UIScrollViewDelayedTouchesBeganGestureRecognizerClient <NSObject>
@property(readonly, nonatomic, getter=_canScrollY) _Bool canScrollY;
@property(readonly, nonatomic, getter=_canScrollX) _Bool canScrollX;
@property(readonly, nonatomic, getter=_scrollHysteresis) double scrollHysteresis;
@property(readonly, nonatomic, getter=_touchDelayForScrollDetection) double touchDelayForScrollDetection;
@property(readonly, nonatomic) _Bool delaysContentTouches;
- (_Bool)touchesShouldBegin:(NSSet *)arg1 withEvent:(UIEvent *)arg2 inContentView:(UIView *)arg3;
@end

