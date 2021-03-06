//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, UIView;
@protocol NSObject><NSCopying, PKScribbleInteractionWrapper, UICoordinateSpace, UITextInput;

@interface PKTextInputElement : NSObject
{
    struct CGRect _lastKnownFrame;
    id <UICoordinateSpace> _coordinateSpace;
    _Bool _waitingForMatchingDidFinishWriting;
    _Bool __requestingPlaceholderSuppression;
    _Bool _legacyHasBeenFocusedWithinContainer;
    long long __elementType;
    id <UITextInput> _textInput;
    UIView *_textInputView;
    id <PKScribbleInteractionWrapper> __viewScribbleInteraction;
    id <PKScribbleInteractionWrapper> __containerInteraction;
    long long __orderInContainer;
    NSNumber *_recognitionIdentifier;
    id <NSObject><NSCopying> _containerElementIdentifier;
}

+ (struct CGRect)hitToleranceFrameFromElementFrame:(struct CGRect)arg1 insets:(struct UIEdgeInsets)arg2;
+ (struct UIEdgeInsets)hitToleranceEdgeInsetsFromHorizontalTolerance:(double)arg1 verticalTolerance:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool legacyHasBeenFocusedWithinContainer; // @synthesize legacyHasBeenFocusedWithinContainer=_legacyHasBeenFocusedWithinContainer;
@property(readonly, nonatomic) id <NSObject><NSCopying> containerElementIdentifier; // @synthesize containerElementIdentifier=_containerElementIdentifier;
@property(copy, nonatomic) NSNumber *recognitionIdentifier; // @synthesize recognitionIdentifier=_recognitionIdentifier;
@property(nonatomic) _Bool _requestingPlaceholderSuppression; // @synthesize _requestingPlaceholderSuppression=__requestingPlaceholderSuppression;
@property(readonly, nonatomic) long long _orderInContainer; // @synthesize _orderInContainer=__orderInContainer;
@property(readonly, nonatomic) id <PKScribbleInteractionWrapper> _containerInteraction; // @synthesize _containerInteraction=__containerInteraction;
@property(readonly, nonatomic) id <PKScribbleInteractionWrapper> _viewScribbleInteraction; // @synthesize _viewScribbleInteraction=__viewScribbleInteraction;
@property(nonatomic) __weak UIView *textInputView; // @synthesize textInputView=_textInputView;
@property(nonatomic) __weak id <UITextInput> textInput; // @synthesize textInput=_textInput;
@property(nonatomic) long long _elementType; // @synthesize _elementType=__elementType;
- (_Bool)shouldPostponeCommit;
- (_Bool)_isFrameTooCloseToBottom;
- (struct CGRect)_safeHitFrame;
- (struct CGPoint)clampedReferencePoint:(struct CGPoint)arg1;
- (_Bool)shouldPostponeFocusing;
- (void)focusElementIfNeededWithReferencePoint:(struct CGPoint)arg1 alwaysSetSelectionFromReferencePoint:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic, getter=isFocused) _Bool focused;
- (void)_promoteKeyWindowIfNecessary:(id)arg1;
- (void)loadContentFocusingIfNeededWithReferencePoint:(struct CGPoint)arg1 alwaysSetSelectionFromReferencePoint:(_Bool)arg2 rectOfInterest:(struct CGRect)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)containsView:(id)arg1;
- (_Bool)isElementView:(id)arg1;
@property(readonly, nonatomic) UIView *referenceView;
- (_Bool)_isFromSameContainerAsElement:(id)arg1;
- (_Bool)isInFrontOfElement:(id)arg1;
- (_Bool)isEquivalentToElement:(id)arg1;
- (void)didTargetElementForTouches:(id)arg1 event:(id)arg2;
- (_Bool)shouldBeginAtLocation:(struct CGPoint)arg1;
- (void)updateFromEquivalentElement:(id)arg1;
- (void)updateWithFocusedTextInput:(id)arg1;
- (id)_containerInteractionView;
- (id)_textInputResponder;
- (id)_textInputView;
@property(readonly, nonatomic) NSString *debugElementTypeDescription;
- (id)description;
- (id)_scribbleInteraction;
- (struct CGRect)hitToleranceFrameFromElementFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> coordinateSpace;
- (void)dealloc;
- (id)initWithTextInput:(id)arg1;
- (id)initWithElementInteraction:(id)arg1 elementIdentifier:(id)arg2 orderInContainer:(long long)arg3;
- (void)didEndWriting;
- (void)willBeginWriting;
- (void)swapWritingStateWithElement:(id)arg1;
- (void)notifyTextInputTextDidChange;
- (void)notifyTextInputTextWillChange;
- (struct CGRect)selectionClipRectInCoordinateSpace:(id)arg1;
- (id)selectionHighlightColor;
- (_Bool)clearActivePreview;
- (struct _NSRange)activePreviewRange;
- (_Bool)showSelectionCommands;
- (void)_finishSuppressingFieldPlaceholderIfNeeded;
- (void)_beginSuppressingFieldPlaceholder;

@end

