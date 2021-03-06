//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSMutableArray, UIColor;

@interface MPUNowPlayingIndicatorView : UIControl
{
    NSMutableArray *_levelViews;
    _Bool _showsLevelGutters;
    double _interLevelSpacing;
    double _levelCornerRadius;
    double _levelWidth;
    double _maximumLevelHeight;
    double _minimumLevelHeight;
    long long _numberOfLevels;
    long long _playbackState;
    UIColor *_levelGuttersColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *levelGuttersColor; // @synthesize levelGuttersColor=_levelGuttersColor;
@property(nonatomic) _Bool showsLevelGutters; // @synthesize showsLevelGutters=_showsLevelGutters;
@property(nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(nonatomic) long long numberOfLevels; // @synthesize numberOfLevels=_numberOfLevels;
@property(nonatomic) double minimumLevelHeight; // @synthesize minimumLevelHeight=_minimumLevelHeight;
@property(nonatomic) double maximumLevelHeight; // @synthesize maximumLevelHeight=_maximumLevelHeight;
@property(nonatomic) double levelWidth; // @synthesize levelWidth=_levelWidth;
@property(nonatomic) double levelCornerRadius; // @synthesize levelCornerRadius=_levelCornerRadius;
@property(nonatomic) double interLevelSpacing; // @synthesize interLevelSpacing=_interLevelSpacing;
- (void)_updateLevelAnimations;
- (void)_reloadLevelViews;
- (void)_removeAllAnimations:(_Bool)arg1;
- (void)tintColorDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

