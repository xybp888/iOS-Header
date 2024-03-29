//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPMediaControlsSpatialAudioControllerDelegate-Protocol.h>

@class MPMediaControlsSpatialAudioController, MPPlaybackEQSetting, NSNumber, NSString, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface MPPlaybackUserDefaults : NSObject <MPMediaControlsSpatialAudioControllerDelegate>
{
    NSUserDefaults *_iPodUserDefaults;
    NSUserDefaults *_videoUserDefaults;
    NSUserDefaults *_mediaPlaybackCoreUserDefaults;
    NSUserDefaults *_airplayUserDefaults;
    MPMediaControlsSpatialAudioController *_spatialAudioController;
    NSObject<OS_dispatch_queue> *_accountsQueue;
    CDStruct_c0841ed3 _notifyTokens;
    MPPlaybackEQSetting *_musicEQSetting;
    NSNumber *_devicePrivateListeningEnabled;
    long long _preferredVideoDownloadResolution;
}

+ (id)standardUserDefaults;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long preferredVideoDownloadResolution; // @synthesize preferredVideoDownloadResolution=_preferredVideoDownloadResolution;
@property(copy, nonatomic, getter=isDevicePrivateListeningEnabled) NSNumber *devicePrivateListeningEnabled; // @synthesize devicePrivateListeningEnabled=_devicePrivateListeningEnabled;
@property(retain, nonatomic) MPPlaybackEQSetting *musicEQSetting; // @synthesize musicEQSetting=_musicEQSetting;
- (void)mediaControlsSpatialAudioController:(id)arg1 didChangeHeadTrackedSpatialAudioEnabled:(_Bool)arg2;
- (void)_accountStoreChangedNotification:(id)arg1;
- (void)_loadAccountProperties;
- (void)_migrateUserDefaults;
- (void)resetAllInternalSettings;
@property(readonly, nonatomic) _Bool speakerRouteEnabled;
@property(readonly, nonatomic) long long maximumQueueHandOffSize;
@property(readonly, nonatomic) _Bool showResolutionDebugUI;
@property(readonly, nonatomic) _Bool includeContentItemDebugFields;
@property(readonly, nonatomic) _Bool forceLibrarySupplementalContexts;
@property(readonly, nonatomic) _Bool forceMusicStreaming;
@property(readonly, nonatomic) long long forcedMusicResolution;
@property(readonly, nonatomic) _Bool forceMusicResolution;
@property(readonly, nonatomic) _Bool disableQHO;
@property(readonly, nonatomic) _Bool disablePeriodicStateRestore;
@property(readonly, nonatomic) _Bool disableMiniSINF;
@property(readonly, nonatomic) _Bool disableAudioAnalysis;
@property(readonly, nonatomic) float progressiveDownloadAssetRatio;
@property(readonly, nonatomic) _Bool disableAssetCaching;
@property(readonly, nonatomic) _Bool allowsHighQualityMusicStreamingOnCellular;
@property(readonly, nonatomic) long long preferredVideoHighBandwidthResolution;
@property(readonly, nonatomic) long long preferredVideoLowBandwidthResolution;
@property(nonatomic) long long preferredMusicDownloadResolution;
@property(nonatomic) long long preferredMusicHighBandwidthResolution;
@property(nonatomic) long long preferredMusicLowBandwidthResolution;
- (void)setPrivateListeningEnabled:(_Bool)arg1 forHomeUserIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)privateListeningEnabledForHomeUserIdentifier:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property(readonly, nonatomic) _Bool soundCheckEnabled;
@property(nonatomic) long long musicShuffleType;
@property(nonatomic) long long musicRepeatType;
- (void)setAutoPlayEnabled:(_Bool)arg1 forUserIdentity:(id)arg2;
- (_Bool)autoPlayEnabledForUserIdentity:(id)arg1;
- (void)dealloc;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

