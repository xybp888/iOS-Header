//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/FBProcessManagerKeyboardFocusDelegate-Protocol.h>

@class BKSHIDEventDeferringToken, BSCompoundAssertion, NSHashTable, NSMutableArray, NSString, SBMainWorkspace;
@protocol BSInvalidatable;

@interface SBWorkspaceKeyboardFocusController : NSObject <FBProcessManagerKeyboardFocusDelegate>
{
    int _keyboardFocusPID;
    SBMainWorkspace *_workspace;
    NSHashTable *_observers;
    NSMutableArray *_redirections;
    NSMutableArray *_holdAssertions;
    BSCompoundAssertion *_preventProcessFocusAssertion;
    id <BSInvalidatable> _keyboardFocusRule;
    id <BSInvalidatable> _compatibilityKeyboardFocusRule;
    BKSHIDEventDeferringToken *_keyboardFocusToken;
}

+ (id)new;
- (void).cxx_destruct;
@property(nonatomic) int keyboardFocusPID; // @synthesize keyboardFocusPID=_keyboardFocusPID;
@property(retain, nonatomic) BKSHIDEventDeferringToken *keyboardFocusToken; // @synthesize keyboardFocusToken=_keyboardFocusToken;
@property(retain, nonatomic) id <BSInvalidatable> compatibilityKeyboardFocusRule; // @synthesize compatibilityKeyboardFocusRule=_compatibilityKeyboardFocusRule;
@property(retain, nonatomic) id <BSInvalidatable> keyboardFocusRule; // @synthesize keyboardFocusRule=_keyboardFocusRule;
@property(retain, nonatomic) BSCompoundAssertion *preventProcessFocusAssertion; // @synthesize preventProcessFocusAssertion=_preventProcessFocusAssertion;
@property(retain, nonatomic) NSMutableArray *holdAssertions; // @synthesize holdAssertions=_holdAssertions;
@property(retain, nonatomic) NSMutableArray *redirections; // @synthesize redirections=_redirections;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) SBMainWorkspace *workspace; // @synthesize workspace=_workspace;
- (void)_notifyObserversDidUpdateKeyboardFocusPID:(int)arg1 token:(id)arg2;
- (_Bool)_getSceneKeyboardFocusOverridePID:(int *)arg1 token:(id *)arg2;
- (void)processManager:(id)arg1 didSelectKeyboardFocusProcess:(id)arg2 deferringToken:(id)arg3;
- (id)preventFocusForProcessIdentifier:(int)arg1 reason:(id)arg2;
- (id)redirectFocusForReason:(id)arg1 fromProcessIdentifier:(int)arg2 fromDeferringToken:(id)arg3 toProcessidentifier:(int)arg4 toDeferringToken:(id)arg5;
- (id)lockFocusToSpringBoardForReason:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)updateKeyboardFocusDeferringRules;
- (id)initWithWorkspace:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

