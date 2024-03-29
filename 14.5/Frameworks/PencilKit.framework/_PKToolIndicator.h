//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKInk, UIButton;
@protocol PKInkToolButton, _PKToolIndicatorDelegate;

@interface _PKToolIndicator : UIView
{
    _Bool _isEmbossed;
    _Bool _isUsedOnDarkBackground;
    id <_PKToolIndicatorDelegate> _delegate;
    unsigned long long _sizeState;
    unsigned long long _attributeSet;
    PKInk *_ink;
    UIButton<PKInkToolButton> *_toolButton;
    unsigned long long _animationState;
}

+ (id)_defaultAnimator;
+ (void)_animationWithSetup:(CDUnknownBlockType)arg1 animationBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 animated:(_Bool)arg4;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long animationState; // @synthesize animationState=_animationState;
@property(retain, nonatomic) UIButton<PKInkToolButton> *toolButton; // @synthesize toolButton=_toolButton;
@property(retain, nonatomic) PKInk *ink; // @synthesize ink=_ink;
@property(nonatomic) unsigned long long attributeSet; // @synthesize attributeSet=_attributeSet;
@property(nonatomic) unsigned long long sizeState; // @synthesize sizeState=_sizeState;
@property(nonatomic) _Bool isUsedOnDarkBackground; // @synthesize isUsedOnDarkBackground=_isUsedOnDarkBackground;
@property(nonatomic) _Bool isEmbossed; // @synthesize isEmbossed=_isEmbossed;
@property(nonatomic) __weak id <_PKToolIndicatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_dismissInkAnimation:(id)arg1 animated:(_Bool)arg2;
- (void)_presentInkAnimation:(id)arg1 animated:(_Bool)arg2;
- (void)_switchToInkAnimation:(id)arg1 animated:(_Bool)arg2;
- (id)_toolButtonView;
- (struct CGRect)_frameForVisibleToolButton;
- (struct CGRect)_frameForHiddenToolButton;
- (struct CGRect)_toolIndicatorCenteringRect;
- (void)_setupToolButton:(id)arg1 forInk:(id)arg2;
- (id)_createToolButtonForInk:(id)arg1;
- (void)setInk:(id)arg1 animated:(_Bool)arg2;
- (void)setAnimationState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

