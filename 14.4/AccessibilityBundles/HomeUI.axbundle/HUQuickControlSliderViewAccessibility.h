//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__HUQuickControlSliderViewAccessibility_super.h"

@interface HUQuickControlSliderViewAccessibility : __HUQuickControlSliderViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (struct CGRect)accessibilityFrame;
- (_Bool)_axHasSecondarySlider;
- (id)_accessibilityControlName;
- (id)_accessibilityControlItem;
- (id)_accessibilitySingleControlHostViewController;
- (void)_axUpdateControlValue:(double)arg1 incrementing:(_Bool)arg2;
- (double)_axCurrentSecondary;
- (double)_axCurrentPrimary;
- (double)_axCurrentAdjustableValue;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityIdentifier;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)_axSetAdjustsMin;
- (_Bool)_axSetAdjustsMax;
- (id)accessibilityCustomActions;
- (void)_axSetShouldAdjustSecondary:(_Bool)arg1;
- (_Bool)_axShouldAdjustSecondary;
- (_Bool)isAccessibilityElement;

@end

