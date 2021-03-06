//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIWindow.h>

#import <UIKitCore/UISplitViewControllerDelegate-Protocol.h>

@class NSMutableArray, UIDebuggingInformationOverlayViewController, UIDebuggingInformationRootTableViewController, UIEvent;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationOverlay : UIWindow <UISplitViewControllerDelegate>
{
    _Bool _isFullscreen;
    _Bool _checkingTouches;
    _Bool _touchCaptureEnabled;
    NSMutableArray *_touchObservers;
    UIWindow *_inspectedWindow;
    UIEvent *_lastTouch;
    struct CGPoint _drawingOrigin;
}

+ (id)overlay;
+ (void)prepareDebuggingOverlay;
- (void).cxx_destruct;
@property(nonatomic) struct CGPoint drawingOrigin; // @synthesize drawingOrigin=_drawingOrigin;
@property(retain, nonatomic) UIEvent *lastTouch; // @synthesize lastTouch=_lastTouch;
@property(retain, nonatomic) UIWindow *inspectedWindow; // @synthesize inspectedWindow=_inspectedWindow;
@property(retain, nonatomic) NSMutableArray *touchObservers; // @synthesize touchObservers=_touchObservers;
@property(nonatomic) _Bool touchCaptureEnabled; // @synthesize touchCaptureEnabled=_touchCaptureEnabled;
@property(nonatomic) _Bool checkingTouches; // @synthesize checkingTouches=_checkingTouches;
@property(nonatomic) _Bool isFullscreen; // @synthesize isFullscreen=_isFullscreen;
@property(retain, nonatomic) UIDebuggingInformationRootTableViewController *rootTableViewController;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)toggleFullscreen;
- (void)toggleVisibility;
- (void)_setHidden:(_Bool)arg1;
@property(readonly, nonatomic) UIDebuggingInformationOverlayViewController *overlayViewController;
- (id)init;

@end

