//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKitUI/AKAuthorizationPaneViewController.h>

#import <AuthKitUI/AKAuthorizationEditableDataSources-Protocol.h>
#import <AuthKitUI/AKAuthorizationPasswordAuthenticationDelegate-Protocol.h>
#import <AuthKitUI/AKAuthorizationSubPaneConfirmButtonDelegate-Protocol.h>
#import <AuthKitUI/UITableViewDataSource-Protocol.h>
#import <AuthKitUI/UITableViewDelegate-Protocol.h>
#import <AuthKitUI/UITextFieldDelegate-Protocol.h>

@class AKAuthorizationNameFormatter, AKAuthorizationPresentationContext, AKAuthorizationScopeChoices, AKAuthorizationSubPaneConfirmButton, AKAuthorizationSubPaneImage, AKAuthorizationViewController, AKCATiburonInputUIReporter, AKUserInformation, NSArray, NSString, UIBarButtonItem;

@interface AKAuthorizationInputPaneViewController : AKAuthorizationPaneViewController <AKAuthorizationSubPaneConfirmButtonDelegate, AKAuthorizationPasswordAuthenticationDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, AKAuthorizationEditableDataSources>
{
    _Bool _isEditingName;
    _Bool _isEmailExpanded;
    unsigned long long _editingGivenNameIndex;
    unsigned long long _editingFamilyNameIndex;
    double _nameEditHeightChange;
    NSArray *_validatedScopes;
    AKCATiburonInputUIReporter *_analyticsReport;
    _Bool _editableScopeChoicesChanged;
    AKAuthorizationScopeChoices *_editableScopeChoices;
    AKAuthorizationPresentationContext *_presentationContext;
    AKAuthorizationViewController *_authorizationViewController;
    AKUserInformation *_editingUserInformation;
    AKAuthorizationSubPaneImage *_imageSubPane;
    AKAuthorizationSubPaneConfirmButton *_confirmButton;
    UIBarButtonItem *_savedLeftBarButtonItem;
    UIBarButtonItem *_savedRightBarButtonItem;
    AKAuthorizationNameFormatter *_nameFormatter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AKAuthorizationNameFormatter *nameFormatter; // @synthesize nameFormatter=_nameFormatter;
@property(retain, nonatomic) UIBarButtonItem *savedRightBarButtonItem; // @synthesize savedRightBarButtonItem=_savedRightBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *savedLeftBarButtonItem; // @synthesize savedLeftBarButtonItem=_savedLeftBarButtonItem;
@property(retain, nonatomic) AKAuthorizationSubPaneConfirmButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) AKAuthorizationSubPaneImage *imageSubPane; // @synthesize imageSubPane=_imageSubPane;
@property(copy, nonatomic) AKUserInformation *editingUserInformation; // @synthesize editingUserInformation=_editingUserInformation;
@property(nonatomic) __weak AKAuthorizationViewController *authorizationViewController; // @synthesize authorizationViewController=_authorizationViewController;
@property(readonly, nonatomic) AKAuthorizationPresentationContext *presentationContext; // @synthesize presentationContext=_presentationContext;
@property(nonatomic) _Bool editableScopeChoicesChanged; // @synthesize editableScopeChoicesChanged=_editableScopeChoicesChanged;
@property(readonly, nonatomic) AKAuthorizationScopeChoices *editableScopeChoices; // @synthesize editableScopeChoices=_editableScopeChoices;
- (void)_paneDelegate_didRequestAuthorizationWithUserProvidedInformation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_paneDelegate_authorizationPaneViewControllerDismissWithAuthorization:(id)arg1 error:(id)arg2;
- (void)passwordAuthenticationCompletedWithResults:(id)arg1 error:(id)arg2;
- (_Bool)validateReadyForAuthorization;
- (void)performAuthorization;
- (void)performPasswordAuthentication;
- (void)subpaneConfirmButtonDidFailBiometry:(id)arg1;
- (void)subPaneConfirmButtonDidEnterProcessingState:(id)arg1;
- (void)_updateAnalyticsReport;
- (void)_prepareScopeChoices:(id)arg1 withLoginChoice:(id)arg2;
- (void)_handleAuthorizationError:(id)arg1;
- (void)_performPasswordAuthentication;
- (void)_performAuthorizationWithRawPassword:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_performAuthorizationWithRawPassword:(id)arg1;
- (void)setEditingName:(_Bool)arg1 shouldClear:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setEditingName:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isEditingName) _Bool editingName;
- (void)_enableOrDisableConfirmButton;
- (void)_setCancelButtonEnabled:(_Bool)arg1;
- (void)_didSelectEditScope:(id)arg1 options:(id)arg2;
- (void)_doneButtonSelected:(id)arg1;
- (id)_doneBarButtonItem;
- (void)_clearAction:(id)arg1 event:(id)arg2;
- (id)_clearImage;
- (id)_clearButton;
- (void)_selectHideMyEmail;
- (void)_selectShareMyEmail;
- (double)contentScrollOffset;
- (double)intrinsicContentHeight;
- (_Bool)_shouldOverrideIntrinsicContentHeight;
- (void)_updateLayoutForHeightChange:(double)arg1;
- (void)_reloadDataAnimated:(_Bool)arg1 heightChange:(CDUnknownBlockType)arg2 animation:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_reloadDataAnimated:(_Bool)arg1 heightChange:(CDUnknownBlockType)arg2 animation:(CDUnknownBlockType)arg3;
- (void)_reloadDataAnimated:(_Bool)arg1 heightChange:(CDUnknownBlockType)arg2;
- (double)_mainSectionScreenMaxY;
- (double)_padNameEditHeightChange;
- (double)_phoneNameEditHeightChange;
- (double)_computeNameEditHeightChange;
- (void)_updateDataSourceWithValidEditingName;
- (_Bool)_getValidEditingGivenName:(id *)arg1 familyName:(id *)arg2;
- (id)_textFromTextField:(id)arg1;
- (void)_setFamilyNameFromTextField:(id)arg1;
- (void)_setGivenNameFromTextField:(id)arg1;
- (void)_nameEditDone;
- (id)_textFieldForRow:(unsigned long long)arg1;
- (void)_endEditing;
- (void)_beginEditing;
- (void)_beginEditingRow:(unsigned long long)arg1;
- (void)_transitionFromEditingNameAnimated:(_Bool)arg1;
- (void)_transitionToEditingNameAnimated:(_Bool)arg1;
- (void)setEmailExpanded:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isEmailExpanded) _Bool emailExpanded;
- (void)_selectLoginChoiceCell;
- (void)_selectSingleEmailAtIndex:(long long)arg1;
- (void)_selectEmailLocalRow:(long long)arg1;
- (void)_selectScope:(id)arg1 localRow:(long long)arg2;
- (void)_selectRow:(long long)arg1;
- (id)_singleEmailCellForIndex:(long long)arg1;
- (unsigned long long)_numberOfRowsInScope:(id)arg1;
- (long long)_numberOfRowsInValidatedScopes;
- (id)_loginChoiceCellForRow:(unsigned long long)arg1;
- (id)_scopeCellForRow:(unsigned long long)arg1;
- (void)_setupFamilyNameCell:(id)arg1;
- (void)_setupGivenNameCell:(id)arg1;
- (id)_editingNameCellForRow:(unsigned long long)arg1;
- (id)_hideMyEmailCell;
- (id)_shareMyEmailCell;
- (id)_emailCellForLocalRow:(long long)arg1;
- (id)_nameCell;
- (id)_cellForScope:(id)arg1 localRow:(long long)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_selectedLoginChoice;
- (id)_defaultSharedEmail;
- (id)_localizedEmailKey;
- (id)_localizedNameKey;
- (id)_localizedChoiceString;
- (id)_localizedUpgradeString;
- (id)_localizedAuthorizationString;
- (id)_localizedInfoString;
- (_Bool)_isValidEditingName;
- (_Bool)_shouldAllowAuthorization;
- (_Bool)_emailScopeAllowsAuthorization;
- (_Bool)_nameScopeAllowsAuthorization;
- (_Bool)_hasEmailScope;
- (_Bool)_hasNameScope;
- (id)_firstLoginChoice;
- (_Bool)_hasOneLoginChoice;
- (_Bool)_shouldPresentUpgradeFlow;
- (_Bool)_shouldPresentCreateFlow;
- (void)_addShimToStackView:(id)arg1;
- (void)_addUseOtherIDButtonToContext:(id)arg1;
- (void)_addAuthorizationButtonToPaneContext:(id)arg1;
- (void)_useOtherIDButtonSelected:(id)arg1;
- (void)_setupPrivacyLink;
- (void)_loadIconViewImage;
- (void)_createIconViewWithIcon:(id)arg1;
- (void)_setupAlternateButton;
- (void)_setupNameAndEmailScopeViews;
- (void)_setupUpgradeFromPasswordBulletPointViews;
- (void)_setupLoginChoiceView;
- (void)_setupInfoLabel;
- (void)_setupIconView;
- (void)_setupTableView;
- (void)_setupValidatedScopes;
- (void)_setupAnalyticsReport;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPresentationContext:(id)arg1 scopeChoices:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

