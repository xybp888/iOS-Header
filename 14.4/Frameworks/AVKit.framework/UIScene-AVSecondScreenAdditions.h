//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScene.h>

@interface UIScene (AVSecondScreenAdditions)
+ (id)avkit_secondScreenScenes;
- (void)_avkit_setPreferredRefreshRate:(double)arg1 HDRMode:(long long)arg2 overscanCompensation:(long long)arg3;
- (void)avkit_setPreferredRefreshRate:(double)arg1 HDRMode:(long long)arg2;
- (void)avkit_resetPreferredModeSwitchRequest;
- (_Bool)avkit_screenHasWindowsExcludingWindow:(id)arg1;
- (_Bool)avkit_isForeground;
- (long long)avkit_screenType;
- (id)avkit_asWindowScene;
@end

