//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUSlideshowSettingsViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PUSlideshowViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PXSettingsKeyObserver-Protocol.h>

@class NSString, NSUUID, OKMediaFeederPhotoKit, OKPresentationViewController, OKProducerPreset, PHAssetCollection, PHFetchResult, PUSlideshowContextRegistry, PUSlideshowSettingsViewModel, PUSlideshowViewModel;

__attribute__((visibility("hidden")))
@interface PUSlideshowSession : NSObject <PUSlideshowViewModelChangeObserver, PUSlideshowSettingsViewModelChangeObserver, PXSettingsKeyObserver>
{
    OKMediaFeederPhotoKit *_mediaFeeder;
    PUSlideshowContextRegistry *_contextRegistry;
    OKProducerPreset *_currentPreset;
    _Bool __disablingIdleTimer;
    _Bool _didStartOnce;
    PHFetchResult *_fetchResult;
    PHAssetCollection *_assetCollection;
    PUSlideshowViewModel *_viewModel;
    PUSlideshowSettingsViewModel *_settingsViewModel;
    OKPresentationViewController *_presentationViewController;
    id __disablingIdleTimerToken;
    NSUUID *_uuid;
    long long _currentState;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didStartOnce; // @synthesize didStartOnce=_didStartOnce;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic, setter=_setDisablingIdleTimerToken:) id _disablingIdleTimerToken; // @synthesize _disablingIdleTimerToken=__disablingIdleTimerToken;
@property(nonatomic, setter=_setDisablingIdleTimer:) _Bool _disablingIdleTimer; // @synthesize _disablingIdleTimer=__disablingIdleTimer;
@property(readonly, nonatomic) OKPresentationViewController *presentationViewController; // @synthesize presentationViewController=_presentationViewController;
@property(readonly, nonatomic) PUSlideshowSettingsViewModel *settingsViewModel; // @synthesize settingsViewModel=_settingsViewModel;
@property(readonly, nonatomic) PUSlideshowViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
- (void)_endDisablingIdleTimerIfNecessary;
- (void)_beginDisablingIdleTimer;
- (void)_slideshowSettingsViewModel:(id)arg1 didChange:(id)arg2;
- (void)_slideshowViewModel:(id)arg1 didChange:(id)arg2;
- (void)_updateCurrentState;
- (void)_invalidateCurrentState;
- (void)_addCurrentSettingsToPayload:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_configurePresentationViewController:(id)arg1;
- (id)_resolutionSizes;
- (void)unregisterSlideshowDisplayContext:(id)arg1;
- (void)registerSlideshowDisplayContext:(id)arg1;
- (void)_distributeSlideshowDisplayContextWithPresentationController:(id)arg1;
- (void)updatePresentationViewController;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)dealloc;
- (id)initWithFetchResult:(id)arg1 assetCollection:(id)arg2;
- (id)initWithFetchResult:(id)arg1 assetCollection:(id)arg2 startIndex:(unsigned long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

