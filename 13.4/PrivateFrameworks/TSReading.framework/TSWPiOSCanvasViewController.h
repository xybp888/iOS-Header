//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDiOSCanvasViewController.h>

#import <TSReading/UIDragInteractionDelegate-Protocol.h>
#import <TSReading/UITextInteractionDelegate-Protocol.h>
#import <TSReading/UITextLinkInteraction-Protocol.h>
#import <TSReading/_UINonEditableTextSelectionForceGestureDelegate-Protocol.h>

@class NSMutableArray, NSString, TSUColor, TSWPHardPressGestureRecognizer, TSWPHyperlinkField, TSWPInteractiveCanvasController, TSWPLongPressGestureRecognizer, TSWPRep, TSWPSwipeGestureRecognizer, TSWPTwoPartAction, UIGestureRecognizer, UITapGestureRecognizer, UITextInteraction;

@interface TSWPiOSCanvasViewController : TSDiOSCanvasViewController <UITextInteractionDelegate, UITextLinkInteraction, UIDragInteractionDelegate, _UINonEditableTextSelectionForceGestureDelegate>
{
    UIGestureRecognizer *_hyperlinkGestureRecognizer;
    TSWPSwipeGestureRecognizer *_rightSwipeGestureRecognizer;
    TSWPSwipeGestureRecognizer *_leftSwipeGestureRecognizer;
    TSWPLongPressGestureRecognizer *_longPressGestureRecognizer;
    TSWPTwoPartAction *_delayedTapAction;
    NSMutableArray *_gestureRecognizers;
    _Bool _isInteractingWithHyperLink;
    _Bool _linkInteractionIsLongPress;
    TSWPHyperlinkField *_interactionHyperlinkField;
    TSWPRep *_interactionHyperLinkRep;
    UITapGestureRecognizer *_secondarySingleTapGestureRecognizer;
    TSWPHardPressGestureRecognizer *_hardPressGesture;
    UITextInteraction *_textInteraction;
}

@property(retain, nonatomic) UITextInteraction *textInteraction; // @synthesize textInteraction=_textInteraction;
@property(retain, nonatomic) TSWPHardPressGestureRecognizer *hardPressGesture; // @synthesize hardPressGesture=_hardPressGesture;
@property(readonly, nonatomic) TSWPLongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(readonly, nonatomic) UIGestureRecognizer *hyperlinkGestureRecognizer; // @synthesize hyperlinkGestureRecognizer=_hyperlinkGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *secondarySingleTapGestureRecognizer; // @synthesize secondarySingleTapGestureRecognizer=_secondarySingleTapGestureRecognizer;
@property(readonly, nonatomic) TSWPSwipeGestureRecognizer *textRightSwipeGestureRecognizer; // @synthesize textRightSwipeGestureRecognizer=_rightSwipeGestureRecognizer;
@property(readonly, nonatomic) TSWPSwipeGestureRecognizer *textLeftSwipeGestureRecognizer; // @synthesize textLeftSwipeGestureRecognizer=_leftSwipeGestureRecognizer;
- (void)_requestTextItemConstrainedToLineAtPoint:(struct CGPoint)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (_Bool)willInteractWithLinkAtPoint:(struct CGPoint)arg1;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)cancelInteractionWithLink;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (_Bool)isInteractingWithLink;
- (void)tapLinkAtPoint:(struct CGPoint)arg1;
- (_Bool)mightHaveLinks;
- (void)_resetLinkInteraction;
- (void)interactionDidEnd:(id)arg1;
- (void)interactionWillBegin:(id)arg1;
- (_Bool)interactionShouldBegin:(id)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)interactionShouldSuppressSystemUI:(id)arg1;
- (_Bool)interactionShouldBegin:(id)arg1;
- (id)_hyperLinkFieldAtPoint:(struct CGPoint)arg1;
- (id)_hitRepAtPoint:(struct CGPoint)arg1;
- (_Bool)_shouldAllowInteractionAtPoint:(struct CGPoint)arg1;
- (id)p_newSwipeGestureRecognizerWithDirection:(int)arg1 numberOfTouchesRequired:(unsigned int)arg2;
- (void)p_addSwipeGestureRecognizer:(id)arg1 failRequiredFor:(id)arg2;
@property(readonly) TSWPInteractiveCanvasController *interactiveCanvasController;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)_dragItemsForInteraction:(id)arg1 session:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (id)hyperlinkUICustomStringForURLString:(id)arg1;
- (void)hyperlinkUIShowCustomUIforRep:(id)arg1 field:(id)arg2;
- (_Bool)hyperlinkUIShouldShow;
- (_Bool)hyperlinkUIShouldShowCustomUI;
- (void)hyperlinkUIDidHide;
- (void)hyperlinkUIWillShow;
- (_Bool)onlyAllowTextSwipesWhenEditing;
- (void)setUpGestureDependenciesForNewCopyOfTextGesture:(id)arg1;
- (_Bool)shouldHideCanvasLayerInMagnifier;
@property(readonly, nonatomic) TSUColor *backgroundColorForMagnifier;
- (void)removeSwipeGestureRecognizers;
- (void)addSwipeGestureRecognizers;
- (_Bool)hasDelayedTapAction;
- (void)_clearSelectedRange;
- (void)_resetAndClearInteractions;
- (void)finishDelayedTapAction;
- (void)startDelayedTapAction:(id)arg1;
- (void)cancelDelayedTapAction;
- (void)p_endHardPressGestureRecognizer;
- (void)p_handleHardPressGestureRecognizer:(id)arg1;
- (void)willBeginGesture;
- (_Bool)shouldAllowSelectionGestures:(_Bool)arg1 atPoint:(struct CGPoint)arg2 toBegin:(_Bool)arg3;
- (void)gestureSequenceDidEnd;
- (void)gestureSequenceWillBegin;
- (id)actionForHyperlink:(id)arg1 inRep:(id)arg2 gesture:(id)arg3;
- (_Bool)canDisplayHyperlinkUI;
- (void)setUpGestureRecognizers;
- (void)dealloc;
- (void)teardown;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

