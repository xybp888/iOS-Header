//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBApplicationSceneViewControlling-Protocol.h>
#import <SpringBoard/SBSceneLayoutStatusBarAssertionProviding-Protocol.h>

@class SBDeviceApplicationSceneHandle, SBHomeGrabberView, UIView;
@protocol SBApplicationSceneBackgroundView;

@protocol SBDeviceApplicationSceneViewControlling <SBApplicationSceneViewControlling, SBSceneLayoutStatusBarAssertionProviding>
@property(nonatomic) long long homeGrabberDisplayMode;
@property(readonly, nonatomic) SBHomeGrabberView *homeGrabberView;
@property(readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property(retain, nonatomic) UIView<SBApplicationSceneBackgroundView> *backgroundView;
@end

