//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SiriUI/SiriUIViewController-Protocol.h>

@class AceObject, NSString, SAUISnippet, SiriUISashItem;
@protocol SiriUIBaseAceObjectViewControllerDelegate;

@interface SiriUIBaseSnippetViewController : UIViewController <SiriUIViewController>
{
    _Bool _utteranceUserInteractionEnabled;
    AceObject *aceObject;
    SiriUISashItem *_sashItem;
    id <SiriUIBaseAceObjectViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SiriUIBaseAceObjectViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isUtteranceUserInteractionEnabled) _Bool utteranceUserInteractionEnabled; // @synthesize utteranceUserInteractionEnabled=_utteranceUserInteractionEnabled;
@property(retain, nonatomic) AceObject *aceObject; // @synthesize aceObject;
- (_Bool)_canShowWhileLocked;
- (double)desiredTopPaddingBelowController:(id)arg1;
- (double)desiredHeight;
- (void)wasAddedToTranscript;
- (void)siriDidDeactivate;
- (void)siriWillActivateFromSource:(long long)arg1;
@property(readonly, nonatomic) SiriUISashItem *sashItem; // @synthesize sashItem=_sashItem;
- (void)siriDidReceiveAdditionalContent:(id)arg1 error:(id)arg2;
@property(retain, nonatomic) SAUISnippet *snippet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

