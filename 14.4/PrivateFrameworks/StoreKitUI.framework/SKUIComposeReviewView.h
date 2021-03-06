//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <StoreKitUI/SKUIComposeReviewHeaderDelegate-Protocol.h>
#import <StoreKitUI/UITextContentViewDelegate-Protocol.h>

@class NSString, SKUIComposeReviewHeaderView, SKUIReviewMetadata, SULoadingView, SUTextContentView, UIScrollView;
@protocol SKUIComposeReviewViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIComposeReviewView : UIView <SKUIComposeReviewHeaderDelegate, UITextContentViewDelegate>
{
    long long _currentBodyLength;
    id <SKUIComposeReviewViewDelegate> _delegate;
    SKUIComposeReviewHeaderView *_headerView;
    struct CGRect _keyboardFrame;
    struct CGRect _remoteKeyboardFrame;
    unsigned int _loading:1;
    SULoadingView *_loadingView;
    SKUIReviewMetadata *_review;
    UIScrollView *_scrollView;
    long long _style;
    SUTextContentView *_textContentView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SKUIComposeReviewViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long composeReviewStyle; // @synthesize composeReviewStyle=_style;
- (void)_updateContentSize;
- (void)_showLoadingView;
- (void)_showComposeView;
- (id)_reviewPlaceholder;
- (void)_layoutLoadingView;
- (void)_layoutComposeView;
- (_Bool)_isReviewTextOptional;
- (void)_delayedUpdateReviewLength;
- (id)_body;
- (void)_remoteKeyboardVisibilityDidChangeNotification:(id)arg1;
- (void)_keyboardVisibilityDidChangeNotification:(id)arg1;
- (void)textContentViewDidChange:(id)arg1;
- (_Bool)textContentView:(id)arg1 shouldScrollForPendingContentSize:(struct CGSize)arg2;
- (_Bool)textContentView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textContentView:(id)arg1 shouldChangeSizeForContentSize:(struct CGSize)arg2;
- (void)textContentView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)composeHeaderViewValuesDidChange:(id)arg1;
- (void)composeHeaderViewValidityDidChange:(id)arg1;
- (void)setReview:(id)arg1;
@property(nonatomic) float rating;
@property(nonatomic, getter=isLoading) _Bool loading;
- (void)reloadData;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)copyReview;
- (void)setFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

