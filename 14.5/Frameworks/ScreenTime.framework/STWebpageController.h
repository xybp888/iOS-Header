//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, NSURL, STWebRemoteViewController;
@protocol STWebService;

@interface STWebpageController : UIViewController
{
    long long _currentUsageState;
    _Bool _suppressUsageRecording;
    _Bool _URLIsPlayingVideo;
    _Bool _URLIsPictureInPicture;
    _Bool _URLIsBlocked;
    _Bool _URLIsVisibleInForeground;
    NSURL *_URL;
    STWebRemoteViewController *_remoteViewController;
    NSString *_bundleIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property _Bool URLIsVisibleInForeground; // @synthesize URLIsVisibleInForeground=_URLIsVisibleInForeground;
@property(retain) STWebRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property _Bool URLIsBlocked; // @synthesize URLIsBlocked=_URLIsBlocked;
@property(nonatomic) _Bool URLIsPictureInPicture; // @synthesize URLIsPictureInPicture=_URLIsPictureInPicture;
@property(nonatomic) _Bool URLIsPlayingVideo; // @synthesize URLIsPlayingVideo=_URLIsPlayingVideo;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) _Bool suppressUsageRecording; // @synthesize suppressUsageRecording=_suppressUsageRecording;
- (void)_didChangePlaybackState:(id)arg1;
- (void)_didStopPictureInPicture:(id)arg1;
- (void)_willStartPictureInPicture:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
@property(readonly) _Bool URLIsPlayingVideoPictureInPicture;
@property(readonly) id <STWebService> serviceProxy;
- (void)_changeUsageState:(long long)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_setURL:(id)arg1 bundleIdentifier:(id)arg2 usageState:(long long)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)_startReportingWebUsage;
@property(readonly) long long defaultUsageState;
@property(nonatomic) long long currentUsageState;
- (void)_delayedSetURLIsBlocked:(id)arg1;
- (void)_URLIsBlockedDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)setBundleIdentifier:(id)arg1 error:(id *)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end

