//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUIUtilities/AXUISettingsEditableTableCellWithStepper.h>

#import <HomeUI/AXUISettingsEditableTableCellWithStepperDelegate-Protocol.h>
#import <HomeUI/HUDisableableCellProtocol-Protocol.h>
#import <HomeUI/HUStepperCellProtocol-Protocol.h>
#import <HomeUI/UITextFieldDelegate-Protocol.h>

@class NSNumber, NSString;
@protocol HUStepperCellDelegate;

@interface HUAccessibilityEditableTableCellWithStepper : AXUISettingsEditableTableCellWithStepper <AXUISettingsEditableTableCellWithStepperDelegate, UITextFieldDelegate, HUStepperCellProtocol, HUDisableableCellProtocol>
{
    _Bool _disabled;
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
    NSNumber *_stepperValue;
    NSNumber *_stepValue;
    id <HUStepperCellDelegate> _stepperCellDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <HUStepperCellDelegate> stepperCellDelegate; // @synthesize stepperCellDelegate=_stepperCellDelegate;
@property(copy, nonatomic) NSNumber *stepValue; // @synthesize stepValue=_stepValue;
@property(copy, nonatomic) NSNumber *stepperValue; // @synthesize stepperValue=_stepperValue;
@property(copy, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(copy, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
- (id)textFieldValue:(id)arg1;
- (id)stringValueForSpecifier:(id)arg1;
- (double)maximumValueForSpecifier:(id)arg1;
- (double)minimumValueForSpecifier:(id)arg1;
- (double)stepValueForSpecifier:(id)arg1;
- (void)specifier:(id)arg1 setValue:(double)arg2;
- (double)valueForSpecifier:(id)arg1;
- (void)_update;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

