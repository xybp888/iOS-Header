//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/NSObject-Protocol.h>

@class UIViewController;
@protocol TVMediaController;

@protocol TVMediaControllerDelegate <NSObject>

@optional
- (void)mediaController:(UIViewController<TVMediaController> *)arg1 shouldShowStill:(inout _Bool *)arg2 afterStoppingForReason:(long long)arg3;
- (void)stateDidChangeForMediaController:(UIViewController<TVMediaController> *)arg1;
- (void)didFinishPlaybackForMediaController:(UIViewController<TVMediaController> *)arg1;
- (void)coverImageDidChangeForMediaController:(UIViewController<TVMediaController> *)arg1;
@end

