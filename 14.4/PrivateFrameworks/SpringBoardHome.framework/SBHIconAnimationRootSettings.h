//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class SBHCenterAcceleratedAppSuspendSettings, SBHCenterAppLaunchSettings, SBHCenterAppSuspendSettings, SBHCrossfadeAcceleratedAppSuspendSettings, SBHCrossfadeAppLaunchSettings, SBHCrossfadeAppSuspendSettings, SBHFolderCloseSettings, SBHFolderOpenSettings, SBHLibraryPodCloseSettings, SBHLibraryPodOpenSettings, SBHReducedMotionFadeSettings, SBHUnlockSettings;

@interface SBHIconAnimationRootSettings : PTSettings
{
    SBHReducedMotionFadeSettings *_reducedMotionSettings;
    SBHUnlockSettings *_unlockSettings;
    SBHCenterAppLaunchSettings *_centerLaunchSettings;
    SBHCenterAppSuspendSettings *_centerSuspendSettings;
    SBHCenterAcceleratedAppSuspendSettings *_centerAcceleratedSuspendSettings;
    SBHCrossfadeAppLaunchSettings *_crossfadeLaunchSettings;
    SBHCrossfadeAppSuspendSettings *_crossfadeSuspendSettings;
    SBHCrossfadeAcceleratedAppSuspendSettings *_crossfadeAcceleratedSuspendSettings;
    double _maxAppSuspendHintProgress;
    double _maxAppLaunchWallpaperScale;
    SBHFolderOpenSettings *_folderOpenSettings;
    SBHFolderCloseSettings *_folderCloseSettings;
    double _maxFolderCloseHintProgress;
    SBHLibraryPodOpenSettings *_libraryPodOpenSettings;
    SBHLibraryPodCloseSettings *_libraryPodCloseSettings;
}

+ (id)settingsControllerModule;
- (void).cxx_destruct;
@property(retain, nonatomic) SBHLibraryPodCloseSettings *libraryPodCloseSettings; // @synthesize libraryPodCloseSettings=_libraryPodCloseSettings;
@property(retain, nonatomic) SBHLibraryPodOpenSettings *libraryPodOpenSettings; // @synthesize libraryPodOpenSettings=_libraryPodOpenSettings;
@property(nonatomic) double maxFolderCloseHintProgress; // @synthesize maxFolderCloseHintProgress=_maxFolderCloseHintProgress;
@property(retain, nonatomic) SBHFolderCloseSettings *folderCloseSettings; // @synthesize folderCloseSettings=_folderCloseSettings;
@property(retain, nonatomic) SBHFolderOpenSettings *folderOpenSettings; // @synthesize folderOpenSettings=_folderOpenSettings;
@property(nonatomic) double maxAppLaunchWallpaperScale; // @synthesize maxAppLaunchWallpaperScale=_maxAppLaunchWallpaperScale;
@property(nonatomic) double maxAppSuspendHintProgress; // @synthesize maxAppSuspendHintProgress=_maxAppSuspendHintProgress;
@property(retain, nonatomic) SBHCrossfadeAcceleratedAppSuspendSettings *crossfadeAcceleratedSuspendSettings; // @synthesize crossfadeAcceleratedSuspendSettings=_crossfadeAcceleratedSuspendSettings;
@property(retain, nonatomic) SBHCrossfadeAppSuspendSettings *crossfadeSuspendSettings; // @synthesize crossfadeSuspendSettings=_crossfadeSuspendSettings;
@property(retain, nonatomic) SBHCrossfadeAppLaunchSettings *crossfadeLaunchSettings; // @synthesize crossfadeLaunchSettings=_crossfadeLaunchSettings;
@property(retain, nonatomic) SBHCenterAcceleratedAppSuspendSettings *centerAcceleratedSuspendSettings; // @synthesize centerAcceleratedSuspendSettings=_centerAcceleratedSuspendSettings;
@property(retain, nonatomic) SBHCenterAppSuspendSettings *centerSuspendSettings; // @synthesize centerSuspendSettings=_centerSuspendSettings;
@property(retain, nonatomic) SBHCenterAppLaunchSettings *centerLaunchSettings; // @synthesize centerLaunchSettings=_centerLaunchSettings;
@property(retain, nonatomic) SBHUnlockSettings *unlockSettings; // @synthesize unlockSettings=_unlockSettings;
@property(retain, nonatomic) SBHReducedMotionFadeSettings *reducedMotionSettings; // @synthesize reducedMotionSettings=_reducedMotionSettings;
- (void)setDefaultValues;

@end

