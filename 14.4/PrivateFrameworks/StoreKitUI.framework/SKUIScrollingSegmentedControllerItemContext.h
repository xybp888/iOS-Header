//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIScrollView, UIViewController;
@protocol SKUIScrollingSegmentedControllerItemContextDelegate;

__attribute__((visibility("hidden")))
@interface SKUIScrollingSegmentedControllerItemContext : NSObject
{
    struct UIEdgeInsets _appliedContentInsetsAdjustment;
    struct UIEdgeInsets _desiredContentInsetsAdjustment;
    UIScrollView *_insetAdjustedContentScrollView;
    id <SKUIScrollingSegmentedControllerItemContextDelegate> _delegate;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <SKUIScrollingSegmentedControllerItemContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_applyNewContentInset:(struct UIEdgeInsets)arg1 withOldContentInset:(struct UIEdgeInsets)arg2 toContentScrollView:(id)arg3;
- (void)updateAppliedContentInsetsAdjustment;
- (void)applyNewContentInset:(struct UIEdgeInsets)arg1;
- (id)initWithViewController:(id)arg1;
- (id)init;

@end

