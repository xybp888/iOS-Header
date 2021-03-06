//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/HFCameraPlaybackEngineObserver-Protocol.h>
#import <HomeUI/HUCameraPlayerScrubbing-Protocol.h>
#import <HomeUI/HUFeedbackConsentViewControllerDelegate-Protocol.h>
#import <HomeUI/NSURLSessionDelegate-Protocol.h>
#import <HomeUI/UIGestureRecognizerDelegate-Protocol.h>

@class CADisplayLink, HFCameraAnalyticsCameraClipExportSessionEvent, HFCameraPlaybackEngine, HMCameraClipFetchVideoAssetContextOperation, HUClipScrubberDataSource, HUClipScrubberScrollDelegate, HUClipScrubberView, NSLayoutConstraint, NSString, UIButton, UITapGestureRecognizer, UIView;

@interface HUClipScrubberViewController : UIViewController <NSURLSessionDelegate, UIGestureRecognizerDelegate, HUFeedbackConsentViewControllerDelegate, HUCameraPlayerScrubbing, HFCameraPlaybackEngineObserver>
{
    _Bool _isVisible;
    CDUnknownBlockType _accessoryButtonHandler;
    CDUnknownBlockType _beginEditingHandler;
    CDUnknownBlockType _endEditingHandler;
    HFCameraPlaybackEngine *_playbackEngine;
    HUClipScrubberView *_scrubberView;
    UIButton *_selectionButton;
    UIButton *_nearbyAccessoriesButton;
    UIButton *_feedbackButton;
    UIView *_selectionPlatter;
    UIView *_feedbackPlatter;
    UIView *_nearbyAccessoriesPlatter;
    HUClipScrubberDataSource *_dataSource;
    HUClipScrubberScrollDelegate *_clipScrollDelegate;
    NSLayoutConstraint *_scrubberViewRightAnchorConstraint;
    NSLayoutConstraint *_scrubberViewLeftAnchorConstraint;
    NSLayoutConstraint *_feedbackPlatterTopAnchorConstraint;
    NSLayoutConstraint *_nearbyAccessoriesPlatterTopAnchorConstraint;
    NSLayoutConstraint *_selectionPlatterTopAnchorConstraint;
    CADisplayLink *_scrubberUpdateDisplayLink;
    unsigned long long _lastEngineMode;
    HMCameraClipFetchVideoAssetContextOperation *_exportDownloadOperation;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    HFCameraAnalyticsCameraClipExportSessionEvent *_exportSessionEvent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HFCameraAnalyticsCameraClipExportSessionEvent *exportSessionEvent; // @synthesize exportSessionEvent=_exportSessionEvent;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer; // @synthesize singleTapGestureRecognizer=_singleTapGestureRecognizer;
@property(nonatomic) __weak HMCameraClipFetchVideoAssetContextOperation *exportDownloadOperation; // @synthesize exportDownloadOperation=_exportDownloadOperation;
@property(nonatomic) unsigned long long lastEngineMode; // @synthesize lastEngineMode=_lastEngineMode;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(retain, nonatomic) CADisplayLink *scrubberUpdateDisplayLink; // @synthesize scrubberUpdateDisplayLink=_scrubberUpdateDisplayLink;
@property(retain, nonatomic) NSLayoutConstraint *selectionPlatterTopAnchorConstraint; // @synthesize selectionPlatterTopAnchorConstraint=_selectionPlatterTopAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *nearbyAccessoriesPlatterTopAnchorConstraint; // @synthesize nearbyAccessoriesPlatterTopAnchorConstraint=_nearbyAccessoriesPlatterTopAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *feedbackPlatterTopAnchorConstraint; // @synthesize feedbackPlatterTopAnchorConstraint=_feedbackPlatterTopAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *scrubberViewLeftAnchorConstraint; // @synthesize scrubberViewLeftAnchorConstraint=_scrubberViewLeftAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *scrubberViewRightAnchorConstraint; // @synthesize scrubberViewRightAnchorConstraint=_scrubberViewRightAnchorConstraint;
@property(retain, nonatomic) HUClipScrubberScrollDelegate *clipScrollDelegate; // @synthesize clipScrollDelegate=_clipScrollDelegate;
@property(retain, nonatomic) HUClipScrubberDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIView *nearbyAccessoriesPlatter; // @synthesize nearbyAccessoriesPlatter=_nearbyAccessoriesPlatter;
@property(retain, nonatomic) UIView *feedbackPlatter; // @synthesize feedbackPlatter=_feedbackPlatter;
@property(retain, nonatomic) UIView *selectionPlatter; // @synthesize selectionPlatter=_selectionPlatter;
@property(retain, nonatomic) UIButton *feedbackButton; // @synthesize feedbackButton=_feedbackButton;
@property(retain, nonatomic) UIButton *nearbyAccessoriesButton; // @synthesize nearbyAccessoriesButton=_nearbyAccessoriesButton;
@property(retain, nonatomic) UIButton *selectionButton; // @synthesize selectionButton=_selectionButton;
@property(retain, nonatomic) HUClipScrubberView *scrubberView; // @synthesize scrubberView=_scrubberView;
@property(nonatomic) __weak HFCameraPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(copy, nonatomic) CDUnknownBlockType endEditingHandler; // @synthesize endEditingHandler=_endEditingHandler;
@property(copy, nonatomic) CDUnknownBlockType beginEditingHandler; // @synthesize beginEditingHandler=_beginEditingHandler;
@property(copy, nonatomic) CDUnknownBlockType accessoryButtonHandler; // @synthesize accessoryButtonHandler=_accessoryButtonHandler;
- (void)donateAllClips;
- (void)donateClip:(id)arg1;
- (void)verifySubmitAllClips;
- (void)submitCurrentClip;
- (id)_feedbackClip;
- (void)presentPreviouslySubmittedClipAlert;
- (void)presentFeedbackOptions;
- (void)didSelectFeedbackButton;
- (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)showEditInterface;
- (void)dismissEditInterface;
- (void)removeLiveButtonHighlighting;
- (void)showDeleteInterface;
- (void)deleteClip;
- (void)updateSelectionPlatterDisplay;
- (id)_displayableURLForCameraClipURL:(id)arg1;
- (id)outputURLForClip:(id)arg1;
- (id)uploadURLCameraClip:(id)arg1;
- (void)exportLocalClipAtURL:(id)arg1;
- (void)exportCurrentClipWithCompletion:(CDUnknownBlockType)arg1;
- (void)consentController:(id)arg1 didFinishConsentWithAnswer:(_Bool)arg2;
- (void)presentFeedbackConsent;
- (unsigned long long)displayMode;
- (_Bool)_cellBoundsContainsPlayhead:(id)arg1;
- (id)platterWithView:(id)arg1;
- (void)didSelectRightActionButton:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)didDoubleTap:(id)arg1;
- (void)didTap:(id)arg1;
- (void)didPinch:(id)arg1;
- (_Bool)userIsScrubbing;
- (void)_updatePlaybackPosition:(id)arg1 animated:(_Bool)arg2;
- (void)updateAccessoryViews;
- (void)_scrubberDisplayLinkTick:(id)arg1;
- (void)updateScrubberDisplayLinkState;
@property(readonly, nonatomic) double currentScrubberResolution;
- (void)playbackEngine:(id)arg1 didRemoveEvents:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateEvents:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateTimelineState:(unsigned long long)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackError:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2;
- (void)showAssociatedAccessories;
- (void)updateDisplayForLiveMode;
- (void)changeToLiveMode;
- (void)togglePlayPause;
- (void)_addConstraints;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateScrubberViewAndAssociatedConstraints;
- (void)loadView;
- (void)reloadClipManager:(id)arg1;
- (void)dealloc;
- (id)initWithPlaybackEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

