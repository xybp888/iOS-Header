//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIPanGestureRecognizer.h>

@protocol _UIFocusEnginePanGestureRecognizerDelegate, _UIFocusEnginePanGestureTouchObserver;

__attribute__((visibility("hidden")))
@interface _UIFocusEnginePanGestureRecognizer : UIPanGestureRecognizer
{
    id <_UIFocusEnginePanGestureTouchObserver> _touchObserver;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <_UIFocusEnginePanGestureTouchObserver> touchObserver; // @synthesize touchObserver=_touchObserver;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <_UIFocusEnginePanGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end

