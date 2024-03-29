//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MPAVController, MPAVItem, UINavigationBar;
@protocol MPVideoControllerProtocol, MPVideoOverlayDelegate;

@protocol MPVideoOverlay
@property(nonatomic) unsigned long long disabledParts;
@property(nonatomic) unsigned long long visibleParts;
@property(nonatomic) unsigned long long desiredParts;
@property(retain, nonatomic) MPAVItem *item;
@property(nonatomic) __weak id <MPVideoOverlayDelegate> delegate;
@property(readonly, retain, nonatomic) UINavigationBar *navigationBar;
@property(retain, nonatomic) MPAVController *player;
@property(nonatomic) _Bool navigationBarHidden;
@property(nonatomic) _Bool allowsWirelessPlayback;
@property(nonatomic) __weak id <MPVideoControllerProtocol> videoViewController;
- (void)hideAlternateTracks;
- (void)showAlternateTracks;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(_Bool)arg2;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(_Bool)arg2;
- (void)stopTicking;
- (void)startTicking;
- (_Bool)updateTimeBasedValues;
@end

