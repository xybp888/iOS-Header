//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iAd/ADBannerViewInternalDelegate-Protocol.h>

@class ADBannerView, AVPlayer, AVPlayerItem, NSString;
@protocol ADPlayerDelegate;

@interface ADPlayer : NSObject <ADBannerViewInternalDelegate>
{
    _Bool _playbackHasBegun;
    id <ADPlayerDelegate> _delegate;
    ADBannerView *_videoAd;
    AVPlayerItem *_avPlayerItem;
    AVPlayer *_avPlayer;
    unsigned long long _playbackState;
    id _timeObserver;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id timeObserver; // @synthesize timeObserver=_timeObserver;
@property(nonatomic) unsigned long long playbackState; // @synthesize playbackState=_playbackState;
@property(retain, nonatomic) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(retain, nonatomic) AVPlayerItem *avPlayerItem; // @synthesize avPlayerItem=_avPlayerItem;
@property(nonatomic) _Bool playbackHasBegun; // @synthesize playbackHasBegun=_playbackHasBegun;
@property(retain, nonatomic) ADBannerView *videoAd; // @synthesize videoAd=_videoAd;
@property(nonatomic) __weak id <ADPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_networkOptimalVideoURLForAd:(id)arg1;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)playerItemEncounteredPlaybackStall:(id)arg1;
- (void)playerItemDidFailedToPlayToEnd:(id)arg1;
- (void)playerItemDidPlayToEnd:(id)arg1;
- (void)bannerViewShouldResumeMedia:(id)arg1;
- (void)bannerViewShouldPauseMedia:(id)arg1;
- (void)bannerViewActionDidFinish:(id)arg1;
- (_Bool)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(_Bool)arg2;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)bannerViewWillLoadAd:(id)arg1;
- (id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)showAdTransparency;
- (void)shutdown;
- (void)performAction;
- (void)pause;
- (void)play;
- (void)playerDidPause;
- (void)playerDidStart;
@property(readonly, nonatomic) float playbackRate;
- (_Bool)_beginLoadingVideoFromURL:(id)arg1;
- (_Bool)prepareForPlayackOfInterstitialWithURL:(id)arg1;
- (_Bool)prepareForPlayback;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

