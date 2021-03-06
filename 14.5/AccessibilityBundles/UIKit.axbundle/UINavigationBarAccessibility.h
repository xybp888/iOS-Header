//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/__UINavigationBarAccessibility_super.h>

@interface UINavigationBarAccessibility : __UINavigationBarAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibility_navigationBarContentsDidChange;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)willRemoveSubview:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityFetchCachedNavBarElements;
- (unsigned long long)_accessibilityAutomationType;
- (id)_accessibilityRightButtonElements;
- (id)_accessibilityLeftButtonElements;
- (id)_accessibilityStaticBarButtonItemWithContents:(id)arg1;
- (id)_accessibilityStaticBarButtonItem;
- (_Bool)_accessibilityHasStaticNavBarButtonChanged;
- (void)_axSetCachedStaticNavBarButton:(id)arg1;
- (id)_axGetCachedStaticNavBarButton;
- (_Bool)_accessibilityHasTitleViewChanged;
- (_Bool)_accessibilityHasLeftRightButtonCountChanged;
- (double)_accessibilityAllowedGeometryOverlap;
- (id)accessibilityElements;
- (_Bool)accessibilityPerformEscape;
- (id)accessibilityIdentifier;
- (long long)accessibilityContainerType;
- (_Bool)shouldGroupAccessibilityChildren;
- (_Bool)_accessibilityHitTestShouldFallbackToNearestChild;
- (_Bool)_accessibilityAllowOutOfBoundsHitTestAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_accessibilitySetFauxBackButton:(id)arg1;
- (id)_accessibilityFauxBackButton;
- (void)_accessibilitySetNavBarElements:(id)arg1;
- (id)_accessibilityNavBarElements;

@end

