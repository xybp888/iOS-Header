//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPQueueFeeder.h>

#import <MediaPlaybackCore/ICEnvironmentMonitorObserver-Protocol.h>
#import <MediaPlaybackCore/MPAVItemObserver-Protocol.h>
#import <MediaPlaybackCore/MPCQueueControllerDataSource-Protocol.h>
#import <MediaPlaybackCore/MPRTCReportingItemSessionContaining-Protocol.h>

@class ICPlayActivityController, ICStoreRequestContext, ICUserIdentityStore, MPAVItem, MPCModelRadioPersonalizationResponse, MPCModelRadioPlaybackContext, MPCModelRadioPlaybackQueue, MPCPlaybackRequestEnvironment, NSDictionary, NSObject, NSString;
@protocol MPMutableIdentifierListSection, OS_dispatch_queue;

@interface MPCModelRadioQueueFeeder : MPQueueFeeder <MPRTCReportingItemSessionContaining, MPAVItemObserver, ICEnvironmentMonitorObserver, MPCQueueControllerDataSource>
{
    id <MPMutableIdentifierListSection> _section;
    MPCModelRadioPlaybackQueue *_playbackQueue;
    MPCModelRadioPlaybackContext *_playbackContext;
    _Bool _needsSectionUpdate;
    NSObject<OS_dispatch_queue> *_diffQueue;
    unsigned long long _backgroundTaskIdentifier;
    unsigned long long _backgroundTasks;
    MPAVItem *_currentItem;
    _Bool _hasReachedTracklistEnd;
    _Bool _supportsLoadingAdditionalItems;
    NSString *_lastCleanPlayedIdentifier;
    NSString *_lastPlayedIdentifier;
    MPCModelRadioPersonalizationResponse *_lastResponse;
    _Bool _mayHaveRestrictedContent;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    long long _queueGeneration;
    NSString *_siriAssetInfo;
    ICUserIdentityStore *_observedIdentityStore;
    ICStoreRequestContext *_storeRequestContext;
    ICPlayActivityController *_playActivityController;
    CDUnknownBlockType _finalTracklistLoadingCompletionHandler;
}

+ (id)sharedQueue;
- (void).cxx_destruct;
- (void)_savePlaybackHistoryWithCurrentIndex:(long long)arg1;
- (void)_repersonalizeCurrentTracks;
- (void)_responseDidInvalidate;
- (void)_removeRestrictedTracks;
- (void)_observePersonalizationResponse:(id)arg1;
- (void)_loadTracksWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_isTransientLoadingError:(id)arg1;
- (void)_handlePersonalizationResponse:(id)arg1 personalizationError:(id)arg2 fromRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleGetTracksResponse:(id)arg1 getTracksError:(id)arg2 fromRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_errorForRequest:(id)arg1 withError:(id)arg2;
- (void)_endObservingIdentityStoreForSignOut;
- (void)_endBackgroundTaskAssertion;
- (void)_detectSignOutForIdentityStore:(id)arg1;
- (id)_defaultGetTracksRequestWithContext:(id)arg1 radioStation:(id)arg2;
- (void)_beginObservingIdentityStoreForSignOut;
- (void)_beginBackgroundTaskAssertion;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (void)_responseDidInvalidateNotification:(id)arg1;
- (void)_detectSignOutForIdentityStoreChangeNotification:(id)arg1;
- (void)_allowCellularStreamingDidChangeNotification:(id)arg1;
- (void)_updateAdditionalLoadingSupport;
@property(readonly, copy, nonatomic) NSDictionary *rtcReportingSessionAdditionalUserInfo;
@property(readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
- (id)modelPlayEvent;
- (void)reloadSection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)section:(id)arg1 supportsShuffleType:(long long)arg2;
- (id)updatedPlaybackContext;
- (id)placeholderItemForLoadingAdditionalItemsInSection:(id)arg1;
- (void)loadAdditionalItemsWithRequest:(id)arg1 forSection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)prefetchThresholdForSection:(id)arg1;
- (_Bool)shouldRequestAdditionalItemsWhenReachingTailOfSection:(id)arg1;
- (id)itemForItem:(id)arg1 inSection:(id)arg2;
- (void)loadPlaybackContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)supportsAutoPlayForItem:(id)arg1 inSection:(id)arg2;
@property(readonly, nonatomic) _Bool containsTransportableContent;
@property(readonly, nonatomic) _Bool containsLiveStream;
- (void)didSignificantlyChangeItem:(id)arg1;
- (id)supplementalPlaybackContextWithReason:(long long)arg1;
- (long long)supplementalPlaybackContextBehavior;
- (_Bool)canSkipItem:(id)arg1;
- (void)itemDidBeginPlayback:(id)arg1;
- (long long)itemCount;
- (void)getRepresentativeMetadataForPlaybackContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

