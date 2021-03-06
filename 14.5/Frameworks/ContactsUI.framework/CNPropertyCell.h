//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNLabeledCell.h>

@class CNPropertyGroupItem, UIResponder;
@protocol CNPresenterDelegate, CNPropertyCellDelegate;

__attribute__((visibility("hidden")))
@interface CNPropertyCell : CNLabeledCell
{
    _Bool _allowsEditing;
    _Bool _ignoreSuggested;
    _Bool _forceSuggested;
    _Bool _highlightedProperty;
    _Bool _important;
    id _property;
    UIResponder *_firstResponderItem;
    double _labelWidth;
    id <CNPropertyCellDelegate> _delegate;
    id <CNPresenterDelegate> _presentingDelegate;
}

+ (id)labelStringFromAppName:(id)arg1 andPropertyLabel:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <CNPresenterDelegate> presentingDelegate; // @synthesize presentingDelegate=_presentingDelegate;
@property(nonatomic) __weak id <CNPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double labelWidth; // @synthesize labelWidth=_labelWidth;
@property(nonatomic, getter=isImportant) _Bool important; // @synthesize important=_important;
@property(nonatomic, getter=isHighlightedProperty) _Bool highlightedProperty; // @synthesize highlightedProperty=_highlightedProperty;
@property(nonatomic) _Bool forceSuggested; // @synthesize forceSuggested=_forceSuggested;
@property(nonatomic) _Bool ignoreSuggested; // @synthesize ignoreSuggested=_ignoreSuggested;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(readonly, nonatomic) UIResponder *firstResponderItem; // @synthesize firstResponderItem=_firstResponderItem;
@property(nonatomic) __weak id property; // @synthesize property=_property;
- (void)updateValueWithPropertyItem:(id)arg1;
- (void)updateWithPropertyItem:(id)arg1;
- (void)tintColorDidChange;
@property(readonly, nonatomic) _Bool supportsValueColorUsesLabelColor;
@property(readonly, nonatomic) _Bool supportsTintColorValue;
- (void)copy:(id)arg1;
- (id)valueString;
- (_Bool)shouldShowSuggestionOrigin;
- (id)labelString;
@property(readonly, nonatomic, getter=isSuggested) _Bool suggested;
- (void)setPropertyItem:(id)arg1;
@property(readonly, nonatomic) CNPropertyGroupItem *propertyItem;
- (void)setCardGroupItem:(id)arg1;
- (void)performAccessoryAction;
- (void)performDefaultAction;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

