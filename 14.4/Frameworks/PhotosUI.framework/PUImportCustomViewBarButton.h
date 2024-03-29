//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface PUImportCustomViewBarButton : UIButton
{
    UIView *_customView;
    NSString *_customAccessibilityLabel;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *customAccessibilityLabel; // @synthesize customAccessibilityLabel=_customAccessibilityLabel;
@property(readonly, nonatomic) UIView *customView; // @synthesize customView=_customView;
- (id)accessibilityLabel;
- (void)setHighlighted:(_Bool)arg1;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize)intrinsicContentSize;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateConstraints;
- (id)initWithCustomView:(id)arg1;

@end

