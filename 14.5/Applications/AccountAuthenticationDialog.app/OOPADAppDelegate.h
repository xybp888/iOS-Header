//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "OOPAWebViewControllerDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"

@class NSDictionary, NSString, NSXPCConnection, OOPAWebViewController, UINavigationController, UIWindow;

@interface OOPADAppDelegate : UIResponder <UIApplicationDelegate, OOPAWebViewControllerDelegate>
{
    NSXPCConnection *_connectionToDialogManager;
    OOPAWebViewController *_webViewController;
    UINavigationController *_navViewController;
    _Bool _cachedSuccess;
    NSDictionary *_cachedResponse;
    UIWindow *_window;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)_disconnectFromAuthenticationDialogManager;
- (void)_connectToAuthenticationDialogManager;
- (id)_dialogManager;
- (void)webViewController:(id)arg1 didFinishWithSuccess:(_Bool)arg2 response:(id)arg3;
- (_Bool)canShowAlerts;
- (void)_remoteSheetDidEnd;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

