//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/NSObject-Protocol.h>

@class AKInkOverlayView, PKDrawing, UITouch;

@protocol AKInkOverlayViewDelegate <NSObject>
- (void)inputView:(AKInkOverlayView *)arg1 didCollectDrawingForAnalysis:(PKDrawing *)arg2;
- (void)inputViewDidBeginStroke:(AKInkOverlayView *)arg1;
- (_Bool)inputViewCanBeginDrawing:(AKInkOverlayView *)arg1 withTouch:(UITouch *)arg2;
@end

