//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPMediaPickerRemoteViewLoader-Protocol.h>

@class MPMediaPickerController, MPMusicMediaPickerRemoteViewController, NSString, UIViewController, _UIResilientRemoteViewContainerViewController;

__attribute__((visibility("hidden")))
@interface MPMediaPickerController_Appex : NSObject <MPMediaPickerRemoteViewLoader>
{
    _UIResilientRemoteViewContainerViewController *_remoteViewContainerViewController;
    MPMusicMediaPickerRemoteViewController *_musicRemoteViewController;
    MPMediaPickerController *_mediaPickerController;
    UIViewController *_remoteViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MPMediaPickerController *mediaPickerController; // @synthesize mediaPickerController=_mediaPickerController;
- (id)serviceController;
- (void)dealloc;
- (void)synchronizeSettings;
@property(readonly, nonatomic) UIViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
- (void)requestRemoteViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

