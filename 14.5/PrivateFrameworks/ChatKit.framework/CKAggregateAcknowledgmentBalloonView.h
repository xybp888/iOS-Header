//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKAcknowledgmentBalloonView.h>

@class CKGradientView, UIImageView, UIView;
@protocol CKGradientReferenceView;

@interface CKAggregateAcknowledgmentBalloonView : CKAcknowledgmentBalloonView
{
    CKGradientView *_gradientView;
    UIImageView *_backgroundView;
    UIImageView *_solidPartsView;
    BOOL _gradientColor;
    BOOL _solidColor;
    UIView<CKGradientReferenceView> *_gradientReferenceView;
}

+ (id)_middleBubbleSquareImageWithTraitCollection:(id)arg1;
+ (id)_topBubbleSquareImageWithTraitCollection:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL solidColor; // @synthesize solidColor=_solidColor;
@property(nonatomic) BOOL gradientColor; // @synthesize gradientColor=_gradientColor;
@property(nonatomic) __weak UIView<CKGradientReferenceView> *gradientReferenceView; // @synthesize gradientReferenceView=_gradientReferenceView;
- (void)prepareForReuse;
- (void)prepareForDisplay;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForAggregateAcknowledgmentChatItem:(id)arg1;

@end

