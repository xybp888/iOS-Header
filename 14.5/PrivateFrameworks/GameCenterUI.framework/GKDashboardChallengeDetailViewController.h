//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKDetailViewController.h>

@class GKAchievementIconView, GKChallenge, NSLayoutConstraint, UIButton, UILabel;

@interface GKDashboardChallengeDetailViewController : GKDetailViewController
{
    _Bool _shouldShowPlay;
    id _delegate;
    GKChallenge *_challenge;
    GKAchievementIconView *_iconView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_fromLabel;
    UIButton *_playButton;
    UIButton *_declineButton;
    NSLayoutConstraint *_topConstraint;
    double _topMargin;
    NSLayoutConstraint *_iconHeightConstraint;
    NSLayoutConstraint *_speechToFromConstraint;
}

- (void).cxx_destruct;
@property(nonatomic) NSLayoutConstraint *speechToFromConstraint; // @synthesize speechToFromConstraint=_speechToFromConstraint;
@property(nonatomic) NSLayoutConstraint *iconHeightConstraint; // @synthesize iconHeightConstraint=_iconHeightConstraint;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(nonatomic) UIButton *declineButton; // @synthesize declineButton=_declineButton;
@property(nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) UILabel *fromLabel; // @synthesize fromLabel=_fromLabel;
@property(nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) GKAchievementIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) GKChallenge *challenge; // @synthesize challenge=_challenge;
@property(nonatomic) _Bool shouldShowPlay; // @synthesize shouldShowPlay=_shouldShowPlay;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void)decline:(id)arg1;
- (void)challengeOK:(id)arg1;
- (void)play:(id)arg1;
- (void)updateLeaderboardImage;
- (void)configureForChallenge;
- (id)preferredFocusEnvironments;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithChallenge:(id)arg1;

@end

