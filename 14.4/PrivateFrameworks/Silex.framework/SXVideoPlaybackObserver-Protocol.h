//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class NSError, SXPlaybackCoordinator;

@protocol SXVideoPlaybackObserver <NSObject>

@optional
- (void)playbackCoordinatorMuteStateChanged:(SXPlaybackCoordinator *)arg1;
- (void)playbackCoordinatorStateChanged:(SXPlaybackCoordinator *)arg1;
- (void)playbackCoordinatorPlaybackLikelyToKeepUpStateChanged:(SXPlaybackCoordinator *)arg1;
- (void)playbackCoordinatorPlaybackBufferFullStateChanged:(SXPlaybackCoordinator *)arg1;
- (void)playbackCoordinator:(SXPlaybackCoordinator *)arg1 loadingProgressed:(double)arg2;
- (void)playbackCoordinator:(SXPlaybackCoordinator *)arg1 timeElapsed:(double)arg2 duration:(double)arg3;
- (void)playbackCoordinator:(SXPlaybackCoordinator *)arg1 playbackFailedWithError:(NSError *)arg2;
- (void)playbackCoordinatorFinishedPlayback:(SXPlaybackCoordinator *)arg1;
- (void)playbackCoordinatorPausedPlayback:(SXPlaybackCoordinator *)arg1;
- (void)playbackCoordinatorResumedPlayback:(SXPlaybackCoordinator *)arg1;
- (void)playbackCoordinatorStartedPlayback:(SXPlaybackCoordinator *)arg1;
@end

