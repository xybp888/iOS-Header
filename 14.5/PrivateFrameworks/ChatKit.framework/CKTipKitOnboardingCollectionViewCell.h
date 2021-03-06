//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKTipKitCollectionViewCell.h>

#import <ChatKit/CNAvatarViewDelegate-Protocol.h>

@class CALayer, CAPackage, CAStateController, NSArray, NSMutableArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface CKTipKitOnboardingCollectionViewCell : CKTipKitCollectionViewCell <CNAvatarViewDelegate>
{
    NSArray *_recommendedPinningConversations;
    CAPackage *_package;
    CALayer *_packageLayer;
    CAStateController *_stateController;
    long long _state;
    UIView *_micaView;
    NSArray *_layerNames;
    NSMutableArray *_avatarViews;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *avatarViews; // @synthesize avatarViews=_avatarViews;
@property(retain, nonatomic) NSArray *layerNames; // @synthesize layerNames=_layerNames;
@property(retain, nonatomic) UIView *micaView; // @synthesize micaView=_micaView;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) CAStateController *stateController; // @synthesize stateController=_stateController;
@property(retain, nonatomic) CALayer *packageLayer; // @synthesize packageLayer=_packageLayer;
@property(retain, nonatomic) CAPackage *package; // @synthesize package=_package;
@property(retain, nonatomic) NSArray *recommendedPinningConversations; // @synthesize recommendedPinningConversations=_recommendedPinningConversations;
- (void)didUpdateContentForAvatarView:(id)arg1;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)stepThroughOnboardingTipAnimationForLayer:(id)arg1;
- (void)updateTipAnimationIfNeeded;
- (void)setTipContentView:(id)arg1 withRecommenedPinningConversations:(id)arg2;
- (void)resetViews;
- (void)stopAnimations;
- (void)startAnimations;
- (void)prepareForReuse;
- (void)didEndDisplaying;
- (void)willDisplayCell;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

