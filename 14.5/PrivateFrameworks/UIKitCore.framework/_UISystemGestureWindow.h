//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIRootWindow.h>

@class UISystemGestureView;

@interface _UISystemGestureWindow : _UIRootWindow
{
    UISystemGestureView *_systemGestureView;
}

+ (_Bool)_isSecure;
- (void).cxx_destruct;
- (id)_systemGestureView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_focusResponder;
- (_Bool)_canBecomeKeyWindow;
- (_Bool)_shouldPrepareScreenForWindow;
- (_Bool)_appearsInLoupe;
- (_Bool)_usesWindowServerHitTesting;
- (_Bool)_extendsScreenSceneLifetime;
- (id)initWithDisplayConfiguration:(id)arg1;
- (id)initWithScreen:(id)arg1;
- (id)initWithDisplay:(id)arg1;

@end

