//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXCursorInteractionSettings : PXSettings
{
    _Bool _enableGridShadows;
    _Bool _enableGridLift;
    _Bool _enableCardShadows;
    _Bool _enableCardLift;
    _Bool _enableDetailsEffect;
    _Bool _enableCuratedLibraryEffects;
    double _animationDuration;
    double _dampingRatio;
    double _yearsPadding;
    double _monthsPadding;
    double _allPhotosAspectFitPadding;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) _Bool enableCuratedLibraryEffects; // @synthesize enableCuratedLibraryEffects=_enableCuratedLibraryEffects;
@property(nonatomic) _Bool enableDetailsEffect; // @synthesize enableDetailsEffect=_enableDetailsEffect;
@property(nonatomic) _Bool enableCardLift; // @synthesize enableCardLift=_enableCardLift;
@property(nonatomic) _Bool enableCardShadows; // @synthesize enableCardShadows=_enableCardShadows;
@property(nonatomic) _Bool enableGridLift; // @synthesize enableGridLift=_enableGridLift;
@property(nonatomic) _Bool enableGridShadows; // @synthesize enableGridShadows=_enableGridShadows;
@property(nonatomic) double allPhotosAspectFitPadding; // @synthesize allPhotosAspectFitPadding=_allPhotosAspectFitPadding;
@property(nonatomic) double monthsPadding; // @synthesize monthsPadding=_monthsPadding;
@property(nonatomic) double yearsPadding; // @synthesize yearsPadding=_yearsPadding;
@property(nonatomic) double dampingRatio; // @synthesize dampingRatio=_dampingRatio;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
- (double)paddingForZoomLevel:(long long)arg1;
- (long long)interactionOptionsForZoomLevel:(long long)arg1 isAllPhotosAspectFit:(_Bool)arg2;
- (long long)cardInteractionOptions;
- (long long)gridInteractionOptions;
- (void)setDefaultValues;
- (id)parentSettings;

@end

