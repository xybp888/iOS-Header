//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import <WebApp/UIWindowSceneDelegate-Protocol.h>

@class NSString, UIWindow, WebAppViewController;

__attribute__((visibility("hidden")))
@interface WebAppSceneDelegate : UIResponder <UIWindowSceneDelegate>
{
    WebAppViewController *_webApp;
    UIWindow *_window;
    _Bool _wasSuspendedUnderLock;
    _Bool _sceneHasEverEnteredForeground;
}

- (void).cxx_destruct;
- (void)_tearDownWindowAndWebApp;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneDidDisconnect:(id)arg1;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

