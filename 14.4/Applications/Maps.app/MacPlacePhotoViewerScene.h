//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MacPlacePhotoViewerActionDelegate-Protocol.h"
#import "UISceneDelegate-Protocol.h"

@class MKMapItem, MacPlacePhotoViewerRootViewController, NSString, UIViewController, UIWindow;
@protocol MacPlacePhotoViewerSceneDelegate;

__attribute__((visibility("hidden")))
@interface MacPlacePhotoViewerScene : NSObject <UISceneDelegate, MacPlacePhotoViewerActionDelegate>
{
    UIWindow *_window;
    MacPlacePhotoViewerRootViewController *_rootViewController;
    id <MacPlacePhotoViewerSceneDelegate> _delegate;
}

+ (void)teardownCurrentScene;
+ (id)requestSceneActivation;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MacPlacePhotoViewerSceneDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MacPlacePhotoViewerRootViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) MKMapItem *mapItem;
@property(readonly, nonatomic) UIViewController *topmostViewController;
- (void)sceneDidDisconnect:(id)arg1;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)_destroyCurrentSceneIfNeeded;
- (void)_presentSceneWithMapItem:(id)arg1 rootViewController:(id)arg2 delegate:(id)arg3;
- (void)openPhotoGalleryWithGalleryViewController:(id)arg1 mapItem:(id)arg2 sceneDelegate:(id)arg3 delegate:(id)arg4;
- (void)openPhotoGalleryWithMapItem:(id)arg1 sceneDelegate:(id)arg2 context:(long long)arg3 delegate:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

