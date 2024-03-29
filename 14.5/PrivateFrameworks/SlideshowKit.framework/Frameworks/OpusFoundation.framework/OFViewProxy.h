//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, OFUIViewController;

@interface OFViewProxy : UIView
{
    NSMutableArray *_layoutSteps;
    struct {
        struct CGRect _field1;
    } *_layoutInfo;
    OFUIViewController *_viewControllerProxy;
    _Bool _magicLayoutEnabled;
}

@property(nonatomic, getter=isMagicLayoutEnabled) _Bool magicLayoutEnabled; // @synthesize magicLayoutEnabled=_magicLayoutEnabled;
- (void)layoutSubviews;
- (void)addLayoutSteps:(id)arg1;
- (void)addLayoutStep:(id)arg1;
- (void)runMagicLayout;
- (void)setAnchorPoint:(struct CGPoint)arg1;
@property(nonatomic) OFUIViewController *viewControllerProxy; // @synthesize viewControllerProxy=_viewControllerProxy;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;

@end

