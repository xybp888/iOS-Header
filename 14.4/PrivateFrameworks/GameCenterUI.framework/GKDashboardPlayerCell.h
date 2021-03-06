//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class GKDashboardPlayerShadowView, GKPlayer, NSLayoutConstraint, UIColor, UILabel, UIView;

@interface GKDashboardPlayerCell : UICollectionViewCell
{
    _Bool _onDarkBackground;
    GKPlayer *_player;
    UIColor *_defaultContentBackgroundColor;
    GKDashboardPlayerShadowView *_playerView;
    NSLayoutConstraint *_playerViewBottomToNameLabelTopConstraint;
    UILabel *_nameLabel;
    UILabel *_statusLabel;
    UIColor *_nameColor;
    UIColor *_statusColor;
    double _playerViewBottomToNameLabelTopConstant;
}

+ (double)preferredCollectionHeight;
+ (struct CGSize)defaultSize;
@property(nonatomic) double playerViewBottomToNameLabelTopConstant; // @synthesize playerViewBottomToNameLabelTopConstant=_playerViewBottomToNameLabelTopConstant;
@property(retain, nonatomic) UIColor *statusColor; // @synthesize statusColor=_statusColor;
@property(retain, nonatomic) UIColor *nameColor; // @synthesize nameColor=_nameColor;
@property(nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) NSLayoutConstraint *playerViewBottomToNameLabelTopConstraint; // @synthesize playerViewBottomToNameLabelTopConstraint=_playerViewBottomToNameLabelTopConstraint;
@property(nonatomic) GKDashboardPlayerShadowView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIColor *defaultContentBackgroundColor; // @synthesize defaultContentBackgroundColor=_defaultContentBackgroundColor;
@property(nonatomic) _Bool onDarkBackground; // @synthesize onDarkBackground=_onDarkBackground;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)canBecomeFocused;
- (void)updateLabelColorForDashboard;
- (void)setStatusWithLastPlayedDate:(id)arg1;
- (void)setStatusText:(id)arg1;
- (void)setNameText:(id)arg1;
@property(readonly, nonatomic) UIView *popoverSourceView;
- (void)dealloc;
- (void)awakeFromNib;

@end

