//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIControl.h>

#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/UISwitchControl-Protocol.h>
#import <UIKitCore/UISwitchVisualElementProvider-Protocol.h>

@class NSString, UIColor, UIImage, UIImpactFeedbackGenerator, UISwitchVisualElement;

@interface UISwitch : UIControl <UISwitchControl, UISwitchVisualElementProvider, NSCoding>
{
    _Bool _on;
    _Bool _alwaysShowOnOffLabel;
    NSString *_title;
    UIColor *_onTintColor;
    UIColor *_thumbTintColor;
    UIImage *_onImage;
    UIImage *_offImage;
    long long _style;
    long long _preferredStyle;
    UIColor *_tintColor;
    UISwitchVisualElement *_visualElement;
    long long _switchStyle;
}

+ (id)visualElementForTraitCollection:(id)arg1;
+ (id)visualElementForTraitCollection:(id)arg1 style:(long long)arg2;
+ (void)setVisualElementProvider:(id)arg1;
+ (_Bool)_allowsUnsupportedMacIdiomBehavior;
+ (void)_setAllowsUnsupportedMacIdiomBehavior:(_Bool)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long switchStyle; // @synthesize switchStyle=_switchStyle;
@property(nonatomic, getter=_alwaysShowOnOffLabel, setter=_setAlwaysShowsOnOffLabel:) _Bool alwaysShowOnOffLabel; // @synthesize alwaysShowOnOffLabel=_alwaysShowOnOffLabel;
@property(retain, nonatomic) UISwitchVisualElement *visualElement; // @synthesize visualElement=_visualElement;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic, getter=isOn) _Bool on; // @synthesize on=_on;
@property(nonatomic) long long preferredStyle; // @synthesize preferredStyle=_preferredStyle;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIImage *offImage; // @synthesize offImage=_offImage;
@property(retain, nonatomic) UIImage *onImage; // @synthesize onImage=_onImage;
@property(retain, nonatomic) UIColor *thumbTintColor; // @synthesize thumbTintColor=_thumbTintColor;
@property(retain, nonatomic) UIColor *onTintColor; // @synthesize onTintColor=_onTintColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (struct CGPoint)accessibilityActivationPoint;
@property(retain, nonatomic, getter=_impactFeedbackGenerator, setter=_setImpactFeedbackGenerator:) UIImpactFeedbackGenerator *impactFeedbackGenerator;
- (void)_showingOnOffLabelChanged;
- (_Bool)_shouldShowOnOffLabels;
- (void)tintColorDidChange;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2 notifyingVisualElement:(_Bool)arg3;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)setEnabled:(_Bool)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2;
- (void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint)arg2 defaultRegion:(id)arg3;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (_Bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (_Bool)_isFixedSize;
- (void)_setStyle:(long long)arg1;
- (_Bool)pointMostlyInside:(struct CGPoint)arg1;
- (void)visualElementHadTouchUpInside:(id)arg1;
- (void)visualElement:(id)arg1 transitionedToOn:(_Bool)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_refreshVisualElementForTraitCollection:(id)arg1 populatingAPIProperties:(_Bool)arg2;
- (void)_refreshVisualElement;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (unsigned long long)defaultAccessibilityTraits;
- (_Bool)isAccessibilityElementByDefault;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

