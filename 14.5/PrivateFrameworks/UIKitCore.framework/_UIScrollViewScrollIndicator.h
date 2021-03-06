//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIPointerInteractionDelegate-Protocol.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _UIScrollViewScrollIndicator : UIView <UIPointerInteractionDelegate>
{
    _Bool _expandedForDirectManipulation;
    _Bool _hasPointer;
    unsigned long long _type;
    long long _style;
    UIView *_roundedFillView;
    UIColor *_foregroundColor;
}

+ (struct UIEdgeInsets)_cursorHitTestingInsets;
+ (double)_expandedIndicatorDimension;
+ (double)indicatorDimension;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(retain, nonatomic) UIView *roundedFillView; // @synthesize roundedFillView=_roundedFillView;
@property(nonatomic) _Bool hasPointer; // @synthesize hasPointer=_hasPointer;
@property(nonatomic) _Bool expandedForDirectManipulation; // @synthesize expandedForDirectManipulation=_expandedForDirectManipulation;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)_layoutFillViewAnimated:(_Bool)arg1;
- (struct CGRect)_offsetFillViewRectForExpandedState:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_colorForStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

